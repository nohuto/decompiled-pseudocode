/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00B6560
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C02226E4 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C00234C8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C00B468C (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 *a1)
{
  BOOL v2; // esi
  __int64 v3; // rbp
  unsigned int DpiForSystem; // eax
  __int64 v5; // r8
  int DpiDependentMetric; // ebx
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 *v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 80LL) + 74LL) != 3;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 80LL) )
    v3 = **(_QWORD **)(*(_QWORD *)*a1 + 80LL);
  else
    v3 = 0LL;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem, v5);
  v7 = GetDpiForSystem();
  v9 = GetDpiDependentMetric(20LL, v7, v8);
  v10 = (__int64 *)xxxClientCopyImage(v3, (unsigned int)(v2 + 1), v9, DpiDependentMetric, 0x4000);
  v12 = *(_OWORD *)LockPointer(v13, *(_QWORD *)*a1 + 112LL, v10);
  HMAssignmentLock(&v12);
  result = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 112LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
