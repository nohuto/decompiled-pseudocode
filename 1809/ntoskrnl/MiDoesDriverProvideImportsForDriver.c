/*
 * XREFs of MiDoesDriverProvideImportsForDriver @ 0x1409F7100
 * Callers:
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409AAEA0 (MiImportOptimizationVetosDriverRelocation.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall MiDoesDriverProvideImportsForDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = v2 + *(unsigned int *)(a1 + 64);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a2 + 48), 1, 0xCu, (int)&v9, &v10);
  v5 = v10;
  v6 = 0;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( !v5 || !(v9 >> 3) )
    return 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 8LL * v6);
    if ( v7 >= v2 && v7 < v3 )
      break;
    if ( ++v6 >= v9 >> 3 )
      return 0LL;
  }
  return 1LL;
}
