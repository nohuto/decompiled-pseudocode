/*
 * XREFs of ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x180215730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v6 = -2003292404;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a2 )
  {
    v9 = 519;
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, v9);
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v9 = 520;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 6) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 20);
    *a3 = *((_DWORD *)this + 21);
    goto LABEL_5;
  }
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x212u);
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v6;
}
