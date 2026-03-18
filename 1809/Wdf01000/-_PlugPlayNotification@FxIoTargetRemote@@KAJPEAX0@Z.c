/*
 * XREFs of ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C006A540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     FxIsEqualGuid @ 0x1C003BBD8 (FxIsEqualGuid.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0068CE4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00691B4 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_PlugPlayNotification(char *NotificationStructure, FxIoTargetRemote *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  const _GUID *v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v7; // r8
  WDFIOTARGET__ *v8; // rbx
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFIOTARGET__ *); // rax
  int v11; // eax
  unsigned int v12; // edx
  WDFIOTARGET__ *v13; // rbx
  const void *v14; // rax
  void (__fastcall *v15)(WDFIOTARGET__ *); // rax
  const void *v16; // rax
  _WDF_IO_TARGET_OPEN_PARAMS params; // [rsp+30h] [rbp-98h] BYREF

  FxObject::AddRef(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    51,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  m_Globals = Context->m_Globals;
  v5 = (const _GUID *)(NotificationStructure + 4);
  v6 = 0;
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE) )
  {
    v8 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetRemotekm_cpp_Traceguids, _a1);
    }
    m_Method = Context->m_EvtQueryRemove.m_Method;
    if ( m_Method )
    {
      if ( !Context->m_ObjectSize )
        v8 = 0LL;
      v11 = m_Method(v8);
LABEL_41:
      v6 = v11;
      goto LABEL_42;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( !Context->m_ObjectSize )
        v8 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v8);
    }
    v12 = 1;
    goto LABEL_26;
  }
  if ( FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE) )
  {
    v13 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      v14 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v14);
    }
    v15 = Context->m_EvtRemoveComplete.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( !Context->m_ObjectSize )
          v13 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xDu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v13);
      }
      v12 = 2;
LABEL_26:
      FxIoTargetRemote::Close(Context, v12, v7);
      goto LABEL_42;
    }
  }
  else
  {
    if ( !FxIsEqualGuid(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED) )
      goto LABEL_42;
    v13 = (WDFIOTARGET__ *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      v16 = (const void *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Context->m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v16);
    }
    v15 = Context->m_EvtRemoveCanceled.m_Method;
    if ( !v15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( !Context->m_ObjectSize )
          v13 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xFu, WPP_FxIoTargetRemotekm_cpp_Traceguids, v13);
      }
      memset(&params, 0, sizeof(params));
      params.Size = 136;
      params.Type = WdfIoTargetOpenReopen;
      v11 = FxIoTargetRemote::Open(Context, &params);
      goto LABEL_41;
    }
  }
  if ( !Context->m_ObjectSize )
    v13 = 0LL;
  v15(v13);
LABEL_42:
  Context->Release(
    Context,
    FxIoTargetRemote::_PlugPlayNotification,
    136,
    "minkernel\\wdf\\framework\\shared\\targets\\general\\km\\fxiotargetremotekm.cpp");
  return v6;
}
