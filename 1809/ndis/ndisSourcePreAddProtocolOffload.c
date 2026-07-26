/*
 * XREFs of ndisSourcePreAddProtocolOffload @ 0x1C00B9FCC
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00B9E60 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00BA1E4 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00BA26C (ndisIsPMProtocolOffloadSupported.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00BA298 (ndisComparePMProtocolOffloads.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 PMProtocolOffloadEntry; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x5Au, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, a3);
  v9 = (unsigned int *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported(v9[3], v10) )
  {
    if ( a1 )
      v11 = *(_QWORD **)(a1 + 512);
    else
      v11 = *(_QWORD **)(a2 + 736);
    if ( !v11 )
      goto LABEL_9;
    do
    {
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v11 + 6, v9) )
        break;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v8 = -1073676267;
    }
    else
    {
LABEL_9:
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v9);
      if ( PMProtocolOffloadEntry )
      {
        *(_QWORD *)(PMProtocolOffloadEntry + 24) = a3[13];
        a3[20] = PMProtocolOffloadEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(0x5Bu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, (unsigned __int8)*a4, v8);
  return v8;
}
