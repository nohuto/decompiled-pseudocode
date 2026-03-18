/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800A8014
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1800A8060 (-s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x18022BDC0 (-s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x18022BE30 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4,
        int a5)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  v5 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         a2,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_g4wxz6Aysb2Q9KceQQJGbqWOkM0,
         225LL,
         a3,
         a4,
         a5);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x183u, 0LL);
  return v7;
}
