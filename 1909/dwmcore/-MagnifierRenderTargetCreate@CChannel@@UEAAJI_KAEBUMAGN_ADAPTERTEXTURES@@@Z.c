/*
 * XREFs of ?MagnifierRenderTargetCreate@CChannel@@UEAAJI_KAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180156D40
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        __int64 a3,
        const struct MAGN_ADAPTERTEXTURES *a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v20; // ebx
  int v22; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v23; // [rsp+24h] [rbp-E4h] BYREF
  __int64 v24; // [rsp+28h] [rbp-E0h]
  __int128 v25; // [rsp+30h] [rbp-D8h]
  __int128 v26; // [rsp+40h] [rbp-C8h]
  __int128 v27; // [rsp+50h] [rbp-B8h]
  __int128 v28; // [rsp+60h] [rbp-A8h]
  __int128 v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+80h] [rbp-88h]
  __int128 v31; // [rsp+90h] [rbp-78h]
  __int128 v32; // [rsp+A0h] [rbp-68h]
  __int128 v33; // [rsp+B0h] [rbp-58h]
  __int128 v34; // [rsp+C0h] [rbp-48h]
  __int128 v35; // [rsp+D0h] [rbp-38h]
  __int128 v36; // [rsp+E0h] [rbp-28h]
  __int128 v37; // [rsp+F0h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+110h] [rbp+8h] BYREF

  v38 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 99);
  v22 = 263;
  memset_0(&v23, 0, 0xDCuLL);
  v8 = *(_OWORD *)a4;
  v23 = a2;
  v9 = *((_OWORD *)a4 + 1);
  v24 = a3;
  v25 = v8;
  v10 = *((_OWORD *)a4 + 2);
  v26 = v9;
  v11 = *((_OWORD *)a4 + 3);
  v27 = v10;
  v12 = *((_OWORD *)a4 + 4);
  v28 = v11;
  v13 = *((_OWORD *)a4 + 5);
  v29 = v12;
  v14 = *((_OWORD *)a4 + 6);
  v30 = v13;
  v31 = v14;
  v15 = *((_OWORD *)a4 + 7);
  a4 = (const struct MAGN_ADAPTERTEXTURES *)((char *)a4 + 128);
  v32 = v15;
  v16 = *((_OWORD *)a4 + 1);
  v33 = *(_OWORD *)a4;
  v17 = *((_OWORD *)a4 + 2);
  v34 = v16;
  v18 = *((_OWORD *)a4 + 3);
  v35 = v17;
  v19 = *((_OWORD *)a4 + 4);
  v36 = v18;
  v37 = v19;
  v20 = CChannel::SendCommand(this, &v22, 0xE0u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v38);
  return v20;
}
