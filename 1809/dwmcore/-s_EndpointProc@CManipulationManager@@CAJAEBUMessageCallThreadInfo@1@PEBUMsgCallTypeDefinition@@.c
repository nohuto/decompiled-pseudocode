/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x180020B88
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x180020BD0 (-s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1801EDAA0 (-s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1801EDB10 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4,
        int a5)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  v5 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         a2,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_m7ZfFPOyvgt9MTgLJrp0xmJzhks,
         219LL,
         a3,
         a4,
         a5);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x928u);
  return v7;
}
