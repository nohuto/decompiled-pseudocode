/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x140A22C48
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiHotAddBootDescriptor @ 0x140A3D684 (MiHotAddBootDescriptor.c)
 */

void MiHotAddBootDeferredDescriptors()
{
  __int64 v0; // rax

  while ( (__int64 *)MxDeferredBootFreeDescriptorHead != &MxDeferredBootFreeDescriptorHead )
  {
    if ( *(__int64 **)(MxDeferredBootFreeDescriptorHead + 8) != &MxDeferredBootFreeDescriptorHead
      || (v0 = *(_QWORD *)MxDeferredBootFreeDescriptorHead,
          *(_QWORD *)(*(_QWORD *)MxDeferredBootFreeDescriptorHead + 8LL) != MxDeferredBootFreeDescriptorHead) )
    {
      __fastfail(3u);
    }
    MxDeferredBootFreeDescriptorHead = *(_QWORD *)MxDeferredBootFreeDescriptorHead;
    *(_QWORD *)(v0 + 8) = &MxDeferredBootFreeDescriptorHead;
    MiHotAddBootDescriptor();
  }
  MiFlags |= 0x10000000u;
}
