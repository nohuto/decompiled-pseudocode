/*
 * XREFs of ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01328D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     SetNewForegroundQueue @ 0x1C00D0EA0 (SetNewForegroundQueue.c)
 *     HasHidTable @ 0x1C00D2180 (HasHidTable.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
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
  LARGE_INTEGER *v15; // rbx
  LARGE_INTEGER v16; // rdx
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v12 = *(_QWORD *)(gpqForeground + 120LL);
      v13 = v12 ? *(_QWORD *)(v12 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( !(unsigned int)HasHidTable(v13)
        || (!v12 ? (v14 = *(_QWORD *)(gpqForeground + 96LL)) : (v14 = *(_QWORD *)(v12 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 424) + 832LL) + 100LL) & 0x20) == 0) )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        PostInputMessage(gpqForeground, 0LL, a8, a1, ((a3 | a2) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL);
      }
    }
    xxxCancelCoolSwitch();
    v15 = (LARGE_INTEGER *)gspwndActivate;
    if ( gspwndActivate )
    {
      v16 = *(LARGE_INTEGER *)(gspwndActivate + 16);
      if ( gpqForeground == *(_QWORD *)(v16.QuadPart + 432) )
      {
        SetNewForegroundQueue(0LL);
        v16 = v15[2];
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, (struct tagTHREADINFO *)v16.QuadPart, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
      v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v21;
      v21[1] = v15;
      _InterlockedIncrement((volatile signed __int32 *)&v15[1]);
      xxxSetForegroundWindow2(v15, 0LL, 0x12u);
      if ( (*(_BYTE *)(v15[5].QuadPart + 31) & 0x40) != 0 )
        xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v20, v19);
      HMAssignmentUnlock(&gspwndActivate);
    }
  }
}
