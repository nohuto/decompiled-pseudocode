/*
 * XREFs of ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x180053030
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, unsigned int a2, double a3, int a4, unsigned int a5)
{
  unsigned int v8; // ebx
  float v9; // xmm0_4
  unsigned int v10; // ebx
  _DWORD v12[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 53LL);
  v8 = a5;
  CChannel::CheckOptionalHandle(this, a5, 180LL);
  v12[0] = 555;
  v9 = a3;
  v12[1] = a2;
  v12[3] = a4;
  v12[4] = v8;
  *(float *)&v12[2] = v9;
  v10 = CChannel::SendCommand(this, v12, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v10;
}
