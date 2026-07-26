/*
 * XREFs of ndisMiniportPreAddWoLPattern @ 0x1C0034B94
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C001CCF0 (ndisOidPrePMAddWOLPattern.c)
 *     ndisOidPreAddWakeUpPattern @ 0x1C0074140 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C001D630 (ndisIsWoLPacketTypeSupported.c)
 *     ndisCompareWoLPatterns @ 0x1C001D6A0 (ndisCompareWoLPatterns.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00352BC (ndisCreateWoLPatternEntry.c)
 *     ndisGetNewPatternEntryId @ 0x1C0035364 (ndisGetNewPatternEntryId.c)
 *     ndisPMPatternIdExist @ 0x1C0035390 (ndisPMPatternIdExist.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(__int64 a1, __int64 a2, char *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  __int64 v6; // r15
  _DWORD *v8; // rbp
  __int64 v9; // rdx
  int v10; // r8d
  __int64 OidSourceHandle; // r13
  __int64 *v12; // rsi
  __int64 WoLPatternEntry; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int NewPatternEntryId; // eax
  _QWORD *v18; // rax
  char v19; // [rsp+28h] [rbp-40h]
  char v20; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v5 = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      56,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v20);
  }
  v8 = *(_DWORD **)(v6 + 40);
  *a3 = 1;
  if ( ndisIsWoLPacketTypeSupported(v8[3], a1) || v10 == 2 && (unsigned int)(*(_DWORD *)(a1 + 1100) - 2) <= 2 )
  {
    OidSourceHandle = ndisGetOidSourceHandle(v6);
    v12 = *(__int64 **)(a1 + 968);
    if ( !v12 )
      goto LABEL_39;
    do
    {
      v5 = v12;
      if ( ndisCompareWoLPatterns((_DWORD *)v12 + 12, v8) )
        break;
      v12 = (__int64 *)*v12;
      v5 = 0LL;
    }
    while ( v12 );
    if ( !v5 )
      goto LABEL_39;
    v18 = v5 + 1;
    if ( v5 == (__int64 *)-8LL )
      goto LABEL_39;
    do
    {
      if ( v18[2] == OidSourceHandle )
        break;
      v18 = (_QWORD *)*v18;
    }
    while ( v18 );
    if ( v18 )
    {
      v3 = -1073676267;
    }
    else
    {
LABEL_39:
      if ( (v8[1] & 1) != 0
        && ((LODWORD(v9) = v8[37], (unsigned int)v9 < 0xFFFF) || (unsigned __int8)ndisPMPatternIdExist()) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = v9;
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            57,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            v19);
        }
        v3 = -1073676267;
      }
      else
      {
        WoLPatternEntry = ndisCreateWoLPatternEntry(v8);
        v15 = WoLPatternEntry;
        if ( WoLPatternEntry )
        {
          *(_QWORD *)(WoLPatternEntry + 24) = OidSourceHandle;
          *(_QWORD *)(a1 + 192) = WoLPatternEntry;
          if ( (v8[1] & 1) != 0 )
          {
            NewPatternEntryId = v8[37];
          }
          else if ( v5 )
          {
            NewPatternEntryId = *((_DWORD *)v5 + 49);
          }
          else
          {
            NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 968, v9, v14, WoLPatternEntry);
          }
          v8[37] = NewPatternEntryId;
          *(_DWORD *)(v15 + 196) = NewPatternEntryId;
          *(_DWORD *)(v15 + 40) = NewPatternEntryId;
          if ( v5 )
          {
            *a3 = 1;
            *(_QWORD *)(v15 + 8) = v5 + 1;
          }
          else
          {
            *a3 = 0;
          }
        }
        else
        {
          v3 = -1073741670;
        }
      }
    }
  }
  else
  {
    v3 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      *a3,
      v3);
  return v3;
}
