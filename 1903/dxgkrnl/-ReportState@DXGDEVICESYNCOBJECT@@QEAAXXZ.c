/*
 * XREFs of ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C026CEA0
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C020D958 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C022FE60 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppp @ 0x1C0042D08 (McTemplateK0ppp.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F1EDC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::ReportState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // r9

  v1 = *((_QWORD *)this + 4);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v1 + 32));
  if ( bTracingEnabled )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp(v4, &EventReportSyncObject, v5, VidSchSyncObject, *((unsigned int *)this + 10), v6);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 32));
}
