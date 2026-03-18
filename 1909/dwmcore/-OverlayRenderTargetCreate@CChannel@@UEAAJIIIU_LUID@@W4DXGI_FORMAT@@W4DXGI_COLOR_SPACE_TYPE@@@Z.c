/*
 * XREFs of ?OverlayRenderTargetCreate@CChannel@@UEAAJIIIU_LUID@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180157540
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800569C4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::OverlayRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        struct _LUID a5,
        enum DXGI_FORMAT a6,
        enum DXGI_COLOR_SPACE_TYPE a7)
{
  unsigned int v11; // ebx
  _DWORD v13[4]; // [rsp+20h] [rbp-20h] BYREF
  struct _LUID v14; // [rsp+30h] [rbp-10h]
  enum DXGI_FORMAT v15; // [rsp+38h] [rbp-8h]
  enum DXGI_COLOR_SPACE_TYPE v16; // [rsp+3Ch] [rbp-4h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+20h] BYREF

  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 110);
  v13[0] = 290;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v11 = CChannel::SendCommand(this, v13, 0x20u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
  return v11;
}
