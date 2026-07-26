/*
 * XREFs of ndisSourcePreAddProtocolOffload @ 0x1C00232D4
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C0022FB0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00237B0 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C0023838 (ndisIsPMProtocolOffloadSupported.c)
 *     ndisComparePMProtocolOffloads @ 0x1C0023864 (ndisComparePMProtocolOffloads.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(__int64 a1, __int64 a2, _QWORD *a3, char *a4)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  unsigned int *v9; // r14
  __int64 v10; // rdx
  int v11; // edx
  _QWORD *v12; // rdi
  __int64 PMProtocolOffloadEntry; // rcx

  v6 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      90,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      (char)a3);
  }
  v9 = (unsigned int *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(v6 + 32);
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported(v9[3], v10) )
  {
    if ( a1 )
      v12 = *(_QWORD **)(a1 + 512);
    else
      v12 = *(_QWORD **)(v6 + 728);
    if ( !v12 )
      goto LABEL_9;
    do
    {
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v12 + 6, v9) )
        break;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 );
    if ( v12 )
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0xBu,
      0x5Bu,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      *a4,
      v8);
  return v8;
}
