/*
 * XREFs of ACPIAsyncAcquireGlobalLock @ 0x1C000F0D0
 * Callers:
 *     GlobalLockEventHandler @ 0x1C000EFC0 (GlobalLockEventHandler.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C005538C (ACPIIoctlAcquireGlobalLock.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00506E4 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIAsyncAcquireGlobalLock(__int64 a1)
{
  int v2; // edx
  KIRQL v3; // al
  signed __int32 v4; // edx
  KIRQL v5; // si
  volatile signed __int32 *v6; // r8
  bool v7; // zf
  signed __int32 v8; // eax
  void **i; // rax
  _QWORD *v11; // rdx
  char *v12; // rax
  void **v13; // rcx
  void **v14; // rdi

  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    10,
    (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
    a1);
  if ( a1 == *((_QWORD *)AcpiInformation + 9) )
  {
    ++*((_DWORD *)AcpiInformation + 20);
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      11,
      (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
      a1,
      *((_DWORD *)AcpiInformation + 20));
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (int)AcpiInformation;
  v5 = v3;
  if ( *((_UNKNOWN **)AcpiInformation + 6) == (_UNKNOWN *)((char *)AcpiInformation + 48) )
  {
    v6 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
    if ( *((_BYTE *)AcpiInformation + 84) )
      goto LABEL_7;
    v4 = *v6;
    do
    {
      v8 = _InterlockedCompareExchange(v6, ((v4 & 2 | 4u) >> 1) | v4, v4);
      v7 = v4 == v8;
      v4 = v8;
    }
    while ( !v7 );
    if ( (v8 & 2) == 0 )
    {
LABEL_7:
      *((_QWORD *)AcpiInformation + 9) = a1;
      *((_DWORD *)AcpiInformation + 20) = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        4,
        3,
        12,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        a1);
      return 0LL;
    }
  }
  for ( i = (void **)*((_QWORD *)AcpiInformation + 6); i != (void **)((char *)AcpiInformation + 48); i = (void **)*i )
  {
    v14 = i - 2;
    if ( i - 2 == (void **)a1 )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        13,
        (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
        a1,
        *(_WORD *)(a1 + 10));
      ++*((_WORD *)v14 + 5);
      goto LABEL_13;
    }
  }
  v11 = (_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 10) = 1;
  v12 = (char *)AcpiInformation + 48;
  v13 = (void **)*((_QWORD *)AcpiInformation + 7);
  if ( *v13 != (char *)AcpiInformation + 48 )
    __fastfail(3u);
  *v11 = v12;
  *(_QWORD *)(a1 + 24) = v13;
  *v13 = v11;
  *((_QWORD *)v12 + 1) = v11;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    3,
    14,
    (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
    a1);
LABEL_13:
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v5);
  return 259LL;
}
