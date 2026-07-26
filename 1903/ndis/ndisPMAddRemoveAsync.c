/*
 * XREFs of ndisPMAddRemoveAsync @ 0x1C0074D90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisPMAddRemoveAsync(_QWORD *P)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v5; // edx
  char v6; // bp
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  _QWORD v11[6]; // [rsp+40h] [rbp-48h] BYREF

  v1 = P[4];
  v2 = P[5];
  v4 = P[6];
  memset(v11, 0, sizeof(v11));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      68,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v1,
      v4);
  }
  LODWORD(v11[5]) = ndisOidPMAddRemove(v1, v2, v4);
  v6 = v11[5];
  v11[4] = v4;
  *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 88) & 0xF8FFFFF6 | 0x5000000;
  ndisOidRequestComplete((__int64)v11, v7, v8, v9);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xEu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      11,
      69,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v1,
      v4,
      v6);
  }
}
