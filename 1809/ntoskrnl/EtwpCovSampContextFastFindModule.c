/*
 * XREFs of EtwpCovSampContextFastFindModule @ 0x1408C5FC4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampContextFastFindModule(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_DWORD *)(a1 + 684);
  v5 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
  v6 = v5 & *(_QWORD *)a2;
  if ( v3 < 0x20 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 688)
     + 8
     * ((HIBYTE(v6)
       + 37
       * (BYTE6(v6)
        + 37
        * (BYTE5(v6)
         + 37
         * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((v3 >> 5) - 1));
  while ( 1 )
  {
    v7 = *(_QWORD *)v7;
    v8 = 0LL;
    if ( (v7 & 1) != 0 )
      break;
    if ( v6 == (v5 & *(_QWORD *)(v7 + 8)) )
      goto LABEL_7;
  }
  v7 = 0LL;
LABEL_7:
  if ( !v7 )
    return 0LL;
  if ( *(_DWORD *)(v7 + 32) == *(_DWORD *)(a2 + 16)
    && *(_DWORD *)(v7 + 36) == *(_DWORD *)(a2 + 20)
    && *(_QWORD *)(v7 + 40) == *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)(v7 + 136) = MEMORY[0xFFFFF78000000320];
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 64)) <= 1 )
      __fastfail(0xEu);
    v8 = v7;
  }
  *a3 = v8;
  return v7;
}
