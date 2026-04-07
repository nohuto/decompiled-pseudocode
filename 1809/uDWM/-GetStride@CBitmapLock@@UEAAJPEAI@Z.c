/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18004B7D0
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x18004E5F0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180037F94 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  char *v4; // rcx
  unsigned int v5; // ebx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 56;
  v7 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    v5 = *((_BYTE *)this + 16) == 0 ? 0x88982F04 : 0;
    if ( *((_BYTE *)this + 16) )
      *a2 = *((_DWORD *)this + 10);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x8Eu);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Cu);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v7);
  return v5;
}
