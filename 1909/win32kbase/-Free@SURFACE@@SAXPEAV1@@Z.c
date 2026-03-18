/*
 * XREFs of ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0012D70
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0012DC0 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C01309D8 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall SURFACE::Free(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx

  if ( *((_QWORD *)&ListEntry[42].Next + 1) )
    ReleaseReferenceCountedObjectHandle(0LL);
  if ( LOBYTE(ListEntry[43].Next) )
  {
    v2 = *((_QWORD *)&ListEntry[4].Next + 1);
    if ( v2 )
    {
      Win32FreePool(v2);
      *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
    }
  }
  FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(ListEntry);
}
