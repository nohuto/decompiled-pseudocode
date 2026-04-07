/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180037010
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x18004FD80 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800498B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180049BCC (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(CCompressedSourceBitmap *this, unsigned int *a2, unsigned int *a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  int v9; // eax
  void *v10; // [rsp+28h] [rbp-20h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 42) && *((_DWORD *)this + 43)
    || (v9 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)((char *)this - 16)),
        v7 = v9,
        v9 >= 0) )
  {
    v6 = *((_BYTE *)this + 144) == 0;
    v11 = (char *)this + 96;
    if ( !v6 )
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    if ( a2 && a3 )
    {
      *a2 = *((_DWORD *)this + 42);
      *a3 = *((_DWORD *)this + 43);
      if ( this != (CCompressedSourceBitmap *)-96LL && *((_BYTE *)this + 144) )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
      return 0;
    }
    else
    {
      CGuard<CMTALock>::~CGuard<CMTALock>(&v11);
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x74u, v10);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x70u, v10);
  }
  return v7;
}
