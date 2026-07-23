/*
 * XREFs of VerifierIoCreateDevice @ 0x140934ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViDevObjAdd @ 0x140935340 (ViDevObjAdd.c)
 */

__int64 __fastcall VerifierIoCreateDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  int v7; // ebx

  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvIoCreateDevice)(a1, a2, a3);
  if ( v7 >= 0 && (MmVerifierData & 0x10) != 0 )
    ViDevObjAdd(*a7);
  return (unsigned int)v7;
}
