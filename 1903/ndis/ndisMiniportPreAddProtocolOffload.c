/*
 * XREFs of ndisMiniportPreAddProtocolOffload @ 0x1C0023410
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C0022FB0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00237B0 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C0023838 (ndisIsPMProtocolOffloadSupported.c)
 *     ndisComparePMProtocolOffloads @ 0x1C0023864 (ndisComparePMProtocolOffloads.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     ndisGetNewPatternEntryId @ 0x1C0035374 (ndisGetNewPatternEntryId.c)
 *     ndisPMPatternIdExist @ 0x1C00353A0 (ndisPMPatternIdExist.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(__int64 a1, __int64 a2, char *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // r14
  _DWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 OidSourceHandle; // r12
  _QWORD *v11; // rsi
  __int64 PMProtocolOffloadEntry; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int NewPatternEntryId; // eax
  _QWORD *v17; // rax
  char v18; // [rsp+28h] [rbp-40h]
  char v19; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v5 = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      92,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v19);
  }
  v8 = *(_DWORD **)(v6 + 40);
  *a3 = 1;
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported((unsigned int)v8[3], a1) )
  {
    OidSourceHandle = ndisGetOidSourceHandle(v6);
    v11 = *(_QWORD **)(a1 + 976);
    if ( !v11 )
      goto LABEL_35;
    do
    {
      v5 = v11;
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v11 + 6, v8) )
        break;
      v11 = (_QWORD *)*v11;
      v5 = 0LL;
    }
    while ( v11 );
    if ( !v5 )
      goto LABEL_35;
    v17 = v5 + 1;
    if ( v5 == (_QWORD *)-8LL )
      goto LABEL_35;
    do
    {
      if ( v17[2] == OidSourceHandle )
        break;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
    if ( v17 )
    {
      v3 = -1073676267;
    }
    else
    {
LABEL_35:
      if ( (v8[1] & 1) != 0
        && ((LODWORD(v9) = v8[37], (unsigned int)v9 < 0xFFFF) || (unsigned __int8)ndisPMPatternIdExist()) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = v9;
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            93,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            v18);
        }
        v3 = -1073676267;
      }
      else
      {
        PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v8);
        v14 = PMProtocolOffloadEntry;
        if ( PMProtocolOffloadEntry )
        {
          *(_QWORD *)(PMProtocolOffloadEntry + 24) = OidSourceHandle;
          *(_QWORD *)(a1 + 192) = PMProtocolOffloadEntry;
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
            NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 976, v9, v13, PMProtocolOffloadEntry);
          }
          v8[37] = NewPatternEntryId;
          *(_DWORD *)(v14 + 196) = NewPatternEntryId;
          *(_DWORD *)(v14 + 40) = NewPatternEntryId;
          if ( v5 )
          {
            *a3 = 1;
            *(_QWORD *)(v14 + 8) = v5 + 1;
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
      0x5Eu,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      *a3,
      v3);
  return v3;
}
