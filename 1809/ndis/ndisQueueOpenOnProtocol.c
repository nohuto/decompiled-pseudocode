/*
 * XREFs of ndisQueueOpenOnProtocol @ 0x1C010DD54
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisQueueOpenOnProtocol(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // di
  KIRQL v5; // dl
  int v7; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x2Au, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
  if ( !*(_BYTE *)(a2 + 42) )
  {
    v4 = 1;
    *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = a1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v5);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
  {
    v7 = v4;
    WPP_SF_qqd(0x2Bu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2, v7);
  }
  return v4;
}
