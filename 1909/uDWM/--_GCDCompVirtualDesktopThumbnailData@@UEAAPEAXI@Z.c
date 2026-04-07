/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x18008EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 21);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 17);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDCompVirtualDesktopThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
