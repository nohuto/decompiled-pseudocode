/*
 * XREFs of ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00B9E60 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00BA1E4 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00BA26C (ndisIsPMProtocolOffloadSupported.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00BA298 (ndisComparePMProtocolOffloads.c)
 *     ndisPMPatternIdExist @ 0x1C00BB600 (ndisPMPatternIdExist.c)
 *     ndisGetNewPatternEntryId @ 0x1C00BBE64 (ndisGetNewPatternEntryId.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  _DWORD *v8; // rsi
  __int64 OidSourceHandle; // r12
  _QWORD *v10; // r14
  __int64 PMProtocolOffloadEntry; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int NewPatternEntryId; // eax
  _QWORD *v17; // rax
  unsigned int v18; // edx

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x5Cu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a2);
  v8 = *(_DWORD **)(a2 + 40);
  *a3 = 1;
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported((unsigned int)v8[3], a1) )
  {
    OidSourceHandle = ndisGetOidSourceHandle(a2);
    v10 = *(_QWORD **)(a1 + 976);
    if ( !v10 )
      goto LABEL_34;
    do
    {
      v5 = v10;
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v10 + 6, v8) )
        break;
      v10 = (_QWORD *)*v10;
      v5 = 0LL;
    }
    while ( v10 );
    if ( !v5 )
      goto LABEL_34;
    v17 = v5 + 1;
    if ( v5 == (_QWORD *)-8LL )
      goto LABEL_34;
    do
    {
      if ( v17[2] == OidSourceHandle )
        break;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_34:
      if ( (v8[1] & 1) == 0 || (v18 = v8[37], v18 >= 0xFFFF) && !(unsigned __int8)ndisPMPatternIdExist() )
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
            NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 976, v12, v13, PMProtocolOffloadEntry);
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
        goto LABEL_15;
      }
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_D(0x5Du, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v18);
    }
    v3 = -1073676267;
  }
  else
  {
    v3 = -1073741637;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(0x5Eu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, (unsigned __int8)*a3, v3);
  return v3;
}
