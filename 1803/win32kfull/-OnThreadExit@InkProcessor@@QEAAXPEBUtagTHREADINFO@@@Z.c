/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00E4750
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1C00E46F0 (InkProcessorOnThreadExit.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor **this, const struct tagTHREADINFO *a2)
{
  const GUID *v4; // r9
  const GUID *v5; // r8
  InkProcessor *i; // rdi
  int v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  const char *v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v5 = *((_BYTE *)this + 8) == 0 ? (const GUID *)0xC0000001LL : 0LL;
  if ( *((_BYTE *)this + 8) )
  {
    for ( i = this[12]; i != (InkProcessor *)(this + 12); i = *(InkProcessor **)i )
      (*(void (__fastcall **)(__int64, _QWORD, const GUID *))(*((_QWORD *)i - 1) + 16LL))(
        (__int64)i - 8,
        *(_QWORD *)a2,
        v5);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v12 = "Ink processor not enabled";
    v7 = (int)v5;
    v10 = 4;
    v13 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v5, v4, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
