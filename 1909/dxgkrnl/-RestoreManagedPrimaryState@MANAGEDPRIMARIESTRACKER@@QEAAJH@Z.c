/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D07B4
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C022E994 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00087D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C9CD4 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00CA174 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, __int64 a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  const struct DXGDEVICE *v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  _QWORD *v22; // rax
  int updated; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14

  v2 = a2;
  if ( !*(_QWORD *)this )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 107LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)this + 4) = v4 & 0xFFFFFFFD;
    if ( v2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v6, v5);
        *(_QWORD *)(v15 + 24) = 125LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v7 = 0LL;
      if ( (*((_DWORD *)this + 4) & 0xFFFFFFFC) != 0 )
      {
        do
        {
          v8 = (const struct DXGDEVICE *)*((_QWORD *)this + v7 + 3);
          if ( !v8 )
            goto LABEL_9;
          v10 = *(_QWORD *)(*(_QWORD *)this + 16LL);
          if ( *((_QWORD *)v8 + 216) != v10
            || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v8 + 2) + 16LL)) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v10, v5);
            *(_QWORD *)(v16 + 24) = 134LL;
            WdLogEvent5_WdAssertion(v16);
          }
          if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)this, v8, v7) )
            goto LABEL_9;
          if ( !*((_BYTE *)this + v7 + 408) )
            goto LABEL_9;
          v11 = *((_QWORD *)this + v7 + 19);
          if ( !v11 )
            goto LABEL_9;
          v12 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 4LL);
          if ( (v12 & 1) == 0 )
            goto LABEL_9;
          if ( (*((_DWORD *)this + v7 + 86) & 0x300) != 0x300 )
          {
            v13 = WdLogNewEntry5_WdAssertion(v12, v5);
            *(_QWORD *)(v13 + 24) = 156LL;
            WdLogEvent5_WdAssertion(v13);
          }
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v7)
            && (*((_DWORD *)v8 + v7 + 272) & 0x300) == 0x300 )
          {
            goto LABEL_9;
          }
          v17 = DXGDEVICE::PinPrimaryAllocations(v8, (unsigned int)v7);
          v21 = v17;
          if ( v17 >= 0 )
          {
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(PERESOURCE ***)this,
                        (PERESOURCE **)v8,
                        v7,
                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v7 + 19) + 48LL));
            v27 = updated;
            if ( updated >= 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                (struct _KTHREAD **)v8,
                v7,
                *((const struct DXGALLOCATION **)this + v7 + 19),
                *((_DWORD *)this + v7 + 70),
                1u);
              *((_DWORD *)v8 + v7 + 272) |= 0x200u;
              goto LABEL_9;
            }
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
            v22[3] = v27;
            v22[4] = *(_QWORD *)(*(_QWORD *)this + 16LL);
            v22[5] = (unsigned int)v7;
            v22[6] = *((_QWORD *)this + v7 + 19);
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
            v22[3] = v21;
            v22[4] = v8;
            v22[5] = (unsigned int)v7;
          }
          WdLogEvent5_WdError(v22);
LABEL_9:
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < *((_DWORD *)this + 4) >> 2 );
      }
    }
  }
  return 0LL;
}
