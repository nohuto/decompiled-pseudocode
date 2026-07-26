/*
 * XREFs of ndisDeQueueOpenOnProtocol @ 0x1C0117918
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // dl
  __int64 v7; // rax

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x2Cu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
  v5 = *(_QWORD *)(a2 + 24);
  v6 = v4;
  if ( a1 == v5 )
  {
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 400);
  }
  else if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 400);
      if ( a1 == v7 )
        break;
      v5 = *(_QWORD *)(v5 + 400);
    }
    while ( v7 );
    if ( v5 )
      *(_QWORD *)(v5 + 400) = *(_QWORD *)(*(_QWORD *)(v5 + 400) + 400LL);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v6);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x2Du, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a2);
}
