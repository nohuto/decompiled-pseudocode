/*
 * XREFs of ndisIsValidMulticastFilter @ 0x1C0025FB0
 * Callers:
 *     ndisSetMiniportEthMulticastList @ 0x1C0025474 (ndisSetMiniportEthMulticastList.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025988 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF3C (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIsValidMulticastFilter(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbp
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  unsigned int v9; // ecx
  int v11; // r9d

  v3 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 224) & 0x2000000) != 0 && (*(_DWORD *)(a3 + 88) & 0x20) != 0 )
      return (unsigned int)-1073741637;
    if ( (*(_DWORD *)(a3 + 88) & 0x20) != 0 )
    {
      v7 = (KSPIN_LOCK *)(a2 + 232);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
      *(_DWORD *)(v5 + 224) |= 0x1000000u;
      KeReleaseSpinLock(v7, v8);
    }
  }
  if ( *(_DWORD *)(a1 + 464) )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 95;
LABEL_17:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      v11,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v5,
      a3);
    return v3;
  }
  v9 = *(_DWORD *)(a3 + 48);
  LODWORD(a2) = v9 / 6;
  if ( v9 % 6 )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 96;
    goto LABEL_17;
  }
  if ( (unsigned int)a2 > *(_DWORD *)(*(_QWORD *)(a1 + 400) + 344LL) )
  {
    *(_QWORD *)(a3 + 52) = 0LL;
    v3 = -1073676279;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 97;
      goto LABEL_17;
    }
  }
  return v3;
}
