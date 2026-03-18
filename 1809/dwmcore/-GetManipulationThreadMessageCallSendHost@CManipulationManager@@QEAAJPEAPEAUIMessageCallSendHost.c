/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18019C030
 * Callers:
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x18019C8D0 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801A6E8C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801F56E0 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  struct IMessageCallSendHost **v2; // rbx
  struct IMessageCallSendHost *v3; // rax

  *a2 = 0LL;
  v2 = (struct IMessageCallSendHost **)((char *)this + 336);
  v3 = (struct IMessageCallSendHost *)*((_QWORD *)this + 42);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 42);
    *a2 = *v2;
    v3 = *v2;
  }
  return v3 == 0LL ? 0x80004005 : 0;
}
