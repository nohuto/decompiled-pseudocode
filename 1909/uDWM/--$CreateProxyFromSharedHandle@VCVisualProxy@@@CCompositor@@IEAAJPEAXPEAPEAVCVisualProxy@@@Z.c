/*
 * XREFs of ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18004CF1C
 * Callers:
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C190 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x180024090 (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18003BA44 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(__int64 a1, __int64 a2, CBaseObject **a3)
{
  __int64 v6; // rax
  CBaseObject *v7; // rbx
  int v8; // eax
  int v9; // edi
  void *v11; // [rsp+28h] [rbp-10h]
  CBaseObject *v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = &CVisualProxy::`vftable';
  }
  wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(&v12, (volatile signed __int32 *)v6);
  v7 = v12;
  if ( v12 )
  {
    v8 = CResourceProxy::InitializeFromSharedHandle((__int64)v12, 0x27u, *(_QWORD *)(a1 + 16), a2);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2Fu, v11);
    else
      v9 = 0;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Bu, v11);
    }
    else
    {
      *a3 = v7;
      v9 = 0;
    }
    CBaseObject::Release(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x89u, v11);
  }
  return (unsigned int)v9;
}
