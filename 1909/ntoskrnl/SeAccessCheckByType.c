/*
 * XREFs of SeAccessCheckByType @ 0x14000B010
 * Callers:
 *     NtAccessCheck @ 0x14000C910 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140127F90 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x14031C390 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        int *a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  int v13; // edx
  __int64 v14; // rax
  SIZE_T Length; // [rsp+40h] [rbp-48h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a9;
    v13 = *(_DWORD *)v14;
  }
  else
  {
    v13 = *a9;
  }
  LODWORD(Length) = v13;
  return SeAccessCheckByTypeWithAdminlessChecks(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           Address,
           Length,
           (__int64)a9,
           a10,
           a11,
           a12,
           0);
}
