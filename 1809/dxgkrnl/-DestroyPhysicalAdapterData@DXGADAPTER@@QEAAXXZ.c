/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01BD144
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C01BC694 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 302) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = *((_QWORD *)this + 302);
      v4 = 352LL * i;
      if ( *(_QWORD *)(v4 + v3 + 56) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 56));
        *(_QWORD *)(v4 + *((_QWORD *)this + 302) + 56) = 0LL;
        v3 = *((_QWORD *)this + 302);
      }
      operator delete[](*(void **)(v4 + v3 + 24));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 302) + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 302) + 112));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 302) + 120));
      *(_QWORD *)(v4 + *((_QWORD *)this + 302) + 24) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 302) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 302) + 112) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 302) + 120) = 0LL;
    }
  }
}
