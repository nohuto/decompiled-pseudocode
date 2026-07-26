/*
 * XREFs of ndisPreSetPMParameters @ 0x1C0034E04
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C0034D80 (ndisOidPrePMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C0076C14 (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     GetMiniportFromReqTracker @ 0x1C0035124 (GetMiniportFromReqTracker.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0035178 (ndisGetCombinedPMConfig.c)
 *     ndisSetMiniportEnableWakeUp @ 0x1C0076EA8 (ndisSetMiniportEnableWakeUp.c)
 *     ndisXlatePMParametersToWakeUpEnableOid @ 0x1C0077F40 (ndisXlatePMParametersToWakeUpEnableOid.c)
 */

unsigned __int8 __fastcall ndisPreSetPMParameters(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // di
  __int64 MiniportFromReqTracker; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int128 *v9; // rdx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned __int8 v15; // al
  char v16; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 1;
  v16 = 1;
  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v7 = *(_QWORD *)(v6 + 24);
  v8 = MiniportFromReqTracker;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      50,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      MiniportFromReqTracker,
      v1);
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_16;
  }
  v9 = *(__int128 **)(v1 + 40);
  if ( *(_BYTE *)v9 != 0x80 || !*((_BYTE *)v9 + 1) || *((_WORD *)v9 + 1) < 0x10u )
  {
    *(_DWORD *)(a1 + 40) = -1073676267;
    goto LABEL_16;
  }
  v10 = *((_DWORD *)v9 + 1);
  if ( (v10 & 2) != 0 && (unsigned int)(*(_DWORD *)(v8 + 1100) - 2) > 2
    || (v10 & 0xFFFFFFFD & *(_DWORD *)(v8 + 1068)) != (v10 & 0xFFFFFFFD)
    || (*((_DWORD *)v9 + 2) & *(_DWORD *)(v8 + 1088)) != *((_DWORD *)v9 + 2)
    || (*((_DWORD *)v9 + 3) & 1) != 0 && (unsigned int)(*(_DWORD *)(v8 + 1108) - 2) > 2 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_16;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v13 = v7 + 308;
LABEL_20:
    v14 = *v9;
    if ( *(_DWORD *)(v1 + 48) < 0x14u )
    {
      *(_OWORD *)v13 = v14;
    }
    else
    {
      *(_OWORD *)v13 = v14;
      *(_DWORD *)(v13 + 16) = *((_DWORD *)v9 + 4);
    }
    ndisGetCombinedPMConfig(v8, v8 + 1120);
    v16 = 0;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v13 = v11 + 736;
    goto LABEL_20;
  }
LABEL_14:
  if ( !*(_QWORD *)a1 )
    goto LABEL_15;
  v15 = *(_BYTE *)(v8 + 32);
  if ( v15 <= 6u && (v15 != 6 || *(_BYTE *)(v8 + 33) < 0x14u) )
  {
    ndisXlatePMParametersToWakeUpEnableOid(v1);
    v2 = v16;
    *(_DWORD *)(a1 + 40) = ndisSetMiniportEnableWakeUp(v8, v1);
    if ( v16 == 1 )
      goto LABEL_16;
  }
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqGeneric
    || (*(_DWORD *)(*(_QWORD *)(v8 + 3760) + 120LL) & 8) != 0 )
  {
LABEL_15:
    v2 = 0;
  }
  else
  {
    v2 = 1;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x33u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v8,
      *(_DWORD *)(a1 + 40),
      v2);
  return v2;
}
