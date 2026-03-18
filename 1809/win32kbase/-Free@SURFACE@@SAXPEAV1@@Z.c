/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C001D634
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01091C4 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall SURFACE::Free(struct _SLIST_ENTRY *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdi

  if ( *((_QWORD *)&a1[42].Next + 1) )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( LOBYTE(a1[43].Next) )
  {
    v2 = *((_QWORD *)&a1[4].Next + 1);
    if ( v2 )
    {
      Win32FreePool(v2);
      *((_QWORD *)&a1[4].Next + 1) = 0LL;
    }
  }
  v3 = (__int64)*gpTypeIsolation;
  if ( *gpTypeIsolation )
  {
    memset(a1, 0, 0x2C0uLL);
    ++*(_DWORD *)(v3 + 60);
    v4 = v3 + 32;
    if ( ExQueryDepthSList((PSLIST_HEADER)v4) >= *(_WORD *)(v4 + 16) )
    {
      ++*(_DWORD *)(v4 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v4 + 56))(a1, v4);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v4, a1);
    }
  }
}
