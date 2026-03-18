/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02454FC
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C020F000 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C024F668 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, unsigned __int64 a3)
{
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  const char *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, a3);
  }
  else if ( dword_1C031F298 > 2u )
  {
    v10 = 0;
    v13 = 0;
    v8 = &v6;
    v11 = "Ink processor not enabled";
    v6 = -1073741823;
    v9 = 4;
    v12 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
