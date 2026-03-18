/*
 * XREFs of ?SyncDesktopRenderTargetCaptureBits@CChannel@@UEAAJIIIII_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800D2DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800D2E94 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CChannel::SyncDesktopRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        enum DXGI_FORMAT *a8,
        void **a9)
{
  enum DXGI_FORMAT *v13; // rdi
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  void **v17; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-50h] BYREF
  void *v20; // [rsp+38h] [rbp-48h]
  enum DXGI_FORMAT v21; // [rsp+44h] [rbp-3Ch]
  signed int v22; // [rsp+48h] [rbp-38h]
  int v23; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v24[5]; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-18h]
  enum DXGI_FORMAT v26; // [rsp+70h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+A0h] [rbp+20h] BYREF

  v27 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 48);
  v23 = 142;
  memset_0(v24, 0, 0x24uLL);
  v24[3] = a5;
  v24[4] = a6;
  v24[1] = a3;
  v13 = a8;
  v25 = a7;
  v24[0] = a2;
  v24[2] = a4;
  v26 = *a8;
  v14 = CChannel::SendSyncCommand(this, &v23, 0x28u, (struct MIL_MESSAGE *)v19);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x7F3u, 0LL);
  }
  else
  {
    v16 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v22, 0x7F5u, 0LL);
    }
    else
    {
      v17 = a9;
      *v13 = v21;
      *v17 = v20;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v27);
  return v16;
}
