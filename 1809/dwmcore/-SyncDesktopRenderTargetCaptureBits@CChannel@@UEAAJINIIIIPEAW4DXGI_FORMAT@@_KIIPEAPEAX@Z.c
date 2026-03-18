/*
 * XREFs of ?SyncDesktopRenderTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z @ 0x180055E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180055F18 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::SyncDesktopRenderTargetCaptureBits(
        CChannel *this,
        int a2,
        double a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        enum DXGI_FORMAT *a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        void **a12)
{
  enum DXGI_FORMAT *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  void **v19; // rcx
  _BYTE v21[8]; // [rsp+38h] [rbp-59h] BYREF
  void *v22; // [rsp+40h] [rbp-51h]
  enum DXGI_FORMAT v23; // [rsp+4Ch] [rbp-45h]
  int v24; // [rsp+50h] [rbp-41h]
  int v25; // [rsp+58h] [rbp-39h] BYREF
  int v26; // [rsp+5Ch] [rbp-35h] BYREF
  double v27; // [rsp+60h] [rbp-31h]
  int v28; // [rsp+68h] [rbp-29h]
  unsigned int v29; // [rsp+6Ch] [rbp-25h]
  unsigned int v30; // [rsp+70h] [rbp-21h]
  unsigned int v31; // [rsp+74h] [rbp-1Dh]
  enum DXGI_FORMAT v32; // [rsp+78h] [rbp-19h]
  unsigned __int64 v33; // [rsp+7Ch] [rbp-15h]
  unsigned int v34; // [rsp+84h] [rbp-Dh]
  unsigned int v35; // [rsp+88h] [rbp-9h]
  char *v36; // [rsp+B8h] [rbp+27h] BYREF

  v36 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v25 = 137;
  memset_0(&v26, 0, 0x30uLL);
  v29 = a5;
  v30 = a6;
  v31 = a7;
  v28 = a4;
  v15 = a8;
  v27 = a3;
  v26 = a2;
  v32 = *a8;
  v33 = a9;
  v34 = a10;
  v35 = a11;
  v16 = CChannel::SendSyncCommand(this, &v25, 0x34u, (struct MIL_MESSAGE *)v21);
  v18 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x7C2u);
  }
  else
  {
    v18 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v24, 0x7C4u);
    }
    else
    {
      v19 = a12;
      *v15 = v23;
      *v19 = v22;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v36);
  return v18;
}
