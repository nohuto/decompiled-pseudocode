/*
 * XREFs of PopCopyWakeSource @ 0x14086C8FC
 * Callers:
 *     PopGetWakeSource @ 0x1406E2284 (PopGetWakeSource.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PopWakeSourceSize @ 0x14086CDDC (PopWakeSourceSize.c)
 */

__int64 __fastcall PopCopyWakeSource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  size_t *v10; // rdx
  size_t v11; // r8
  void *v12; // rcx

  result = PopWakeSourceSize(a3);
  *(_DWORD *)(v4 + 4) = result;
  v7 = *(_DWORD *)(v6 + 16);
  if ( !v7 )
  {
    *(_DWORD *)v4 = 0;
    v12 = (void *)(v4 + 10);
    *(_WORD *)(v4 + 8) = *(_WORD *)(v5 + 24);
    v11 = *(unsigned __int16 *)(v5 + 24);
    v10 = *(size_t **)(v5 + 32);
    return (__int64)memmove(v12, v10, v11);
  }
  if ( v7 != 1 )
  {
    if ( v7 > 3 )
    {
      if ( v7 != 4 )
        return result;
      *(_DWORD *)v4 = 4;
      v8 = *(_DWORD *)(v5 + 24);
      v9 = v8 == 0;
      goto LABEL_6;
    }
    result = (unsigned int)(v7 != 2) + 2;
    *(_DWORD *)v4 = result;
    v10 = *(size_t **)(v5 + 24);
    if ( !v10 )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      return result;
    }
    v11 = *v10;
    v12 = (void *)(v4 + 8);
    return (__int64)memmove(v12, v10, v11);
  }
  *(_DWORD *)v4 = 1;
  v8 = *(_DWORD *)(v5 + 24) - 1;
  v9 = *(_DWORD *)(v5 + 24) == 1;
LABEL_6:
  if ( v9 )
  {
    *(_DWORD *)(v4 + 8) = 0;
  }
  else if ( v8 == 1 )
  {
    *(_DWORD *)(v4 + 8) = 1;
  }
  return result;
}
