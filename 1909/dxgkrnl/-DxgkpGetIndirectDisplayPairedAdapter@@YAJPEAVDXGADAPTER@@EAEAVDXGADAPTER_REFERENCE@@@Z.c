/*
 * XREFs of ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0032F94 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0034778 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z @ 0x1C015A148 (-DxgkpFindSessionRenderAdapter@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@E@Z.c)
 */

__int64 __fastcall DxgkpGetIndirectDisplayPairedAdapter(struct DXGADAPTER ***this, char a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LUID *v9; // rdx
  unsigned __int8 IsAddapterSessionized; // al
  int SessionRenderAdapter; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rax
  struct _LUID v19; // [rsp+30h] [rbp+8h] BYREF

  DXGADAPTER_REFERENCE::Assign(a3, 0LL);
  if ( this && (*((_DWORD *)this + 77) & 0x100) != 0 )
  {
    ADAPTER_DISPLAY::GetPairedRenderAdapter(this[319], a3);
    if ( !*a3 )
      goto LABEL_9;
    if ( a2 && (*((_DWORD *)*a3 + 44) != 1 || *((_BYTE *)*a3 + 2465)) )
      DXGADAPTER_REFERENCE::Assign(a3, 0LL);
    if ( !*a3 )
    {
LABEL_9:
      v19 = 0LL;
      IsAddapterSessionized = DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)this, v9, 0LL, 0LL);
      SessionRenderAdapter = DxgkpFindSessionRenderAdapter(
                               &v19,
                               (struct DXGADAPTER_REFERENCE *)a3,
                               IsAddapterSessionized);
      v15 = SessionRenderAdapter;
      if ( SessionRenderAdapter < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v13, v12, v14);
        *(_QWORD *)(v16 + 24) = this;
        *(_QWORD *)(v16 + 32) = v15;
        WdLogEvent5_WdError(v16);
        return (unsigned int)v15;
      }
      ADAPTER_DISPLAY::SetPairedRenderAdapter(this[319], *a3);
    }
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
