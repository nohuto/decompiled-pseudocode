/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x140187B9C
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187478 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x14018782C (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
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
  _DWORD *Config; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v25[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a3;
  memset(a6, 0, 0x30uLL);
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  v13 = 0;
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      a6[1] = Config[30] - a2;
    LOWORD(v12) = 12;
    LOBYTE(v11) = 1;
    v14 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, v11, v12, (__int64)v24, v25);
    v15 = v25[0];
    if ( v14 < 0 )
      v15 = 0LL;
    if ( v15 )
      a6[2] = v15 - (_DWORD)BaseOfImage;
    if ( a4 )
    {
      v16 = a4 - a2;
      v17 = a5[18];
      v18 = a5[19];
      if ( v17 <= a5[17] )
        v17 = a5[17];
      if ( v18 <= v17 )
        v18 = v17;
      v19 = a5 + 1;
      v20 = 16LL;
      do
      {
        v21 = v18;
        v18 = *v19++;
        if ( v18 <= v21 )
          v18 = v21;
        --v20;
      }
      while ( v20 );
      v22 = v16 + v18;
      if ( __OFSUB__(v22, v16) || v22 > 0x7FFFFFFF || v16 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *a6 = v16;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v13;
}
