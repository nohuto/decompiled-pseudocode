/*
 * XREFs of ndisOidPreOffloadCaps @ 0x1C006D830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ndisQueryFilterOffloadCaps @ 0x1C006F374 (ndisQueryFilterOffloadCaps.c)
 *     ndisQueryMiniportOffloadCaps @ 0x1C006F4B4 (ndisQueryMiniportOffloadCaps.c)
 */

char __fastcall ndisOidPreOffloadCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r14
  char v6; // bl
  KIRQL v7; // al
  int v8; // ebx
  char v10[4]; // [rsp+40h] [rbp-38h]

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  v5 = a1[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      218,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v4,
      v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v6 = 1;
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    if ( a1[2] )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v5 + 32) + 96LL));
      *(_QWORD *)(*(_QWORD *)(v5 + 32) + 520LL) = KeGetCurrentThread();
      v8 = *(_DWORD *)(v5 + 60);
      *(_QWORD *)(*(_QWORD *)(v5 + 32) + 520LL) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v5 + 32) + 96LL), v7);
      if ( (v8 & 1) != 0 )
      {
        *((_DWORD *)a1 + 10) = ndisQueryFilterOffloadCaps(v5, v3);
        v6 = 1;
      }
      else
      {
        v6 = 0;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    if ( *a1 )
    {
      *((_DWORD *)a1 + 10) = ndisQueryMiniportOffloadCaps(v1, v3);
      v6 = 1;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDBu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      v4,
      v6,
      *(_DWORD *)v10);
  }
  return v6;
}
