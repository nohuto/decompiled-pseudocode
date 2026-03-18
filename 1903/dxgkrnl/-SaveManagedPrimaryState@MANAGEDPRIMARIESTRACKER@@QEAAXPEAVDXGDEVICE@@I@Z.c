/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00CBD44
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E324 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0001C00 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001D54 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v12; // rbx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)this;
  if ( !v5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v14 + 24) = 61LL;
    WdLogEvent5_WdAssertion(v14);
    v5 = *(_QWORD *)this;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v5 + 16)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v15 + 24) = 64LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = 0LL;
  v10 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v10;
  if ( (v10 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v9 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v9) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v9);
        v12 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v9) )
        {
          *((_QWORD *)this + v9 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v9 + 86) ^= (*((_DWORD *)this + v9 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                + v9
                                                                                                + 272)) << 8)) & 0x100;
          *((_DWORD *)this + v9 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v9 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v9 + 272) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v9 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v9);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, v12 + 29);
          v13 = *((_DWORD *)v12 + v9 + 256);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
          *((_DWORD *)this + v9 + 70) = v13;
          *((_BYTE *)this + v9 + 408) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v9);
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)this + 4) >> 2 );
  }
}
