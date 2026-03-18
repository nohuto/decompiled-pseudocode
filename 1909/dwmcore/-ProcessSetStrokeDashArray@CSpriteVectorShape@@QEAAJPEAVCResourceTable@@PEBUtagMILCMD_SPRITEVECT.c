/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801F9F70
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A1C50 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801F9334 (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  char *v11; // r8
  __int128 v12; // xmm0
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF
  struct CResourceTable *v17; // [rsp+88h] [rbp+28h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  if ( v5 != a5 || (a5 & 3) != 0 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0xCAu, 0LL);
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 144);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
      std::vector<float>::reserve((__int64)this + 144, v10);
    }
    v14[0] = v10;
    v14[1] = a4;
    if ( !a4 && v10 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = (char *)*((_QWORD *)this + 19);
    *(_QWORD *)&v15 = v14;
    *((_QWORD *)&v15 + 1) = v10;
    v12 = v15;
    *((_QWORD *)&v15 + 1) = 0LL;
    *(_QWORD *)&v15 = v14;
    v16 = v12;
    std::vector<float>::insert<gsl::details::span_iterator<gsl::span<float const,-1>,0>,void>(v9, &v17, v11, &v15, &v16);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  }
  return v6;
}
