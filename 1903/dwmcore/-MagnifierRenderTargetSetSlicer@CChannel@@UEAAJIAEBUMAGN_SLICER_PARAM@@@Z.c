/*
 * XREFs of ?MagnifierRenderTargetSetSlicer@CChannel@@UEAAJIAEBUMAGN_SLICER_PARAM@@@Z @ 0x180158670
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetSetSlicer(
        CChannel *this,
        unsigned int a2,
        const struct MAGN_SLICER_PARAM *a3)
{
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 99);
  v6 = *(_OWORD *)a3;
  v7 = *((_QWORD *)a3 + 2);
  v10[0] = 266;
  v10[1] = a2;
  v11 = v6;
  v12 = v7;
  v8 = CChannel::SendCommand(this, v10, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v8;
}
