/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x1800216F0
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@AEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180021590 (-TryFastWarpLock@CD2DBitmap@@AEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x1800217A0 (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z @ 0x1800218E4 (--0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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

  v9 = (CWarpLockSubresource *)DefaultHeap::Alloc(0x40uLL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x75u, 0LL);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x42u, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x41u, 0LL);
  }
  result = (unsigned int)v14;
  *a5 = v11;
  return result;
}
