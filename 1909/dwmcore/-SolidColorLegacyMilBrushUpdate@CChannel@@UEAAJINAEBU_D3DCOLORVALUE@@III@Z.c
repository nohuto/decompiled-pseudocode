/*
 * XREFs of ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800D05B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CChannel::SolidColorLegacyMilBrushUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        const struct _D3DCOLORVALUE *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  __int128 v13; // xmm1
  float v14; // xmm0_4
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v18[5]; // [rsp+24h] [rbp-54h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 172);
  v10 = a5;
  CChannel::CheckOptionalHandle((__int64)this, a5, 57LL);
  v11 = a6;
  CChannel::CheckOptionalHandle((__int64)this, a6, 179LL);
  v12 = a7;
  CChannel::CheckOptionalHandle((__int64)this, a7, 179LL);
  v17 = 579;
  memset_0(v18, 0, 0x24uLL);
  v13 = *(_OWORD *)&a4->r;
  v18[0] = a2;
  v18[2] = v10;
  v14 = a3;
  v18[3] = v11;
  v18[4] = v12;
  v19 = v13;
  *(float *)&v18[1] = v14;
  v15 = CChannel::SendCommand(this, &v17, 0x28u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return v15;
}
