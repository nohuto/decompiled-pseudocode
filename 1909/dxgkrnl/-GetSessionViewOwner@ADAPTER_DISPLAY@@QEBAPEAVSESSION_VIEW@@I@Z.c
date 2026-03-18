/*
 * XREFs of ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90B4
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00CA830 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D69E0 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D9234 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C01F3128 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 * Callees:
 *     <none>
 */

int **__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int **v5; // rdi
  int v6; // ebx
  __int64 v8; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 37LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v4 = 3968 * v3;
  v5 = *(int ***)(3968 * v3 + *((_QWORD *)this + 14) + 48);
  if ( v5 && (v6 = **v5, v6 == (unsigned int)PsGetCurrentProcessSessionId(*v5, v4)) )
    return v5;
  else
    return 0LL;
}
