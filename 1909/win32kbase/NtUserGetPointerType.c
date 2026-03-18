/*
 * XREFs of NtUserGetPointerType @ 0x1C0116240
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016AD00 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  int v6; // ebx
  ULONG64 v7; // rcx
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v10; // [rsp+70h] [rbp+18h]

  v4 = EnterSharedCrit(0, 1);
  v10 = v4;
  v6 = 0;
  if ( !a1 || HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINFO *)((char *)v4 + 1080),
           a1,
           &v9,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL, v5);
    goto LABEL_11;
  }
  v9 = 4;
LABEL_7:
  v7 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v9;
  v6 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v7, v5);
  return v6;
}
