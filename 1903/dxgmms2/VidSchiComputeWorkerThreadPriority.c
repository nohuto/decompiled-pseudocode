/*
 * XREFs of VidSchiComputeWorkerThreadPriority @ 0x1C00151D4
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004C60 (VidSchSignalSyncObjectsFromGpu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeWorkerThreadPriority(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v4; // rbx
  __int64 v5; // rax
  int v7; // ecx
  unsigned int v8; // eax

  v2 = 16;
  if ( a2 >= 16 )
    v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v5 = *(int *)(a1 + 392);
  if ( (_DWORD)v5 != v2 )
  {
    v7 = 0;
    if ( (int)v5 > 16 && (*(_DWORD *)(v4 + 4 * v5 + 1808))-- == 1 )
    {
      v7 = 1;
      *(_DWORD *)(v4 + 1872) &= ~(1 << *(_DWORD *)(a1 + 392));
    }
    if ( v2 > 16 && ++*(_DWORD *)(v4 + 4LL * v2 + 1808) == 1 )
    {
      v7 = 1;
      *(_DWORD *)(v4 + 1872) |= 1 << v2;
    }
    *(_DWORD *)(a1 + 392) = v2;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v4 + 1872);
      if ( v8 )
        *(_DWORD *)(v4 + 204) = RtlFindMostSignificantBit(v8);
      else
        *(_DWORD *)(v4 + 204) = 16;
    }
  }
  return *(unsigned int *)(v4 + 204);
}
