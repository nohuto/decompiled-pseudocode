/*
 * XREFs of ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1C004C010
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C004BDE8 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall MiracastProcessPendingDPCChunks(_WORD *a1)
{
  int v1; // r11d
  _WORD *v2; // r10
  __int64 v3; // rcx
  unsigned __int8 result; // al
  __int64 v5; // r10
  struct MIRACAST_CHUNK_LIST **v6; // r10
  struct MIRACAST_CHUNK_LIST *v7; // rdx
  struct MIRACAST_CHUNK_LIST *v8; // rdx

  v1 = 0;
  v2 = a1;
  a1[8] = 0;
  *((_BYTE *)a1 + 18) = 0;
  *((_DWORD *)a1 + 5) = 0;
  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(v3 + 3249) )
  {
    *((_BYTE *)v2 + 17) = 1;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v3 + 3248) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(v3 + 3256),
        *(struct MIRACAST_CHUNK_LIST **)(v3 + 3272));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3256LL),
        *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3264LL));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)*v6 + 407), v6[1]);
      *(_BYTE *)(*(_QWORD *)v2 + 3248LL) = v1;
      v3 = *(_QWORD *)v2;
      *((_BYTE *)v2 + 16) = 1;
    }
    v7 = *(struct MIRACAST_CHUNK_LIST **)(v3 + 3264);
    if ( *((_DWORD *)v7 + 4) != v1 )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)v2 + 1), v7);
      v3 = *(_QWORD *)v2;
      *((_BYTE *)v2 + 18) = 1;
    }
    v8 = *(struct MIRACAST_CHUNK_LIST **)(v3 + 3272);
    if ( *((_DWORD *)v8 + 4) != v1 )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*(MIRACAST_CHUNK_LIST **)(v3 + 3256), v8);
      v3 = *(_QWORD *)v2;
    }
    result = 1;
    *((_DWORD *)v2 + 5) = *(_DWORD *)(*(_QWORD *)(v3 + 3256) + 16LL);
  }
  return result;
}
