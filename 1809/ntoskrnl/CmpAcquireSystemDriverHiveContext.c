/*
 * XREFs of CmpAcquireSystemDriverHiveContext @ 0x1409CCEA8
 * Callers:
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 * Callees:
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D68BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindControlSet @ 0x14073D2BC (CmpFindControlSet.c)
 */

__int64 __fastcall CmpAcquireSystemDriverHiveContext(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  ULONG_PTR v4; // rcx
  int ControlSet; // eax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = CmpPerformKeyBodyDeletionCheck(*(_QWORD *)(a1 + 40), 0LL);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
    *(_QWORD *)(a1 + 48) = v4;
    ControlSet = CmpFindControlSet(v4, *(unsigned int *)(*(_QWORD *)(v3 + 8) + 32LL), (int)&CmpCurrentString, &v7);
    *(_DWORD *)(a1 + 56) = ControlSet;
    if ( ControlSet == -1 )
      return (unsigned int)-1073741275;
  }
  return (unsigned int)v2;
}
