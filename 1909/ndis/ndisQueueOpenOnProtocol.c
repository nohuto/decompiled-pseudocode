/*
 * XREFs of ndisQueueOpenOnProtocol @ 0x1C012BE40
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall ndisQueueOpenOnProtocol(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // di
  KIRQL v5; // dl
  int v6; // edx
  char v8; // [rsp+30h] [rbp-28h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      42,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v8);
  }
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 32));
  if ( !*(_BYTE *)(v2 + 42) )
  {
    v4 = 1;
    *(_QWORD *)(a1 + 400) = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 24) = a1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 32), v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      6,
      43,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v2,
      v4);
  }
  return v4;
}
