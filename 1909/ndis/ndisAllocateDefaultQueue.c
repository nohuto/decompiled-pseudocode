/*
 * XREFs of ndisAllocateDefaultQueue @ 0x1C003ECE4
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisAllocateDefaultQueue(__int64 a1)
{
  PVOID PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
  *(_QWORD *)(a1 + 4368) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x4C8uLL);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 4368) + 32LL);
  v3[1] = v3;
  *v3 = v3;
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 4368) + 88LL);
  v4[1] = v4;
  *v4 = v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 4368) + 48LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 4368) + 52LL) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 4368) + 56LL) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 4368) + 64LL) = a1;
  *(_DWORD *)(*(_QWORD *)(a1 + 4368) + 80LL) = 1;
  return 0LL;
}
