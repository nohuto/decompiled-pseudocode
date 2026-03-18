/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180019888
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180019DCC (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCO.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802120AC (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800199A4 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ??$insert@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180019BE4 (--$insert@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@X@-$vecto.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGradientBrush::SetStops(CGradientBrush *this, _QWORD *a2, char a3)
{
  struct CResource **v3; // rbx
  struct CResource **v7; // rsi
  int v8; // eax
  __int64 v9; // r8
  struct CResource **v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v20; // [rsp+88h] [rbp+10h] BYREF

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = CResource::RegisterNotifier(this, *v3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr, v9);
    ++v3;
  }
  if ( !a3 )
  {
    v10 = (struct CResource **)*((_QWORD *)this + 15);
    v11 = 0LL;
    v12 = (unsigned __int64)(*((_QWORD *)this + 16) - (_QWORD)v10 + 7LL) >> 3;
    if ( (unsigned __int64)v10 > *((_QWORD *)this + 16) )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        CResource::UnRegisterNotifierInternal(this, *v10);
        ++v11;
        ++v10;
      }
      while ( v11 != v12 );
    }
    *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  }
  v13 = *((_QWORD *)this + 16);
  *((_QWORD *)&v17 + 1) = *a2;
  *(_QWORD *)&v17 = a2;
  v14 = v17;
  v17 = (unsigned __int64)a2;
  v18 = v14;
  std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>,void>(
    (_DWORD)this + 120,
    (unsigned int)&v20,
    v13,
    (unsigned int)&v17,
    (__int64)&v18);
  CGradientBrush::FlattenStops(this);
  v15 = *(_QWORD *)this;
  *((_BYTE *)this + 176) = 0;
  return (*(__int64 (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(v15 + 64))(this, 6LL, this);
}
