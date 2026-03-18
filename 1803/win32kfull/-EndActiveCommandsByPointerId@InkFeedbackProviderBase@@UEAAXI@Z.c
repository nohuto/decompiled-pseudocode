/*
 * XREFs of ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C020DA40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C020E5E0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByPointerId(InkFeedbackProviderBase *this, int a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // rdi
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v6; // r14
  const CHAR *v7; // rdx
  char v8; // cl
  const GUID *v9; // r9
  LPCGUID v10; // r8
  char v11; // [rsp+38h] [rbp-59h] BYREF
  int v12; // [rsp+3Ch] [rbp-55h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v13; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  int *v15; // [rsp+68h] [rbp-29h]
  int v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+74h] [rbp-1Dh]
  const char *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  char *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  const GUID *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]
  char *v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+C0h] [rbp+2Fh]
  int v30; // [rsp+C4h] [rbp+33h]

  v2 = (InkFeedbackProviderBase *)((char *)this + 24);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v4 != v2 )
  {
    v6 = v4;
    v13 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    if ( *((_DWORD *)v6 + 5) == a2 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v7 = (const CHAR *)*((_QWORD *)this + 6);
        v12 = 0;
        v17 = 0;
        v20 = 0;
        v15 = &v12;
        v18 = "Terminating active command by pointer id";
        v16 = 4;
        v19 = 41;
        TlgCreateSz(&pDesc, v7);
        v8 = *((_BYTE *)v6 + 16);
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v22 = &v11;
        v28 = (char *)v6 + 24;
        v11 = v8;
        v23 = 1;
        v25 = v9;
        v26 = 4;
        v29 = 8;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3D5D, v10, v9, 8u, &pData);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 32LL))(
        this,
        v6);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v13);
    }
  }
}
