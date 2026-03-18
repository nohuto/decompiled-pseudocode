/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00B6100
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C023ADB4 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0096014 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C00B4D58 (xxxClientCopyImage.c)
 */

__int64 *__fastcall xxxCreateClassSmIcon(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // rdi
  BOOL v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  int v15; // eax
  __int64 *v16; // rax
  __int64 *result; // rax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a1;
  v5 = *(_WORD *)(*(_QWORD *)(**a1 + 80) + 74LL) != 3;
  v6 = **a1;
  if ( *(_QWORD *)(v6 + 80) )
  {
    a1 = (__int64 **)**a1;
    v7 = *a1[10];
  }
  else
  {
    v7 = 0LL;
  }
  DpiForSystem = GetDpiForSystem((__int64)a1, v6, a3, a4);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v14 = GetDpiForSystem(v11, v10, v12, v13);
  v15 = GetDpiDependentMetric(20LL, v14);
  v16 = (__int64 *)xxxClientCopyImage(v7, (unsigned int)(v5 + 1), v15, DpiDependentMetric, 0x4000);
  v18 = *(_OWORD *)LockPointer(v19, **v4 + 112, v16);
  HMAssignmentLock(&v18);
  result = *v4;
  if ( *(_QWORD *)(**v4 + 112) )
  {
    result = *(__int64 **)(**v4 + 8);
    *((_WORD *)result + 3) |= 0x20u;
  }
  return result;
}
