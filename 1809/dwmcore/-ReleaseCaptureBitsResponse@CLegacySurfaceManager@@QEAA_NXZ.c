/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800716C8
 * Callers:
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x180071630 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800CE828 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180152CF8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x180071A4C (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 26);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 220) )
    {
      CResponseItem::ReleaseResponseRef(v3);
      v3 = (CResponseItem *)*((_QWORD *)this + 26);
      *((_BYTE *)this + 220) = 0;
    }
    CResponseItem::QueueResponse(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 54) = 0;
    return 1;
  }
  return v2;
}
