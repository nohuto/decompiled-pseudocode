/*
 * XREFs of ndisMBeginNormalMode @ 0x1C0025AD4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 (__fastcall *v4)(int, int, int, int, int); // r8

  v1 = (KSPIN_LOCK *)(a1 + 3192);
  *(_BYTE *)(a1 + 2003) = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3192));
  v4 = (__int64 (__fastcall *)(int, int, int, int, int))ndisMIndicateReceiveNblsWithThrottling;
  if ( *(_DWORD *)(a1 + 3184) != 1 )
    v4 = ndisMDispatchReceiveNetBufferLists;
  *(_BYTE *)(a1 + 2681) = *(_DWORD *)(a1 + 3184) != 1;
  *(_QWORD *)(a1 + 2152) = v4;
  *(_QWORD *)(a1 + 3200) = 0LL;
  *(_DWORD *)(a1 + 3208) = 0;
  *(_QWORD *)(a1 + 2160) = ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(v1, v3);
}
