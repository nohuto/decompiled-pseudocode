/*
 * XREFs of ?CaptureControllerSetContentSize@CChannel@@UEAAJINN@Z @ 0x180155FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetContentSize(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 16);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
