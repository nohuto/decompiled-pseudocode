/*
 * XREFs of ndisSetEnableWakeUp @ 0x1C0076C14
 * Callers:
 *     ndisOidPreEnableWakeUp @ 0x1C0074240 (ndisOidPreEnableWakeUp.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisPreSetPMParameters @ 0x1C0034E04 (ndisPreSetPMParameters.c)
 *     McTemplateK0jqxtpp @ 0x1C0072368 (McTemplateK0jqxtpp.c)
 *     ndisSetMiniportEnableWakeUp @ 0x1C0076EA8 (ndisSetMiniportEnableWakeUp.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00771E0 (ndisSetOpenEnableWakeUp.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C007836C (ndisXlateWakeUpEnableToPMParametersOid.c)
 */

unsigned __int8 __fastcall ndisSetEnableWakeUp(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int8 v2; // di
  _DWORD *v3; // rsi
  __int64 v5; // rbp
  unsigned __int8 v7; // al
  int v8; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(_DWORD **)(a1 + 32);
  v5 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      12,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v5,
      v1,
      (char)v3);
  *(_DWORD *)(a1 + 40) = 0;
  if ( v3[12] < 4u )
  {
    v3[14] = 4;
    *(_DWORD *)(a1 + 40) = -1073676268;
    v3[13] = 0;
LABEL_5:
    v2 = 1;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_DWORD *)(a1 + 40) = ndisSetOpenEnableWakeUp(v1, (char)v3);
    v2 = 1;
  }
  else if ( *(_QWORD *)a1 )
  {
    v7 = *(_BYTE *)(v5 + 32);
    if ( v7 > 6u || v7 == 6 && *(_BYTE *)(v5 + 33) >= 0x14u )
    {
      v8 = ndisXlateWakeUpEnableToPMParametersOid(v3);
      *(_DWORD *)(a1 + 40) = v8;
      if ( v8 )
        goto LABEL_5;
      v2 = ndisPreSetPMParameters(a1);
    }
    else
    {
      v2 = 0;
      *(_DWORD *)(a1 + 40) = ndisSetMiniportEnableWakeUp(v5, (char)v3);
    }
  }
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      15,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v5,
      v1,
      (char)v3);
  return v2;
}
