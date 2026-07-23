/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7860
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        PVOID BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v7; // r15
  __int64 Config; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a3;
  memset(a6, 0, 0x30uLL);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  v13 = 0;
  if ( Config && *(_DWORD *)Config >= 0xC8u )
  {
    v14 = *(_QWORD *)(Config + 120);
    if ( v14 )
      a6[1] = v14 - a2;
    LOWORD(v12) = 12;
    LOBYTE(v11) = 1;
    v15 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, v11, v12, (__int64)v25, v26);
    v16 = v26[0];
    if ( v15 < 0 )
      v16 = 0LL;
    if ( v16 )
      a6[2] = v16 - (_DWORD)BaseOfImage;
    if ( a4 )
    {
      v17 = a4 - a2;
      v18 = a5[18];
      v19 = a5[19];
      if ( v18 <= a5[17] )
        v18 = a5[17];
      if ( v19 <= v18 )
        v19 = v18;
      v20 = a5 + 1;
      v21 = 16LL;
      do
      {
        v22 = v19;
        v19 = *v20++;
        if ( v19 <= v22 )
          v19 = v22;
        --v21;
      }
      while ( v21 );
      v23 = v17 + v19;
      if ( __OFSUB__(v23, v17) || v23 > 0x7FFFFFFF || v17 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *a6 = v17;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v13;
}
