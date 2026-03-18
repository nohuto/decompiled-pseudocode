/*
 * XREFs of ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C00C8640
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::RemoveVidPnOwnership(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rax

  v3 = *((_DWORD *)this + 435);
  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 > v3 )
  {
    v7 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 435);
    WdLogEvent5_WdError(v7);
    v6 = 0;
  }
  else
  {
    v6 = v3 - a2;
  }
  *((_DWORD *)this + 435) = v6;
}
