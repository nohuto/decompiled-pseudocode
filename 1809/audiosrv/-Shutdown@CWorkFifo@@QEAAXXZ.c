/*
 * XREFs of ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180115E10
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180112DBC (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x180112F10 (--1CWorkFifo@@QEAA@XZ.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180115C00 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18000796C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CWorkFifo::Shutdown(CWorkFifo *this, void *a2)
{
  wil::details *v3; // rcx

  *((_BYTE *)this + 136) = 1;
  v3 = (wil::details *)*((_QWORD *)this + 28);
  if ( v3 )
    wil::details::SetEvent(v3, a2);
  CWorkFifo::ReleaseThreadpool(this);
}
