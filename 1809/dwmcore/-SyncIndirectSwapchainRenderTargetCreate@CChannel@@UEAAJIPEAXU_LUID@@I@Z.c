/*
 * XREFs of ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x180147480
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180055F18 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _DWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v14; // [rsp+38h] [rbp-38h]
  struct _LUID v15; // [rsp+40h] [rbp-30h]
  unsigned int v16; // [rsp+48h] [rbp-28h]
  _BYTE v17[8]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13[0] = 200;
  v16 = a5;
  v13[1] = a2;
  v14 = a3;
  v15 = a4;
  v9 = CChannel::SendSyncCommand(this, v13, 0x1Cu, (struct MIL_MESSAGE *)v17);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x85Au);
  }
  else
  {
    v11 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v18, 0x85Cu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v11;
}
