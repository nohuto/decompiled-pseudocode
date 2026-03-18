/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180053200
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800F1390 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    if ( *((_BYTE *)this + 56) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 20);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0x8Bu, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024809, 0x89u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return v5;
}
