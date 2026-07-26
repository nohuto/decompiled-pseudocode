/*
 * XREFs of ndisDeQueueOpenOnMiniport @ 0x1C0136A1C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E38 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUnsetNdis6OpenHandlers @ 0x1C0138EEC (ndisUnsetNdis6OpenHandlers.c)
 */

__int64 __fastcall ndisDeQueueOpenOnMiniport(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // cl
  __int64 result; // rax
  int v8; // edx
  char v9; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      17,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1,
      v9);
  }
  v4 = *(_QWORD *)(v2 + 56);
  if ( v4 == a1 )
  {
    *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 392);
LABEL_10:
    --*(_WORD *)(v2 + 1820);
    goto LABEL_11;
  }
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 392);
      if ( v5 == a1 )
        break;
      v4 = *(_QWORD *)(v4 + 392);
    }
    while ( v5 );
    if ( v4 )
    {
      *(_QWORD *)(v4 + 392) = *(_QWORD *)(*(_QWORD *)(v4 + 392) + 392LL);
      goto LABEL_10;
    }
  }
LABEL_11:
  ndisUpdateCheckForLoopbackFlag(v2);
  result = ndisUnsetNdis6OpenHandlers(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v8,
             6,
             18,
             (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
             a1,
             v2);
  }
  return result;
}
