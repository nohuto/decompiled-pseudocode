/*
 * XREFs of ndisOidPreRemoveWakeUpPattern @ 0x1C0074C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C0073E50 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C0075A64 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C0075C34 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisSetRemoveWakeUpPattern @ 0x1C00773CC (ndisSetRemoveWakeUpPattern.c)
 *     ndisXlateRemovePacketPatternToWolPatternOid @ 0x1C0077FB4 (ndisXlateRemovePacketPatternToWolPatternOid.c)
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
  unsigned __int8 v9; // al

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v5 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      29,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v4,
      v1);
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
  v8 = 0;
  *(_DWORD *)(a1 + 40) = ndisSetRemoveWakeUpPattern(v1);
  if ( *(_QWORD *)(a1 + 24) && !(unsigned __int8)ndisPreRemoveOpenWakeUpPattern(v3, v1) )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_BYTE *)(v4 + 32);
    if ( v9 > 6u || v9 == 6 && *(_BYTE *)(v4 + 33) >= 0x14u )
    {
      *(_DWORD *)(a1 + 40) = ndisXlateRemovePacketPatternToWolPatternOid(v1);
      v8 = 0;
      *(_DWORD *)(a1 + 40) = ndisMiniportPreRemoveWOLPattern(v4, v1);
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 0;
      v8 = ndisPreRemoveMiniportWakeUpPattern(v4, v1);
    }
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      30,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      *(_QWORD *)a1,
      *(_DWORD *)(a1 + 40));
  return v8;
}
