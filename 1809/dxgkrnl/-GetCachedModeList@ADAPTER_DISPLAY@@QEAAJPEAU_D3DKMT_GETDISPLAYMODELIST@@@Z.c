/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0121EF4
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 VidPnSourceId; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v10 + 24) = 5778LL;
    WdLogEvent5_WdAssertion(v10);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 135) && *((_BYTE *)this[14] + 3760 * VidPnSourceId + 1092) )
  {
    v7 = WdLogNewEntry5_WdEvent(3760 * VidPnSourceId, v4);
    *(_QWORD *)(v7 + 24) = 5794LL;
    WdLogEvent5_WdEvent(v7);
    v8 = 3760LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[14] + v8 + 1080);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)((char *)this[14] + v8 + 1088);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
