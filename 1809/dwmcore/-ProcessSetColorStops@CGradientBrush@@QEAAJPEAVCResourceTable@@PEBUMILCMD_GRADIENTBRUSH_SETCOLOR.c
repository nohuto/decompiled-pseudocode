/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180005F34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180005D50 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006074 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  const struct MILCMD_GRADIENTBRUSH_SETCOLORSTOPS *v5; // rax
  struct CResource **v6; // rsi
  unsigned int v7; // r15d
  CResourceTable *v9; // r8
  struct CResource **v10; // rbx
  unsigned int v11; // r14d
  struct CResource *ResourceWithoutType; // r12
  __int64 v13; // rdi
  char v14; // r8
  __int64 v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  struct CResource **v20; // [rsp+50h] [rbp-10h]
  CGradientBrush *v21; // [rsp+A0h] [rbp+40h]

  v21 = this;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v20 = 0LL;
  v9 = a2;
  v19 = 0LL;
  if ( *((_DWORD *)v5 + 3) != a5 || (a5 & 3) != 0 )
  {
    v17 = 166;
LABEL_22:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, v17);
    v13 = v19;
    goto LABEL_13;
  }
  v10 = (struct CResource **)*((_QWORD *)&v19 + 1);
  v11 = 0;
  if ( a5 >> 2 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v9, *a4);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              20LL) )
        break;
      v18[0] = ResourceWithoutType;
      if ( v6 == v10 )
      {
        std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v19, v10, v18);
        v6 = v20;
        v10 = (struct CResource **)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *v10++ = ResourceWithoutType;
        *((_QWORD *)&v19 + 1) = v10;
      }
      ++v11;
      ++a4;
      if ( v11 >= a5 >> 2 )
      {
        v5 = a3;
        this = v21;
        goto LABEL_10;
      }
      v9 = a2;
    }
    v17 = 175;
    goto LABEL_22;
  }
LABEL_10:
  v13 = v19;
  v14 = *((_DWORD *)v5 + 2) != 0;
  v15 = (__int64)((__int64)v10 - v19) >> 3;
  v18[0] = (int)v15;
  if ( (int)v15 < 0 || (v18[1] = v19) == 0LL && (_DWORD)v15 )
  {
    gsl::details::terminate(this);
    JUMPOUT(0x18000606DLL);
  }
  CGradientBrush::SetStops(this, v18, v14);
LABEL_13:
  if ( v13 )
    std::_Deallocate<16,0>(v13, ((unsigned __int64)v6 - v13) & 0xFFFFFFFFFFFFFFF8uLL);
  return v7;
}
