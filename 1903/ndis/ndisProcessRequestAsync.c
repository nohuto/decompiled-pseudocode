/*
 * XREFs of ndisProcessRequestAsync @ 0x1C006F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisProcessRequestAsync(_QWORD *P)
{
  __int64 v1; // rdi
  void *v3; // rbx
  int v4; // edx

  v1 = P[7];
  v3 = (void *)P[6];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      50,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      (char)v3);
  if ( (unsigned int)ndisQueueOidRequest((__int64)v3, v1, 0LL, 0LL) != 259 )
  {
    ExFreePoolWithTag(v3, 0);
    LOBYTE(v3) = 0;
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0x4Au);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      51,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      (char)v3,
      0);
  }
}
