/*
 * XREFs of ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C010FD90
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     SetNewForegroundQueue @ 0x1C005A780 (SetNewForegroundQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 */

void __fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v22[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = *(_QWORD *)(gpqForeground + 120LL);
      v13 = v12 ? *(_QWORD *)(v12 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( !(unsigned int)HasHidTable(v13)
        || (!v12 ? (v14 = *(_QWORD *)(gpqForeground + 96LL)) : (v14 = *(_QWORD *)(v12 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 416) + 824LL) + 100LL) & 0x20) == 0) )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        PostInputMessage(gpqForeground, 0LL, a8, a1, ((a3 | a2) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL);
      }
    }
    xxxCancelCoolSwitch();
    v15 = gspwndActivate;
    if ( gspwndActivate )
    {
      v16 = *(_QWORD *)(gspwndActivate + 16);
      if ( gpqForeground == *(_QWORD *)(v16 + 424) )
      {
        SetNewForegroundQueue(0LL);
        v16 = *(_QWORD *)(v15 + 16);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v16, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v22;
      v22[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      xxxSetForegroundWindow2((struct tagWND *)v15, 0LL, 0x12u, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v20, v19, v21);
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
