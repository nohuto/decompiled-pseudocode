/*
 * XREFs of ndisDereferenceVcPtr @ 0x1C00871C0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     NdisClMakeCall @ 0x1C0082780 (NdisClMakeCall.c)
 *     NdisCmAddPartyComplete @ 0x1C0083190 (NdisCmAddPartyComplete.c)
 *     NdisCmCloseCallComplete @ 0x1C0083330 (NdisCmCloseCallComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C0083770 (NdisCmDropPartyComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00837C0 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C0084D80 (NdisCoDeleteVc.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDLLq @ 0x1C0086C2C (WPP_RECORDER_SF_qDLLq.c)
 */

void __fastcall ndisDereferenceVcPtr(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  KIRQL v5; // al
  bool v6; // zf
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // r14
  _DWORD *v9; // rdx
  char v10; // bp
  int v11; // edx
  KIRQL v12; // dl
  KSPIN_LOCK v13; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // [rsp+20h] [rbp-48h]

  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1[1], a3, a4, v16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 2);
  v6 = (*(_DWORD *)v4)-- == 1;
  v7 = (KSPIN_LOCK *)v4[9];
  v8 = v5;
  if ( !v6 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v4 + 2, v5);
    goto LABEL_26;
  }
  v9 = (_DWORD *)v4[1];
  if ( (*v9 & 8) != 0 )
    *v9 &= ~8u;
  if ( *((_BYTE *)v4 + 336) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        20,
        44,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4 + 2);
    ((void (__fastcall *)(__int64))v4[27])(v4[25]);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 2);
  }
  if ( v4 == (__int64 *)v7[5] )
  {
    v10 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v9,
        20,
        45,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    v10 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4 + 2, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      20,
      46,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)v4,
      v4[9]);
  }
  ExFreePoolWithTag(v4, 0);
  LOBYTE(v4) = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(v7 + 1);
  if ( v10 )
  {
    v7[4] = 0LL;
    v13 = v7[5];
  }
  else
  {
    v7[5] = 0LL;
    v13 = 0LL;
    if ( v7[4] )
    {
LABEL_24:
      KeReleaseSpinLock(v7 + 1, v12);
      goto LABEL_26;
    }
  }
  if ( v13 )
    goto LABEL_24;
  KeReleaseSpinLock(v7 + 1, v12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      20,
      47,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)v7);
  }
  ExFreePoolWithTag(v7, 0);
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      20,
      48,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)v4);
  }
}
