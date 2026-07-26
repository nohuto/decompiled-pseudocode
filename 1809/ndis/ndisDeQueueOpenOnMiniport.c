/*
 * XREFs of ndisDeQueueOpenOnMiniport @ 0x1C0115AC4
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001B314 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisUnsetNdis6OpenHandlers @ 0x1C0117C6C (ndisUnsetNdis6OpenHandlers.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x11u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1, a2);
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 == a1 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 392);
LABEL_10:
    --*(_WORD *)(a2 + 1820);
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
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers();
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x12u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1, a2);
}
