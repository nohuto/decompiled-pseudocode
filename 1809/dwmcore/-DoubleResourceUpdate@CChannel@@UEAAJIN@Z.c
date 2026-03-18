/*
 * XREFs of ?DoubleResourceUpdate@CChannel@@UEAAJIN@Z @ 0x180146180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::DoubleResourceUpdate(CChannel *this, int a2, double a3)
{
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  double v8; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v7[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8 = a3;
  v7[1] = a2;
  v5 = CChannel::SendCommand(this, v7, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v5;
}
