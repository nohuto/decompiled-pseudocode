/*
 * XREFs of ndisDeQueueOpenOnProtocol @ 0x1C0138AA8
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // r8
  __int64 v7; // rax
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
      44,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v9);
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 32));
  v5 = *(_QWORD *)(v2 + 24);
  v6 = v4;
  if ( a1 == v5 )
  {
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 400);
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
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 32), v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      6,
      45,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v2);
  }
}
