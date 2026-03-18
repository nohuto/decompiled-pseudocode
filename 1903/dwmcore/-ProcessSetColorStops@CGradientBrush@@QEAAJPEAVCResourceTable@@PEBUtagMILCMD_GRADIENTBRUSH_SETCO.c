/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18001B4FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x18001AFB8 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18001B634 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  struct CResource **v5; // rsi
  unsigned int v6; // r15d
  CResourceTable *v8; // rax
  struct CResource **v9; // rbx
  unsigned int v10; // r14d
  struct CResource *ResourceWithoutType; // r12
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  struct CResource **v18; // [rsp+50h] [rbp-10h]
  CGradientBrush *v19; // [rsp+A0h] [rbp+40h]
  const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *v21; // [rsp+B0h] [rbp+50h]

  v21 = a3;
  v19 = this;
  v5 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v8 = a2;
  v17 = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v15 = 200;
LABEL_21:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, v15, 0LL);
    v12 = v17;
    goto LABEL_13;
  }
  v9 = (struct CResource **)*((_QWORD *)&v17 + 1);
  v10 = 0;
  if ( a5 >> 2 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v8, *a4);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              20LL) )
        break;
      v16[0] = ResourceWithoutType;
      if ( v5 == v9 )
      {
        std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v17, v9, v16);
        v5 = v18;
        v9 = (struct CResource **)*((_QWORD *)&v17 + 1);
      }
      else
      {
        *v9++ = ResourceWithoutType;
        *((_QWORD *)&v17 + 1) = v9;
      }
      ++v10;
      ++a4;
      if ( v10 >= a5 >> 2 )
      {
        a3 = v21;
        this = v19;
        goto LABEL_10;
      }
      v8 = a2;
    }
    v15 = 209;
    goto LABEL_21;
  }
LABEL_10:
  v12 = v17;
  v13 = (__int64)((__int64)v9 - v17) >> 3;
  v16[0] = (int)v13;
  if ( (int)v13 < 0 || (v16[1] = v17) == 0LL && (_DWORD)v13 )
  {
    ((void (__fastcall *)(CGradientBrush *, struct CResourceTable *, const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3);
    __debugbreak();
  }
  CGradientBrush::SetStops(this, v16, *((_BYTE *)a3 + 8));
LABEL_13:
  if ( v12 )
    std::_Deallocate<16,0>(v12, ((unsigned __int64)v5 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
  return v6;
}
