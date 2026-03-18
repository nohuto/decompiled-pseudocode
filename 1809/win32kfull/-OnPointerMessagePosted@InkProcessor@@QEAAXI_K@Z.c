/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C022D460
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C01F8EF0 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z @ 0x1C0237118 (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXI_K@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // edx
  unsigned int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  const char *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, a3);
  }
  else if ( dword_1C030C390 > 2u )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v12 = "Ink processor not enabled";
    v7 = v6;
    v10 = 4;
    v13 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
