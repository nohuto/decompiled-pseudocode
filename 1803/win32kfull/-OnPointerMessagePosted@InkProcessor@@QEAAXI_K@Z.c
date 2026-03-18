/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C0204418
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C01D4510 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C020DC70 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, unsigned __int64 a3)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  const char *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v8 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, a3);
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v9;
    v14 = "Ink processor not enabled";
    v9 = v8;
    v12 = 4;
    v15 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v6, v7, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
