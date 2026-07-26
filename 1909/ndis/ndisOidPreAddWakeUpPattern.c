/*
 * XREFs of ndisOidPreAddWakeUpPattern @ 0x1C0074140
 * Callers:
 *     <none>
 * Callees:
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034B94 (ndisMiniportPreAddWoLPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007685C (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C0076F9C (ndisSetOpenAddWakeUpPattern.c)
 *     ndisXlateAddPacketPatternToWolPatternOid @ 0x1C0077AB8 (ndisXlateAddPacketPatternToWolPatternOid.c)
 */

char __fastcall ndisOidPreAddWakeUpPattern(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // dl
  _DWORD *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // al
  int v8; // eax
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // eax
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *(_DWORD **)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  v13 = 0;
  if ( v5 && ((v6 = *(_QWORD *)(v5 + 24), v7 = *(_BYTE *)(v6 + 56), v7 > 6u) || v7 == 6 && *(_BYTE *)(v6 + 57) >= 0x14u) )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return 1;
  }
  else if ( v3[1] == 1 && (v3[22] & 0xC0000) == 0 )
  {
    v3[38] = 0;
    if ( !v5 || (v8 = ndisSetOpenAddWakeUpPattern(v5), v2 = v13, *(_DWORD *)(a1 + 40) = v8, v2 != 1) )
    {
      if ( *(_QWORD *)a1 )
      {
        v9 = *(_BYTE *)(v1 + 32);
        if ( v9 > 6u || v9 == 6 && *(_BYTE *)(v1 + 33) >= 0x14u )
        {
          v11 = ndisXlateAddPacketPatternToWolPatternOid((char)v3);
          v2 = v13;
          *(_DWORD *)(a1 + 40) = v11;
          if ( v2 == 1 )
            return v2;
          v10 = ndisMiniportPreAddWoLPattern(v1, (__int64)v3, &v13);
        }
        else
        {
          v10 = ndisSetAddWakeUpPattern(v1);
        }
        v2 = v13;
        *(_DWORD *)(a1 + 40) = v10;
      }
    }
  }
  return v2;
}
