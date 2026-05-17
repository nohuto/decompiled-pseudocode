/*
 * XREFs of RtlpHpVaMgrCtxAllocatorFind @ 0x180064584
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1800631B0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1800644F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorFind(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int v6; // esi
  __int64 v8; // rax

  v4 = 0LL;
  v5 = a1 + 112;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    goto LABEL_16;
  do
  {
    if ( *(_QWORD *)(v5 + 24) )
    {
      ++v6;
      if ( ((*(unsigned __int8 *)(v5 + 46) >> 1) & 3) == *(_DWORD *)(a2 + 4)
        && *(unsigned __int8 *)(v5 + 45) == *(_DWORD *)(a2 + 8)
        && *(_QWORD *)(v5 + 32) == *(_QWORD *)(a2 + 16)
        && (!a3 || *(unsigned __int16 *)(v5 + 40) == a3)
        && ((*(_BYTE *)(a2 + 12) ^ (*(_BYTE *)(v5 + 46) >> 3)) & 1) == 0 )
      {
        return v5;
      }
    }
    else
    {
      v8 = v5;
      if ( v4 )
        v8 = v4;
      v4 = v8;
    }
    v5 += 48LL;
  }
  while ( v6 < *(_DWORD *)(a1 + 104) );
  if ( !v4 )
  {
LABEL_16:
    if ( *(_DWORD *)(a1 + 104) < 0xFFu )
      v4 = 48LL * *(unsigned int *)(a1 + 104) + a1 + 112;
  }
  if ( a4 )
    *a4 = v4;
  return 0LL;
}
