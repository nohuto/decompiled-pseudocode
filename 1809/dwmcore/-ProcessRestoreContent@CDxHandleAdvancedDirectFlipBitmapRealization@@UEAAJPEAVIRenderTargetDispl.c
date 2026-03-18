/*
 * XREFs of ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1802277E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802278E8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18022796C (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ProcessRestoreContent(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetDisplay *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 2);
  if ( v4
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 416LL))(v4)
    && (!a2 || a2 == *((struct IRenderTargetDisplay **)this + 2)) )
  {
    v6 = CDxHandleAdvancedDirectFlipBitmapRealization::RestoreOverdrawContentBackToRealization((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 432));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA9u);
    else
      CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 432));
  }
  return v3;
}
