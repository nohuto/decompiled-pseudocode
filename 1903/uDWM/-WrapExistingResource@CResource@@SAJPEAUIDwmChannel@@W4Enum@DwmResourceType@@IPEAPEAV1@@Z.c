/*
 * XREFs of ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180024614
 * Callers:
 *     ??$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z @ 0x18002454C (--$CreateProxyFromHandle@VCVisualProxy@@@CCompositor@@IEAAJIPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z @ 0x1800251DC (--$CreateProxyFromHandle@VCWindowNodeProxy@@@CCompositor@@IEAAJIPEAPEAVCWindowNodeProxy@@@Z.c)
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18003C134 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800815AC (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::WrapExistingResource(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  void *v12; // [rsp+28h] [rbp-10h]

  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = &CResource::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = a1;
    *(_DWORD *)(v8 + 24) = a3;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a3);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x60u, v12);
    else
      v10 = 0;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x81u, v12);
    }
    else
    {
      *a4 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CBaseObject::Release((CBaseObject *)v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Fu, v12);
  }
  return (unsigned int)v10;
}
