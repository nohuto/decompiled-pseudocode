/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C017F738
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C6D88 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v14 + 24) = 6067LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 6069LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v16 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v16 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 236) )
  {
    Luid = 0LL;
    v7 = ZwAllocateLocallyUniqueId(&Luid);
    v12 = v7;
    if ( v7 < 0 )
    {
      v17 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v17 + 24) = v12;
      WdLogEvent5_WdLowResource(v17);
      BYTE4(this[14][496 * a2->VidPnSourceId + 136]) = 0;
    }
    else
    {
      operator delete[](this[14][496 * a2->VidPnSourceId + 135]);
      this[14][496 * a2->VidPnSourceId + 135] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][496 * a2->VidPnSourceId + 136]) = a2->ModeCount;
      BYTE4(this[14][496 * a2->VidPnSourceId + 136]) = 1;
      this[14][496 * a2->VidPnSourceId + 137] = (PERESOURCE)Luid;
    }
    return (unsigned int)v12;
  }
  else
  {
    return 3221226021LL;
  }
}
