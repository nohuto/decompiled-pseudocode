/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C00EF660
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C013DBB8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x1C0163E6C (ApiSetGetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v9; // rcx
  int MiPInputTransform; // eax
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  struct tagTHREADINFO *v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v12, &v13, (__int64)a3);
  v7 = 0;
  if ( a1 && !HIWORD(a1) && (unsigned int)(v4 - 1) <= 0x63 && a3 && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
      MiPInputTransform = ApiSetGetMiPInputTransform(v13, a3);
    else
      MiPInputTransform = CTouchProcessor::GetPointerTransform(v9, v13, a1, v4, (struct tagINPUT_TRANSFORM *)a3);
    v7 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
