/*
 * XREFs of ??$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z @ 0x180023F0C
 * Callers:
 *     ?InitializeFromExistingResource@CVisual@@MEAAJI@Z @ 0x18000F620 (-InitializeFromExistingResource@CVisual@@MEAAJI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180023FD4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSourceProxy@@@Z @ 0x180024090 (--4-$com_ptr_t@VCBitmapSourceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSour.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromHandle<CVisualProxy>(__int64 a1, unsigned int a2, CBaseObject **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  CBaseObject *v8; // rbx
  int v9; // eax
  int v10; // edi
  void *v12; // [rsp+28h] [rbp-10h]
  CBaseObject *v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
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
  wil::com_ptr_t<CBitmapSourceProxy,wil::err_returncode_policy>::operator=(&v13, v6);
  v8 = v13;
  if ( v13 )
  {
    v9 = CResource::WrapExistingResource(*(_QWORD *)(a1 + 16), v7, a2, (char *)v13 + 16);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x22u, v12);
    else
      v10 = 0;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x75u, v12);
    }
    else
    {
      *a3 = v8;
      v10 = 0;
    }
    CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x73u, v12);
  }
  return (unsigned int)v10;
}
