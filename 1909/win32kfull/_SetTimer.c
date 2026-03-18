/*
 * XREFs of _SetTimer @ 0x1C01EBF84
 * Callers:
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  if ( !a1 || PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL, v9, v10, v11);
  return 0LL;
}
