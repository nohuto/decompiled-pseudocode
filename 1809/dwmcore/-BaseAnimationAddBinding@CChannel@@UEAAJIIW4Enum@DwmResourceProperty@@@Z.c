/*
 * XREFs of ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x18001ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x18001EE10 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::BaseAnimationAddBinding(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __m128i si128; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, (char *)&si128.m128i_u64[1] + 4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x88Bu);
  }
  else
  {
    v11 = CChannel::SendCommand((CChannel *)a1, &si128, 0x10u);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x88Cu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v10;
}
