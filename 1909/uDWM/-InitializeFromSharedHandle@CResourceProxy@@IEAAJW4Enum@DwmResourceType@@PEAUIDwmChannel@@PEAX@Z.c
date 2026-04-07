/*
 * XREFs of ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18003BA44
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18003B988 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ??$CreateProxyFromSharedHandle@VCDesktopRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCDesktopRenderTargetProxy@@@Z @ 0x18004CDBC (--$CreateProxyFromSharedHandle@VCDesktopRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCDeskto.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18004CF1C (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCRemotingRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemotingRenderTargetProxy@@@Z @ 0x1800B6068 (--$CreateProxyFromSharedHandle@VCRemotingRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemot.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180023FD4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceProxy::InitializeFromSharedHandle(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-10h]
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a3;
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v4 + 128))(a3, a4, a2, &v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB2u, v12);
  }
  else
  {
    v10 = CResource::WrapExistingResource(a3, v8, v13, (__int64 *)(a1 + 16));
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB4u, v12);
    else
      v9 = 0;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 136LL))(a3);
  return v9;
}
