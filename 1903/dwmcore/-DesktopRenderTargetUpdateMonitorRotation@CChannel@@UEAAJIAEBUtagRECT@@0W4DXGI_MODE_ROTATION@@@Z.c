/*
 * XREFs of ?DesktopRenderTargetUpdateMonitorRotation@CChannel@@UEAAJIAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@@Z @ 0x180157D60
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800405B8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CChannel::DesktopRenderTargetUpdateMonitorRotation(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        enum DXGI_MODE_ROTATION a5)
{
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-34h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+38h] [rbp-20h]
  enum DXGI_MODE_ROTATION v17; // [rsp+48h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 48);
  v13 = 150;
  memset_0(&v14, 0, 0x28uLL);
  v9 = (__int128)*a3;
  v10 = (__int128)*a4;
  v14 = a2;
  v17 = a5;
  v15 = v9;
  v16 = v10;
  v11 = CChannel::SendCommand(this, &v13, 0x2Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v11;
}
