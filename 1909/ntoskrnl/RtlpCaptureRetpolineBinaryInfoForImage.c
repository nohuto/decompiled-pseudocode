/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x14018814C
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187A28 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140187DDC (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        PVOID BaseAddress,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v7; // r15
  _DWORD *Config; // rax
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  char v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a3;
  memset(a6, 0, 0x30uLL);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  v11 = 0;
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      a6[1] = Config[30] - a2;
    v12 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 0xCu, (int)&v22, v23);
    v13 = v23[0];
    if ( v12 < 0 )
      v13 = 0LL;
    if ( v13 )
      a6[2] = v13 - (_DWORD)BaseAddress;
    if ( a4 )
    {
      v14 = a4 - a2;
      v15 = a5[18];
      v16 = a5[19];
      if ( v15 <= a5[17] )
        v15 = a5[17];
      if ( v16 <= v15 )
        v16 = v15;
      v17 = a5 + 1;
      v18 = 16LL;
      do
      {
        v19 = v16;
        v16 = *v17++;
        if ( v16 <= v19 )
          v16 = v19;
        --v18;
      }
      while ( v18 );
      v20 = v14 + v16;
      if ( __OFSUB__(v20, v14) || v20 > 0x7FFFFFFF || v14 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *a6 = v14;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}
