/*
 * XREFs of ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801C306C
 * Callers:
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801C2BD0 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 * Callees:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180005D50 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006074 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18001E87C (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  unsigned int v2; // edi
  CLinearGradientBrush *v3; // rax
  CLinearGradientBrush *v4; // rcx
  __int64 v5; // rsi
  char *v6; // rax
  __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // r14
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-30h]
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 31) )
    return v2;
  v3 = (CLinearGradientBrush *)WPF::ProcessHeapImpl::AllocClear(0xC0uLL);
  if ( v3 )
    v4 = CLinearGradientBrush::CLinearGradientBrush(v3, *((struct CComposition **)this + 2));
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v4;
  if ( v4 )
    (*(void (__fastcall **)(CLinearGradientBrush *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( !*((_QWORD *)this + 31) )
  {
    v20 = 110;
LABEL_21:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, -2147024882, v20);
    v10 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    return v2;
  }
  v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = *((_QWORD *)this + 2);
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CColorGradientStop::`vftable';
    *((_DWORD *)v6 + 14) = 0;
    *(_OWORD *)(v6 + 60) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 32,
    v7);
  if ( !*((_QWORD *)this + 32) )
  {
    v20 = 112;
    goto LABEL_21;
  }
  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 2) = *((_QWORD *)this + 2);
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_DWORD *)v8 + 8) = 0;
    *(_QWORD *)v8 = &CColorGradientStop::`vftable';
    *((_DWORD *)v8 + 14) = 0;
    *(_OWORD *)(v8 + 60) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 33,
    v9);
  if ( !*((_QWORD *)this + 33) )
  {
    v20 = 114;
    goto LABEL_21;
  }
  v23 = *((_QWORD *)this + 32);
  v22 = 0LL;
  v21 = 0LL;
  std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>((const void **)&v21, 0LL, &v23);
  v14 = *((_QWORD *)this + 33);
  v15 = v22;
  v16 = *((_QWORD *)&v21 + 1);
  v23 = v14;
  if ( v22 == *((_QWORD *)&v21 + 1) )
  {
    std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(
      (const void **)&v21,
      *((_BYTE **)&v21 + 1),
      &v23);
    v17 = *((_QWORD *)&v21 + 1);
    v15 = v22;
  }
  else
  {
    **((_QWORD **)&v21 + 1) = v14;
    v17 = v16 + 8;
  }
  v18 = (void *)v21;
  v19 = (v17 - (__int64)v21) >> 3;
  *(_QWORD *)&v21 = (int)v19;
  if ( (int)v19 < 0 || (*((_QWORD *)&v21 + 1) = v18) == 0LL && (_DWORD)v19 )
  {
    gsl::details::terminate((gsl::details *)(int)v19);
    JUMPOUT(0x1801C3320LL);
  }
  CGradientBrush::SetStops(*((CGradientBrush **)this + 31), &v21, 0);
  if ( v18 )
    std::_Deallocate<16,0>(v18, (v15 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
  return v2;
}
