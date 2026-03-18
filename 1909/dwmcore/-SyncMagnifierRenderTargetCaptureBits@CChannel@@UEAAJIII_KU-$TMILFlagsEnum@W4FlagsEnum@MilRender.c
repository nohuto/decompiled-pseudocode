/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@IAEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAI@Z @ 0x180157DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800D3274 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 v13; // xmm1
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _BYTE v18[8]; // [rsp+30h] [rbp-51h] BYREF
  signed int v19; // [rsp+38h] [rbp-49h]
  int v20; // [rsp+3Ch] [rbp-45h]
  _DWORD v21[4]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+6Ch] [rbp-15h] BYREF
  __int128 v25; // [rsp+70h] [rbp-11h]
  __int128 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+90h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+C0h] [rbp+3Fh] BYREF

  v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 99);
  v21[0] = 262;
  memset_0(&v24, 0, 0x2CuLL);
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v21[1] = a2;
  v21[2] = a3;
  v21[3] = a4;
  v13 = a8[1];
  v25 = *a8;
  v27 = *((_QWORD *)a8 + 4);
  v26 = v13;
  v14 = CChannel::SendSyncCommand(this, v21, 0x48u, (struct MIL_MESSAGE *)v18);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x816u, 0LL);
  }
  else
  {
    v16 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v19, 0x818u, 0LL);
    else
      *a9 = v20;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return v16;
}
