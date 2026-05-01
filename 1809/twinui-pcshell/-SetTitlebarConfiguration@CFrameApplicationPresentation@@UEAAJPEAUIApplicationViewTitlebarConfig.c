/*
 * XREFs of ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18005B6C0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___ @ 0x18005B73C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  unsigned int v4; // edi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[1] = this;
  v4 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_9d63f641584ad32e324d3d55f9a00553___(this, v6);
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 16LL))(a2);
  return v4;
}
