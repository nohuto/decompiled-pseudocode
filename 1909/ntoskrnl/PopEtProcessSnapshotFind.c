/*
 * XREFs of PopEtProcessSnapshotFind @ 0x140611760
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406115A8 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtProcessSnapshotFind(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = v2 & (-1LL << (*(_BYTE *)(v1 + 68) & 0x1F));
  if ( *(_DWORD *)(v1 + 68) < 0x20u )
    goto LABEL_10;
  v5 = *(_QWORD *)(v1 + 72)
     + 8LL
     * ((37
       * (BYTE6(v4)
        + 37
        * (BYTE5(v4)
         + 37
         * (BYTE4(v4) + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
       + HIBYTE(v4)) & (unsigned int)((*(_DWORD *)(v1 + 68) >> 5) - 1));
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( (v5 & 1) != 0 )
      break;
    if ( v4 == ((-1LL << (*(_BYTE *)(v1 + 68) & 0x1F)) & *(_QWORD *)(v5 + 8)) )
      goto LABEL_5;
  }
  v5 = 0LL;
LABEL_5:
  if ( v5 )
    return v5;
LABEL_10:
  if ( (*(_DWORD *)(v1 + 636) & 1) == 0 && *(_DWORD *)a1 != 1 && *(_DWORD *)(*(_QWORD *)(v2 + 1896) + 468LL) > 1u )
    ++*(_DWORD *)(v1 + 608);
  return v3;
}
