/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801B3C68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801B30BC (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801B40A0 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  _DWORD *v11; // r8
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
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xCCu);
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 144);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_DWORD *)a3 + 2) )
    {
      *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
      std::vector<float>::reserve((char *)this + 144, v10);
    }
    v14[0] = v10;
    v14[1] = a4;
    if ( !a4 && v10 )
    {
      gsl::details::terminate(this);
      __debugbreak();
    }
    v11 = (_DWORD *)*((_QWORD *)this + 19);
    *(_QWORD *)&v15 = v14;
    *((_QWORD *)&v15 + 1) = v10;
    v12 = v15;
    *(_QWORD *)&v15 = v14;
    *((_QWORD *)&v15 + 1) = 0LL;
    v16 = v12;
    std::vector<float>::insert<gsl::details::span_iterator<gsl::span<float const,-1>,0>,void>(v9, &v17, v11, &v15, &v16);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  }
  return v6;
}
