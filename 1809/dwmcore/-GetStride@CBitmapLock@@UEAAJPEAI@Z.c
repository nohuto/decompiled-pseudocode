/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180097D10
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800F1310 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a2 )
  {
    v5 = *((_BYTE *)this + 56) == 0 ? 0x88982F04 : 0;
    if ( *((_BYTE *)this + 56) )
      *a2 = *((_DWORD *)this + 20);
    else
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, 0x8Eu);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x8Cu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v5;
}
