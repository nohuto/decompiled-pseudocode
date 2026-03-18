/*
 * XREFs of ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C001831C
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00E9490 (--1DXGPROCESS@@MEAA@XZ.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C024E4A0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGWORKQUEUE::FlushQueue(struct _LIST_ENTRY *this)
{
  DXGWORKQUEUE *v1; // rdi
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY v3; // rax
  PLIST_ENTRY v4; // rbx

  v1 = (DXGWORKQUEUE *)this;
  v2 = (KSPIN_LOCK *)&this[1];
  while ( 1 )
  {
    v3 = ExInterlockedRemoveHeadList(this, v2);
    v4 = v3;
    if ( !v3 )
      break;
    ((void (__fastcall *)(struct _LIST_ENTRY *))v3[1].Flink)(v3[1].Blink);
    ExFreePoolWithTag(v4, 0);
    v2 = (KSPIN_LOCK *)((char *)v1 + 16);
    this = (struct _LIST_ENTRY *)v1;
  }
}
