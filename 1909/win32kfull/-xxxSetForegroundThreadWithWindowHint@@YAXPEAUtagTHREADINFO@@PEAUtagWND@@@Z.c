/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundThread @ 0x1C01D6600 (xxxSetForegroundThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C012F900 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *this, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // r8
  unsigned int DLT; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-59h] BYREF
  __int64 v18; // [rsp+28h] [rbp-51h]
  __int64 v19; // [rsp+30h] [rbp-49h]
  _QWORD v20[2]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v21; // [rsp+48h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-21h]
  __int128 v23; // [rsp+60h] [rbp-19h]
  __int128 v24; // [rsp+70h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp+7h]
  _QWORD v26[5]; // [rsp+88h] [rbp+Fh] BYREF

  if ( this != (struct tagTHREADINFO *)gptiForeground )
  {
    if ( !this || !gptiForeground || *((_QWORD *)this + 52) != *(_QWORD *)(gptiForeground + 416LL) )
    {
      EtwTraceFocusedProcessChange();
      v24 = 0uLL;
      v25 = 0LL;
      if ( (unsigned int)CitProcessForegroundChange(this, a2, gptiForeground, &v24) )
      {
        if ( this && (v5 = *((_QWORD *)this + 56)) != 0 && *(_QWORD *)(v5 + 288) )
          DWORD1(v24) = *(_DWORD *)(*((_QWORD *)this + 52) + 56LL);
        else
          DWORD1(v24) = 0;
        if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 448LL)) != 0 && *(_QWORD *)(v6 + 288) )
          LODWORD(v24) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 56LL);
        else
          LODWORD(v24) = 0;
        v20[1] = 9LL;
        v23 = 0LL;
        HIWORD(v25) = 0;
        v21 = v24;
        v20[0] = 0LL;
        v22 = v25;
        anonymous_namespace_::NotifyIAMWindowManagementEvent(v20);
      }
      if ( this )
        *(_QWORD *)(*((_QWORD *)this + 52) + 272LL) = PsChargeProcessWakeCounter(**((_QWORD **)this + 52), 0LL, 0LL);
      if ( gptiForeground )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 272LL);
        if ( v7 )
        {
          PsReleaseProcessWakeCounter(v7, 1LL);
          *(_QWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 272LL) = 0LL;
        }
      }
    }
    PriorityBoostCUI::TransitionForegroundPriority(this, a2, a3);
    if ( gptiForeground )
      v8 = *(_QWORD *)(gptiForeground + 432LL);
    else
      v8 = 0LL;
    EtwTraceFocusChange(this);
    v9 = (_QWORD *)gptiForeground;
    if ( gptiForeground )
    {
      if ( !this || *(_QWORD *)(gptiForeground + 416LL) != *((_QWORD *)this + 52) )
      {
        v9 = (_QWORD *)gptiForeground;
        *(_DWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 1076LL) = (MEMORY[0xFFFFF78000000320]
                                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      if ( *v9 )
        DisableDelegation();
    }
    DLT = DLT_FOREGROUND::getDLT();
    GetDomainLockRef(DLT);
    gptiForeground = this;
    if ( gSessionId != gServiceSessionId && !gProtocolType )
    {
      memset(v26, 0, sizeof(v26));
      if ( this )
      {
        LODWORD(v26[0]) = *(_DWORD *)(*((_QWORD *)this + 52) + 56LL);
        HIDWORD(v26[0]) = (unsigned int)PsGetThreadId(*(PETHREAD *)this);
        if ( a2 )
          v26[2] = *(_QWORD *)a2;
        else
          v26[2] = 0LL;
      }
      SendMessageTo(3LL, v26);
    }
    if ( gptiForeground )
    {
      v12 = *(_QWORD *)(gptiForeground + 432LL);
      if ( v12 )
      {
        if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v12 )
        {
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v11);
          v17 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
          v18 = v8;
          if ( v8 )
            HMLockObject(v8);
          xxxChangeForegroundKeyboardTable(v8, *(_QWORD *)(gptiForeground + 432LL));
          ThreadUnlock1(v15, v14, v16);
        }
      }
    }
    memset(gafAsyncKeyStateRecentDown, 0, 0x20uLL);
    ++*(_DWORD *)(gpsi + 6988LL);
  }
}
