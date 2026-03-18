/*
 * XREFs of ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x180159340
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800D2E94 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CChannel::SyncLegacyVisualCaptureRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        enum DXGI_FORMAT *a10,
        void **a11)
{
  enum DXGI_FORMAT *v14; // rdi
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  void **v18; // rcx
  _BYTE v20[8]; // [rsp+38h] [rbp-41h] BYREF
  void *v21; // [rsp+40h] [rbp-39h]
  enum DXGI_FORMAT v22; // [rsp+4Ch] [rbp-2Dh]
  signed int v23; // [rsp+50h] [rbp-29h]
  int v24; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v25[7]; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-1h]
  enum DXGI_FORMAT v27; // [rsp+80h] [rbp+7h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+A8h] [rbp+2Fh] BYREF

  v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 93);
  CChannel::CheckHandle((__int64)this, a3, 189);
  v24 = 257;
  memset_0(v25, 0, 0x2CuLL);
  v25[3] = a5;
  v25[4] = a6;
  v25[5] = a7;
  v25[6] = a8;
  v25[1] = a3;
  v14 = a10;
  v26 = a9;
  *(float *)&v25[2] = a4;
  v25[0] = a2;
  v27 = *a10;
  v15 = CChannel::SendSyncCommand(this, &v24, 0x30u, (struct MIL_MESSAGE *)v20);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x4F9u, 0LL);
  }
  else
  {
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v23, 0x4FBu, 0LL);
    }
    else
    {
      v18 = a11;
      *v14 = v22;
      *v18 = v21;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return v17;
}
