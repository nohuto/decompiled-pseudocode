/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7670
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1401B600C (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F70A4 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140681FF4 (LdrImageDirectoryEntryToLoadConfig.c)
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
  __int64 Config; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  char v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a3;
  memset(a6, 0, 0x30uLL);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  v11 = 0;
  if ( Config && *(_DWORD *)Config >= 0xC8u )
  {
    v12 = *(_QWORD *)(Config + 120);
    if ( v12 )
      a6[1] = v12 - a2;
    v13 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, 1, 0xCu, (int)&v23, v24);
    v14 = v24[0];
    if ( v13 < 0 )
      v14 = 0LL;
    if ( v14 )
      a6[2] = v14 - (_DWORD)BaseAddress;
    if ( a4 )
    {
      v15 = a4 - a2;
      v16 = a5[18];
      v17 = a5[19];
      if ( v16 <= a5[17] )
        v16 = a5[17];
      if ( v17 <= v16 )
        v17 = v16;
      v18 = a5 + 1;
      v19 = 16LL;
      do
      {
        v20 = v17;
        v17 = *v18++;
        if ( v17 <= v20 )
          v17 = v20;
        --v19;
      }
      while ( v19 );
      v21 = v15 + v17;
      if ( __OFSUB__(v21, v15) || v21 > 0x7FFFFFFF || v15 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *a6 = v15;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}
