/*
 * XREFs of ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00BEDE8 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00BF6E4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00F67A0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C01C3844 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 * Callees:
 *     <none>
 */

int **__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int **v4; // rdi
  int v5; // ebx
  __int64 v7; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 37LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = *(int ***)(3760 * v3 + *((_QWORD *)this + 14) + 48);
  if ( v4 && (v5 = **v4, v5 == (unsigned int)PsGetCurrentProcessSessionId(*v4)) )
    return v4;
  else
    return 0LL;
}
