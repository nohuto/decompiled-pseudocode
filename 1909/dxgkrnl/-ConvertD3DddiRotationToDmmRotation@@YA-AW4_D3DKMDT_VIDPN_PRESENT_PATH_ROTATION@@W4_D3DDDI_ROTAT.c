/*
 * XREFs of ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C02367CC
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236C08 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertD3DddiRotationToDmmRotation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return 1LL;
    case 2:
      return 2LL;
    case 3:
      return 3LL;
    case 4:
      return 4LL;
  }
  v4 = WdLogNewEntry5_WdError(a1, (unsigned int)(a1 - 3), a3);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdError(v4);
  return 255LL;
}
