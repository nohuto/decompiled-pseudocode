/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00D0758
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01FE090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015668 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v11; // rbx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)this;
  if ( !v5 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 61LL;
    WdLogEvent5_WdAssertion(v13);
    v5 = *(_QWORD *)this;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v5 + 16)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v14 + 24) = 64LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v8 = 0LL;
  v9 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v9;
  if ( (v9 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v8 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v8) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v8);
        v11 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v8) )
        {
          *((_QWORD *)this + v8 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v8 + 86) ^= (*((_DWORD *)this + v8 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                + v8
                                                                                                + 272)) << 8)) & 0x100;
          *((_DWORD *)this + v8 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v8 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v8 + 272) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v8 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v8);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, v11 + 29);
          v12 = *((_DWORD *)v11 + v8 + 256);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
          *((_DWORD *)this + v8 + 70) = v12;
          *((_BYTE *)this + v8 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v8);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *((_DWORD *)this + 4) >> 2 );
  }
}
