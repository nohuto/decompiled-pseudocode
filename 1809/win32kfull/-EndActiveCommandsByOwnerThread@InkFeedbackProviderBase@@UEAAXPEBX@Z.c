/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C0112ED0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0237AF0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(InkFeedbackProviderBase *this, const void *a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // rdi
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v6; // r14
  const CHAR *v7; // rdx
  char v8; // cl
  __int64 v9; // r9
  char v10; // [rsp+38h] [rbp-59h] BYREF
  int v11; // [rsp+3Ch] [rbp-55h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v12; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  int *v14; // [rsp+68h] [rbp-29h]
  int v15; // [rsp+70h] [rbp-21h]
  int v16; // [rsp+74h] [rbp-1Dh]
  const char *v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  char *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  char *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  __int64 v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]

  v2 = (InkFeedbackProviderBase *)((char *)this + 24);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v4 != v2 )
  {
    v6 = v4;
    v12 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    if ( *((const void **)v6 + 3) == a2 )
    {
      if ( dword_1C030C390 > 4u )
      {
        v7 = (const CHAR *)*((_QWORD *)this + 6);
        v11 = 0;
        v16 = 0;
        v19 = 0;
        v14 = &v11;
        v17 = "Terminating active command by owner thread";
        v15 = 4;
        v18 = 43;
        TlgCreateSz(&pDesc, v7);
        v8 = *((_BYTE *)v6 + 16);
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v21 = &v10;
        v24 = (char *)v6 + 20;
        v10 = v8;
        v22 = 1;
        v25 = 4;
        v27 = v9;
        v28 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D67C2, 0LL, 0LL, 8u, &pData);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 32LL))(
        this,
        v6);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v12);
    }
  }
}
