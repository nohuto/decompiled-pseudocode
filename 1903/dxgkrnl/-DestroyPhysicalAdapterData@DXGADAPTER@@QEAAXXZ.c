/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01EC734
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C01EBB18 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC2F4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009B80 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 305) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = *((_QWORD *)this + 305);
      v4 = 352LL * i;
      if ( *(_QWORD *)(v4 + v3 + 56) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 56));
        *(_QWORD *)(v4 + *((_QWORD *)this + 305) + 56) = 0LL;
        v3 = *((_QWORD *)this + 305);
      }
      operator delete[](*(void **)(v4 + v3 + 24));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 305) + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 305) + 112));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 305) + 120));
      *(_QWORD *)(v4 + *((_QWORD *)this + 305) + 24) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 305) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 305) + 112) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 305) + 120) = 0LL;
    }
  }
}
