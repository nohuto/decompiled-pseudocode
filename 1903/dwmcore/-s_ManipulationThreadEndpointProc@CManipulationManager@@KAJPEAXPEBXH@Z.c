/*
 * XREFs of ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x18022D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800CCA40 (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_ManipulationThreadEndpointProc(char *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 32),
         (const struct MsgCallTypeDefinition *)&IManipulation_Receive<CManipulationManager>::Type,
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v8);
  return v6;
}
