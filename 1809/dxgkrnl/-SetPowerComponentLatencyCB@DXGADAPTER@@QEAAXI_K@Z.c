/*
 * XREFs of ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002F824
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000FCCC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C002D7E8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C002DC78 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C002E070 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C002F974 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C00389F0 (DxgkSetPowerComponentLatencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx @ 0x1C0030364 (McTemplateK0pqx.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentLatencyCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 3001) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1288);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pqx((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentLatencyCB, a3, (_DWORD)this, v5, a3);
    v6 = *((_QWORD *)this + 320) + 520LL * v5;
    if ( a3 != *(_QWORD *)(v6 + 368) )
    {
      *(_QWORD *)(v6 + 368) = a3;
      PoFxSetComponentLatency(*((_QWORD *)this + 321), v5, a3);
    }
  }
}
