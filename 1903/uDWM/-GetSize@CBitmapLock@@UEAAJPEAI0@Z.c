/*
 * XREFs of ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800B9820
 * Callers:
 *     ?GetSize@CBitmapLock@@W7EAAJPEAI0@Z @ 0x180050100 (-GetSize@CBitmapLock@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180048254 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetSize(CBitmapLock *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (char *)this - 56;
  v11 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( !a2 )
  {
    v8 = -2147024809;
    v10 = 122;
LABEL_10:
    v4 = v8;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v10);
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v8 = -2147024809;
    v10 = 123;
    goto LABEL_10;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v8 = -2003292412;
    v10 = 125;
    goto LABEL_10;
  }
  *a2 = *((_DWORD *)this + 8);
  *a3 = *((_DWORD *)this + 9);
LABEL_11:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v11);
  return v4;
}
