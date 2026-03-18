/*
 * XREFs of NtUserGetPointerType @ 0x1C00EF780
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+18h] BYREF
  struct tagTHREADINFO *v9; // [rsp+88h] [rbp+20h] BYREF

  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v7, &v9, a3);
  v5 = 0;
  if ( !a1 || HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           (CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink,
           (struct tagTHREADINFO *)((char *)v9 + 1080),
           a1,
           &v8,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL);
    goto LABEL_11;
  }
  v8 = 4;
LABEL_7:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v8;
  v5 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v5;
}
