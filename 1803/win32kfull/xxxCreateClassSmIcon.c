/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C006BF64
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C001C0B4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C006C42C (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 *a1)
{
  BOOL v2; // esi
  __int64 v3; // rbp
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 80LL) + 74LL) != 3;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 80LL) )
    v3 = **(_QWORD **)(*(_QWORD *)*a1 + 80LL);
  else
    LODWORD(v3) = 0;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v6 = GetDpiForSystem();
  v7 = GetDpiDependentMetric(20LL, v6);
  v8 = (__int64 *)xxxClientCopyImage(v3, v2 + 1, v7, DpiDependentMetric, 0x4000);
  v10 = *(_OWORD *)LockPointer(v11, *(_QWORD *)*a1 + 112LL, v8);
  HMAssignmentLock(&v10);
  result = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 112LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
