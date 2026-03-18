/*
 * XREFs of ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801D6F90
 * Callers:
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801D7760 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801E4094 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x180235E40 (-SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CManipulationManager::GetManipulationThreadMessageCallSendHost(
        CManipulationManager *this,
        struct IMessageCallSendHost **a2)
{
  struct IMessageCallSendHost **v2; // rbx
  struct IMessageCallSendHost *v3; // rax

  *a2 = 0LL;
  v2 = (struct IMessageCallSendHost **)((char *)this + 40);
  v3 = (struct IMessageCallSendHost *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 5);
    *a2 = *v2;
    v3 = *v2;
  }
  return v3 == 0LL ? 0x80004005 : 0;
}
