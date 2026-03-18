/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00FF1F0
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1C00FF190 (InkProcessorOnThreadExit.c)
 * Callees:
 *     ?OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00FF2A0 (-OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor *this, const struct tagTHREADINFO *a2)
{
  unsigned int v4; // edx
  unsigned int v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  const char *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnThreadExit((InkProcessor *)((char *)this + 96), a2);
  }
  else if ( dword_1C030C390 > 2u )
  {
    v9 = 0;
    v12 = 0;
    v7 = &v5;
    v10 = "Ink processor not enabled";
    v5 = v4;
    v8 = 4;
    v11 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
