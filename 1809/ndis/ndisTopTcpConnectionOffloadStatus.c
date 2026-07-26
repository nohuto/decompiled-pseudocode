/*
 * XREFs of ndisTopTcpConnectionOffloadStatus @ 0x1C006BC04
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

char __fastcall ndisTopTcpConnectionOffloadStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _BYTE *v4; // rdx
  char result; // al
  unsigned int v6; // r10d
  int v7; // r8d
  size_t v8; // r8
  unsigned __int16 v9; // ax

  v2 = *(_QWORD *)(a1 + 4128);
  v4 = *(_BYTE **)(a2 + 48);
  result = 0;
  v6 = *(_DWORD *)(a2 + 56);
  if ( v2 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    if ( v7 == 1073872897 )
    {
      *(_BYTE *)(v2 + 4) = 1;
      return 1;
    }
    if ( v7 == 1073872899 )
    {
      v8 = 20LL;
      if ( v6 >= 0x14 && *v4 == 0x80 && *((_WORD *)v4 + 1) >= 0x14u && v4[1] )
      {
        *(_BYTE *)(v2 + 4) = 0;
        v9 = *((_WORD *)v4 + 1);
        if ( v9 < 0x14u )
          v8 = v9;
        memmove((void *)(*(_QWORD *)(a1 + 4128) + 872LL), v4, v8);
        return 1;
      }
    }
  }
  return result;
}
