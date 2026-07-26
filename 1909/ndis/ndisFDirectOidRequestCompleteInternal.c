/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C008E5F0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090D10 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefNoCheck @ 0x1C00C7DFC (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+68h] [rbp-10h]
  int v14; // [rsp+6Ch] [rbp-Ch]

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  v9 = 0LL;
  v11 = 0LL;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      56,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      v2,
      v1,
      v3);
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v14 = 0;
  v13 = v3;
  v10 = v2;
  v12 = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 312));
  ndisOidRequestComplete((__int64)&v8, v4, v5, v6);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 312), 0x14u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      57,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      v2,
      v1);
  }
}
