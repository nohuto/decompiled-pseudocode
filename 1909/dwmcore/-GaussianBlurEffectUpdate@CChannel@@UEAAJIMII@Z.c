/*
 * XREFs of ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z @ 0x180156830
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GaussianBlurEffectUpdate(
        CChannel *this,
        unsigned int a2,
        float a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  _DWORD v10[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 59);
  v10[0] = 557;
  v10[4] = a5;
  *(float *)&v10[2] = a3;
  v10[1] = a2;
  v10[3] = a4;
  v8 = CChannel::SendCommand(this, v10, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v8;
}
