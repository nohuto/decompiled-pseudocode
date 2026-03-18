/*
 * XREFs of ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x1801527E4
 * Callers:
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x18014B844 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x18002BB7C (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::FindDesktopRenderTarget(
        CRenderTargetManager *this,
        HMONITOR a2,
        struct IRenderTargetDesktop **a3)
{
  CMILRefCountBase *v3; // rbx
  unsigned int v4; // esi
  int TreeNoLock; // eax
  __int64 v8; // rbp
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  struct IRenderTargetDesktop *v12; // rdx
  __int64 v14; // rax
  CMILRefCountBase *v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(
                   *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                   a2,
                   &v15);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, TreeNoLock, 0x2AEu);
      v3 = v15;
      goto LABEL_14;
    }
    v3 = v15;
  }
  v8 = 0LL;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_13;
  while ( 1 )
  {
    v9 = *(__int64 **)(*((_QWORD *)this + 7) + 8 * v8);
    v10 = *v9;
    if ( !v3 )
      break;
    if ( (CMILRefCountBase *)(*(__int64 (__fastcall **)(__int64 *))(v10 + 288))(v9) == v3 )
      goto LABEL_8;
LABEL_12:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 20) )
      goto LABEL_13;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v10 + 264))(v9) )
    goto LABEL_12;
LABEL_8:
  if ( v9 )
  {
    v11 = (unsigned __int64)(v9 - 21) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
    if ( v11 )
      v12 = (struct IRenderTargetDesktop *)(v11 + 168);
    else
      v12 = 0LL;
    v14 = *v9;
    *a3 = v12;
    (*(void (__fastcall **)(__int64 *))(v14 + 8))(v9);
    goto LABEL_14;
  }
LABEL_13:
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x2CBu);
LABEL_14:
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v4;
}
