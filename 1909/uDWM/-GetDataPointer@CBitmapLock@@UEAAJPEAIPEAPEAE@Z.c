/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180049140
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x18004FE40 (-GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800498B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  void *v11; // [rsp+28h] [rbp-10h]
  char *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (char *)this - 56;
  v12 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 157;
LABEL_11:
    v4 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10, v11);
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v10 = 158;
    goto LABEL_11;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v9 = -2003292412;
    v10 = 160;
    goto LABEL_11;
  }
  *a2 = *((_DWORD *)this + 16);
  *a3 = (unsigned __int8 *)*((_QWORD *)this + 7);
LABEL_7:
  CGuard<CMTALock>::~CGuard<CMTALock>(&v12);
  return v4;
}
