/*
 * XREFs of ?ScaleTransformUpdate@CChannel@@UEAAJINNNN@Z @ 0x1800D4E00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::ScaleTransformUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  float v8; // xmm0_4
  float v9; // xmm1_4
  unsigned int v10; // ebx
  _DWORD v12[8]; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+10h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 149);
  v12[0] = 573;
  v8 = a3;
  v12[1] = a2;
  v9 = a4;
  *(float *)&v12[2] = v8;
  *(float *)&v12[3] = v9;
  *(float *)&v12[4] = a5;
  *(float *)&v12[5] = a6;
  v10 = CChannel::SendCommand(this, v12, 0x18u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
