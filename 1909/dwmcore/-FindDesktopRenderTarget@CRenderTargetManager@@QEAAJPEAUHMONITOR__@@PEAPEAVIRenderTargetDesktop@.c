/*
 * XREFs of ?FindDesktopRenderTarget@CRenderTargetManager@@QEAAJPEAUHMONITOR__@@PEAPEAVIRenderTargetDesktop@@@Z @ 0x180187688
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1801A2020 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z @ 0x1800A9E38 (-FindTreeNoLock@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::FindDesktopRenderTarget(
        CRenderTargetManager *this,
        HMONITOR a2,
        struct IRenderTargetDesktop **a3)
{
  CDirtyRegion *v3; // rbx
  unsigned int v4; // edi
  signed int TreeNoLock; // eax
  __int64 v8; // rbp
  struct IRenderTargetDesktop *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  CDirtyRegion *v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    TreeNoLock = CMonitorTreeAssociation::FindTreeNoLock(
                   *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 16LL),
                   a2,
                   &v13);
    v4 = TreeNoLock;
    if ( TreeNoLock < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, TreeNoLock, 0x2ABu, 0LL);
      v3 = v13;
      goto LABEL_13;
    }
    v3 = v13;
  }
  v8 = 0LL;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_12;
  while ( 1 )
  {
    v9 = *(struct IRenderTargetDesktop **)(*((_QWORD *)this + 7) + 8 * v8);
    v10 = *(_QWORD *)v9;
    if ( !v3 )
      break;
    if ( (CDirtyRegion *)(*(__int64 (__fastcall **)(struct IRenderTargetDesktop *))(v10 + 288))(v9) == v3 )
      goto LABEL_8;
LABEL_11:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 20) )
      goto LABEL_12;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IRenderTargetDesktop *))(v10 + 264))(v9) )
    goto LABEL_11;
LABEL_8:
  if ( v9 )
  {
    v11 = *(_QWORD *)v9;
    *a3 = v9;
    (*(void (__fastcall **)(struct IRenderTargetDesktop *))(v11 + 8))(v9);
    goto LABEL_13;
  }
LABEL_12:
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0x2C8u, 0LL);
LABEL_13:
  if ( v3 )
    CDirtyRegion::Release(v3);
  return v4;
}
