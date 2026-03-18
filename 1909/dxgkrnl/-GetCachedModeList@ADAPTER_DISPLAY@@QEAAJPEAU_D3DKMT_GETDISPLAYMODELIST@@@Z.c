/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C7D60
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 VidPnSourceId; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v11 + 24) = 6031LL;
    WdLogEvent5_WdAssertion(v11);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v12 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 236) && *((_BYTE *)this[14] + 3968 * VidPnSourceId + 1092) )
  {
    v8 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v8 + 24) = 6047LL;
    WdLogEvent5_WdEvent(v8);
    v9 = 3968LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[14] + v9 + 1080);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)((char *)this[14] + v9 + 1088);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
