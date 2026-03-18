/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C0118270
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0169A60 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  ULONG64 v7; // rdx
  ULONG64 v8; // rcx
  int PointerCursorId; // ebx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v12; // [rsp+60h] [rbp+18h]

  v11 = 0;
  v4 = EnterSharedCrit(0, 1);
  v12 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v6, v4, a1, &v11);
    if ( PointerCursorId )
    {
      v8 = MmUserProbeAddress;
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v11;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return PointerCursorId;
}
