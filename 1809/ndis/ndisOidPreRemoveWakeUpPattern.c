/*
 * XREFs of ndisOidPreRemoveWakeUpPattern @ 0x1C00E7220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00E67AC (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E7820 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C00E7998 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisSetRemoveWakeUpPattern @ 0x1C00E8D20 (ndisSetRemoveWakeUpPattern.c)
 *     ndisXlateRemovePacketPatternToWolPatternOid @ 0x1C00E976C (ndisXlateRemovePacketPatternToWolPatternOid.c)
 */

char __fastcall ndisOidPreRemoveWakeUpPattern(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  char v8; // di
  int v9; // eax
  unsigned __int8 v10; // al
  int v11; // eax
  int v12; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v14 = 0;
  v5 = v3;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qq(0x1Du, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v4, v1);
    v5 = *(_QWORD *)(a1 + 24);
  }
  if ( v5 && ((v6 = *(_QWORD *)(v5 + 24), v7 = *(_BYTE *)(v6 + 56), v7 > 6u) || v7 == 6 && *(_BYTE *)(v6 + 57) >= 0x14u)
    || *(_DWORD *)(v1 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_8:
    v8 = 1;
    goto LABEL_21;
  }
  v9 = ndisSetRemoveWakeUpPattern(v1, &v14);
  v8 = v14;
  *(_DWORD *)(a1 + 40) = v9;
  if ( v8 != 1 )
  {
    if ( *(_QWORD *)(a1 + 24) && !(unsigned __int8)ndisPreRemoveOpenWakeUpPattern(v3, v1) )
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_8;
    }
    if ( *(_QWORD *)a1 )
    {
      v10 = *(_BYTE *)(v4 + 32);
      if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u )
      {
        v11 = ndisXlateRemovePacketPatternToWolPatternOid(v1, &v14);
        v8 = v14;
        *(_DWORD *)(a1 + 40) = v11;
        if ( v8 != 1 )
        {
          v12 = ndisMiniportPreRemoveWOLPattern(v4, v1);
          v8 = v14;
          *(_DWORD *)(a1 + 40) = v12;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 40) = 0;
        v8 = ndisPreRemoveMiniportWakeUpPattern(v4, v1);
      }
    }
  }
LABEL_21:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x1Eu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, *(_QWORD *)a1, *(_DWORD *)(a1 + 40));
  return v8;
}
