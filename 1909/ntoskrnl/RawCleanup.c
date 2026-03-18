/*
 * XREFs of RawCleanup @ 0x1406B6E6C
 * Callers:
 *     RawDispatch @ 0x14066B3D0 (RawDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x1400D4F78 (RawInitiateDeleteVolume.c)
 *     IoRemoveLinkShareAccessEx @ 0x1406B6F30 (IoRemoveLinkShareAccessEx.c)
 *     FsRtlNotifyVolumeEvent @ 0x14072DEB0 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r14
  char v7; // bp
  void *v8; // rax

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  IoRemoveLinkShareAccessEx(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL, 0LL);
  v8 = *(void **)(a3 + 48);
  if ( v8 == *(void **)&AdvancedHeader[2].NodeTypeCode )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
    v8 = *(void **)(a3 + 48);
  }
  if ( v8 == AdvancedHeader[1].ReservedContext )
  {
    AdvancedHeader[1].ReservedContext = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(p_PagingIoResource);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
