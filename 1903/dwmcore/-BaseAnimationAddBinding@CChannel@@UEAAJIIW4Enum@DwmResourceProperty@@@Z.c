/*
 * XREFs of ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180020820
 * Callers:
 *     <none>
 * Callees:
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x1800208E0 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
  CChannel::CheckHandle(a1, a2, 9LL);
  CChannel::CheckHandle(a1, a3, 0LL);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(__int64 *)((char *)si128.m128i_i64 + 4) = __PAIR64__(a3, a2);
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, (char *)&si128.m128i_u64[1] + 4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8CDu, 0LL);
  }
  else
  {
    v11 = CChannel::SendCommand((CChannel *)a1, &si128, 0x10u);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x8CEu, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v10;
}
