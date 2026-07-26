/*
 * XREFs of ndisOidPrePMAddWOLPattern @ 0x1C00BB930
 * Callers:
 *     <none>
 * Callees:
 *     ndisSourcePreAddWoLPattern @ 0x1C00BB61C (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BB708 (ndisMiniportPreAddWoLPattern.c)
 *     ndisIsValidWoLPattern @ 0x1C00BBA8C (ndisIsValidWoLPattern.c)
 *     ndisGetWoLPatternSize @ 0x1C00BBB98 (ndisGetWoLPatternSize.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00E8424 (ndisSetAddWakeUpPattern.c)
 *     ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00E94E4 (ndisXlateAddWolPatternToPacketPatternOid.c)
 */

char __fastcall ndisOidPrePMAddWOLPattern(__int64 a1)
{
  __int64 v1; // r14
  char v2; // di
  __int64 v3; // rbp
  __int64 v5; // rsi
  unsigned int WoLPatternSize; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  int v10; // eax
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  int v19; // eax
  int v20; // eax
  int v21; // eax
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 1;
  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 32);
  v22 = 1;
  if ( v1 )
  {
    v12 = *(_QWORD *)(v1 + 24);
    v13 = *(_BYTE *)(v12 + 56);
    if ( v13 <= 6u && (v13 != 6 || *(_BYTE *)(v12 + 57) < 0x14u) )
      goto LABEL_21;
  }
  if ( *(_DWORD *)(v5 + 4) != 1 )
    goto LABEL_21;
  if ( (*(_DWORD *)(v5 + 88) & 0xC0000) != 0 )
    return 0;
  *(_DWORD *)(v5 + 56) = 0;
  if ( *(_DWORD *)(v5 + 48) < 0xC4u )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    return v2;
  }
  WoLPatternSize = ndisGetWoLPatternSize(*(_QWORD *)(v5 + 40));
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v5 + 48) < WoLPatternSize )
  {
    *(_DWORD *)(v5 + 56) = WoLPatternSize;
    *(_DWORD *)(a1 + 40) = -1073676268;
    return v2;
  }
  if ( !(unsigned __int8)ndisIsValidWoLPattern(v7) )
  {
    *(_DWORD *)(a1 + 40) = -1073676267;
    return v2;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v14 = *(_QWORD *)(v1 + 24);
    v15 = *(_BYTE *)(v14 + 56);
    if ( v15 <= 6u && (v15 != 6 || *(_BYTE *)(v14 + 57) < 0x14u) )
      goto LABEL_21;
    v16 = ndisSourcePreAddWoLPattern(v1, 0LL, (_QWORD *)v5, &v22);
    v2 = v22;
    *(_DWORD *)(a1 + 40) = v16;
    if ( v2 )
      return v2;
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 || (*(_DWORD *)(v5 + 88) & 0x4000) != 0 )
    goto LABEL_9;
  v17 = *(_QWORD *)(v8 + 16);
  v18 = *(_BYTE *)(v17 + 100);
  if ( v18 <= 6u && (v18 != 6 || *(_BYTE *)(v17 + 101) < 0x14u) )
  {
LABEL_21:
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v2;
  }
  v19 = ndisSourcePreAddWoLPattern(0LL, v8, (_QWORD *)v5, &v22);
  v2 = v22;
  *(_DWORD *)(a1 + 40) = v19;
  if ( v2 )
    return v2;
LABEL_9:
  if ( !*(_QWORD *)a1 )
    return 0;
  v9 = *(_BYTE *)(v3 + 32);
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
  {
    v10 = ndisMiniportPreAddWoLPattern(v3, v5, &v22);
    v2 = v22;
    *(_DWORD *)(a1 + 40) = v10;
    if ( !v2 )
      return 0;
  }
  else
  {
    v20 = ndisXlateAddWolPatternToPacketPatternOid(v5, &v22);
    v2 = v22;
    *(_DWORD *)(a1 + 40) = v20;
    if ( v2 != 1 )
    {
      v21 = ndisSetAddWakeUpPattern(v3, v5, &v22);
      v2 = v22;
      *(_DWORD *)(a1 + 40) = v21;
      if ( v2 != 1 )
        return 0;
    }
  }
  return v2;
}
