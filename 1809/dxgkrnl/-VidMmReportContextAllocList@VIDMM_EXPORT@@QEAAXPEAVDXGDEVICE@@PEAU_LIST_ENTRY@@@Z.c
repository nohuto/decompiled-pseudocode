/*
 * XREFs of ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0035A6C
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C01DE8B4 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C01FF640 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReportContextAllocList(
        VIDMM_EXPORT *this,
        struct DXGDEVICE *a2,
        struct _LIST_ENTRY *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
  (*(void (__fastcall **)(struct DXGDEVICE *, struct _LIST_ENTRY *))(*((_QWORD *)this + 1) + 712LL))(a2, a3);
  if ( v8 )
  {
    v7 = v8 + 144;
    *(_QWORD *)(v8 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
}
