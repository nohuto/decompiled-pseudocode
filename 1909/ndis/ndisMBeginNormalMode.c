/*
 * XREFs of ndisMBeginNormalMode @ 0x1C003F130
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 (__fastcall *v4)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, KIRQL); // r8

  v1 = (KSPIN_LOCK *)(a1 + 3176);
  *(_BYTE *)(a1 + 1995) = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3176));
  v4 = (__int64 (__fastcall *)(struct _NDIS_FILTER_BLOCK *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, KIRQL))&ndisMIndicateReceiveNblsWithThrottling;
  if ( *(_DWORD *)(a1 + 3168) != 1 )
    v4 = ndisMDispatchReceiveNetBufferLists;
  *(_BYTE *)(a1 + 2665) = *(_DWORD *)(a1 + 3168) != 1;
  *(_QWORD *)(a1 + 2136) = v4;
  *(_QWORD *)(a1 + 3184) = 0LL;
  *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(v1, v3);
}
