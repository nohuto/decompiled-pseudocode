/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C0056EB0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C023A794 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C023FDC0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0036D4C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C0055B04 (xxxClientCopyImage.c)
 */

__int64 *__fastcall xxxCreateClassSmIcon(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 **v3; // rdi
  BOOL v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  __int64 *v14; // rax
  __int64 *result; // rax
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a1;
  v4 = *(_WORD *)(*(_QWORD *)(**a1 + 80) + 74LL) != 3;
  v5 = **a1;
  if ( *(_QWORD *)(v5 + 80) )
  {
    a1 = (__int64 **)**a1;
    v6 = *a1[10];
  }
  else
  {
    v6 = 0LL;
  }
  DpiForSystem = GetDpiForSystem((__int64)a1, v5, a3);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v12 = GetDpiForSystem(v10, v9, v11);
  v13 = GetDpiDependentMetric(20LL, v12);
  v14 = (__int64 *)xxxClientCopyImage(v6, (unsigned int)(v4 + 1), v13, DpiDependentMetric, 0x4000);
  v16 = *(_OWORD *)LockPointer(v17, **v3 + 112, v14);
  HMAssignmentLock(&v16);
  result = *v3;
  if ( *(_QWORD *)(**v3 + 112) )
  {
    result = *(__int64 **)(**v3 + 8);
    *((_WORD *)result + 3) |= 0x20u;
  }
  return result;
}
