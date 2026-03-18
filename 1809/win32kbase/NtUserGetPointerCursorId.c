/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C00EF030
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C013B394 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2, __int64 a3)
{
  CTouchProcessor *v5; // rcx
  int PointerCursorId; // ebx
  char v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF
  struct tagTHREADINFO *v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v8, &v10, a3);
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v5, v10, a1, &v9);
    if ( PointerCursorId )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v9;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return PointerCursorId;
}
