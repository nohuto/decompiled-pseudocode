/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180152CF8
 * Callers:
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180152DCC (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180152FD0 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800716C8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x180161058 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(void **this)
{
  int i; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems((CLegacySurfaceManager *)this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    WPF::ProcessHeapImpl::Free(*((void **)this[13] + 2 * (unsigned int)(i - 1) + 1));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 13), 0x10u);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 22);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 18);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  *this = &CLogicalSurfaceHandleMap::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)(this + 1);
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v4 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v4) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
