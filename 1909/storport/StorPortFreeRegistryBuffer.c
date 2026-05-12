/*
 * XREFs of StorPortFreeRegistryBuffer @ 0x1C0022C60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void __fastcall StorPortFreeRegistryBuffer(__int64 a1)
{
  __int64 v1; // rbx

  v1 = **(_QWORD **)(a1 - 16);
  if ( (*(_DWORD *)(v1 + 2144) & 2) != 0 )
  {
    memset(*(void **)(v1 + 2120), 0, *(unsigned int *)(v1 + 2128));
    ExFreePoolWithTag(*(PVOID *)(v1 + 2120), 0);
    *(_DWORD *)(v1 + 2144) &= ~2u;
    *(_DWORD *)(v1 + 2128) = 0;
    *(_QWORD *)(v1 + 2120) = 0LL;
  }
}
