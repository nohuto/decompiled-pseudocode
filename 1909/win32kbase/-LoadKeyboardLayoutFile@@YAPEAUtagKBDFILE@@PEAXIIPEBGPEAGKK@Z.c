/*
 * XREFs of ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00754BC
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C007559C (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     wcsncpycch @ 0x1C0075E4C (wcsncpycch.c)
 *     _wcsicmp @ 0x1C00B83BC (_wcsicmp.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C017E20C (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 */

struct tagKBDFILE *__fastcall LoadKeyboardLayoutFile(
        void *a1,
        unsigned int a2,
        __int64 a3,
        const unsigned __int16 *a4,
        wchar_t *Str2,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v11; // rax
  struct tagKbdLayer *LayoutFile; // rax
  __int64 v13; // r8
  __int64 v14; // rdx

  v7 = gpkfList;
  v8 = a3;
  while ( v7 )
  {
    if ( Str2 && !wcsicmp((const wchar_t *)(v7 + 56), Str2) )
      return (struct tagKBDFILE *)v7;
    v7 = *(_QWORD *)(v7 + 16);
  }
  LOBYTE(a3) = 14;
  v11 = HMAllocObject(0LL, 0LL, a3, 0x78u);
  v7 = v11;
  if ( v11 )
  {
    if ( a1 )
    {
      wcsncpycch(v11 + 56, Str2, 32LL);
      *(_WORD *)(v7 + 118) = 0;
      LayoutFile = ReadLayoutFile((struct tagKBDFILE *)v7, a1, a2, v8);
      v14 = a6;
      *(_QWORD *)(v7 + 32) = LayoutFile;
      if ( a6 || a7 )
      {
        if ( LayoutFile )
        {
          *((_DWORD *)LayoutFile + 24) = a6;
          *(_DWORD *)(*(_QWORD *)(v7 + 32) + 100LL) = a7;
        }
      }
    }
    else
    {
      *(_QWORD *)(v11 + 32) = PrepareFallbackKeyboardFile((struct tagKBDFILE *)v11);
    }
    if ( *(_QWORD *)(v7 + 32) )
    {
      *(_QWORD *)(v7 + 16) = gpkfList;
      gpkfList = v7;
      return (struct tagKBDFILE *)v7;
    }
    HMFreeObject((_QWORD *)v7, v14, v13);
  }
  return 0LL;
}
