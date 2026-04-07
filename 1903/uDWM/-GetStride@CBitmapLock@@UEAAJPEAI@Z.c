/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180047A70
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x180050110 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180048254 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  char *v4; // rcx
  void *v7; // [rsp+28h] [rbp-10h]
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)this - 56;
  v8 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *a2 = *((_DWORD *)this + 10);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x8Eu, v7);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Cu, v7);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>(&v8);
  return v3;
}
