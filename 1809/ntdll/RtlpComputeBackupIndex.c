/*
 * XREFs of RtlpComputeBackupIndex @ 0x180083080
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpComputeBackupIndex(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r11
  int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r9

  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) != 1 )
    return 3LL;
  v3 = 0;
  v4 = *v1 >> 1;
  v5 = 2;
  if ( v4 <= 2 )
    return v5;
  v6 = *((_QWORD *)v1 + 1);
  while ( *(_WORD *)(v6 + 2LL * v5) != 92 && *(_WORD *)(v6 + 2LL * v5) != 47 || ++v3 != 2 )
  {
    if ( ++v5 >= v4 )
      return v5;
  }
  return v5 + 1;
}
