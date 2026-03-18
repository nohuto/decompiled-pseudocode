/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C01092A0
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1C0109250 (InkProcessorOnThreadExit.c)
 * Callees:
 *     ?OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C0109344 (-OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor *this, const struct tagTHREADINFO *a2)
{
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  const char *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnThreadExit((InkProcessor *)((char *)this + 96), a2);
  }
  else if ( dword_1C0321298 > 2u )
  {
    v8 = 0;
    v11 = 0;
    v6 = &v4;
    v9 = "Ink processor not enabled";
    v4 = -1073741823;
    v7 = 4;
    v10 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
