/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C0115824
 * Callers:
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // dl
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x45u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1);
  while ( 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
    v3 = *(_QWORD *)(a1 + 16);
    v4 = v2;
    while ( v3 )
    {
      _m_prefetchw((const void *)(v3 + 4464));
      v5 = *(_DWORD *)(v3 + 4464);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4464), v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x80) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 4464), 0xFFFFFF7F);
        break;
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
    if ( !v3 )
      break;
    ndisDereferenceMiniport(v3, 0x52u);
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x46u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, a1);
}
