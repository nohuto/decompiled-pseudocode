/*
 * XREFs of PoVolumeDevice @ 0x14070CE6C
 * Callers:
 *     IoCreateDevice @ 0x1406529F0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x14081CBD0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x14016BD5C (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_140417F38;
      if ( *(__int64 **)qword_140417F38 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140417F38 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
