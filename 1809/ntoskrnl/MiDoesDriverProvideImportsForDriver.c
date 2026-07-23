/*
 * XREFs of MiDoesDriverProvideImportsForDriver @ 0x1409F8100
 * Callers:
 *     MiImportOptimizationVetosDriverRelocation @ 0x1409ABEA0 (MiImportOptimizationVetosDriverRelocation.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall MiDoesDriverProvideImportsForDriver(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(unsigned int *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 48);
  LOWORD(a3) = 12;
  LOBYTE(a2) = 1;
  v6 = v3 + v4;
  v7 = RtlpImageDirectoryEntryToDataEx(v5, a2, a3, (__int64)&v12, &v13);
  v8 = v13;
  v9 = 0;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( !v8 || !(v12 >> 3) )
    return 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 8LL * v9);
    if ( v10 >= v3 && v10 < v6 )
      break;
    if ( ++v9 >= v12 >> 3 )
      return 0LL;
  }
  return 1LL;
}
