/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180021110
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FB0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x1800211CC (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z @ 0x180021318 (--0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct IWarpPrivateAPI *a2,
        struct IDXGIResource *a3,
        int a4,
        struct CWarpLockSubresource **a5)
{
  CWarpLockSubresource *v9; // rax
  unsigned int v10; // ecx
  CWarpLockSubresource *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  __int64 result; // rax

  v9 = (CWarpLockSubresource *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  if ( v9 )
    v11 = CWarpLockSubresource::CWarpLockSubresource(v9, a1, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    CMILCOMBase::InternalAddRef(v11);
    *((_QWORD *)v11 + 4) = a3;
    if ( a3 )
      ((void (__fastcall *)(struct IDXGIResource *))a3->lpVtbl->AddRef)(a3);
    *((_DWORD *)v11 + 10) = a4;
    v12 = CWarpLockSubresource::Lock(v11);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x78u);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x45u);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x44u);
  }
  result = (unsigned int)v14;
  *a5 = v11;
  return result;
}
