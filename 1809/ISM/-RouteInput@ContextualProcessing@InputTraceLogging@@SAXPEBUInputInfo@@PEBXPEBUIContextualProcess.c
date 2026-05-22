/*
 * XREFs of ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800C29C0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3220 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::RouteInput(
        const struct InputInfo *a1,
        const void *a2,
        const struct IContextualProcessor *a3,
        char a4,
        bool a5,
        bool a6)
{
  const WCHAR *v6; // r15
  const WCHAR *v11; // rdi
  const char *v12; // rbx
  const struct _TlgProvider_t *v13; // rax
  int v14; // ecx
  const char *v15; // rax
  const struct _TlgProvider_t *v16; // r10
  const unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+38h] [rbp-69h] BYREF
  __int64 v21; // [rsp+40h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h]
  const unsigned __int16 *v25; // [rsp+78h] [rbp-29h]
  int v26; // [rsp+80h] [rbp-21h]
  int v27; // [rsp+84h] [rbp-1Dh]
  int *v28; // [rsp+88h] [rbp-19h]
  __int64 v29; // [rsp+90h] [rbp-11h]
  const char *v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+A0h] [rbp-1h]
  int v32; // [rsp+A4h] [rbp+3h]
  const WCHAR *v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+B0h] [rbp+Fh]
  int v35; // [rsp+B4h] [rbp+13h]

  v6 = &sourceString;
  if ( a3 )
    v11 = (const WCHAR *)(*(__int64 (__fastcall **)(const struct IContextualProcessor *))(*(_QWORD *)a3 + 48LL))(a3);
  else
    v11 = &sourceString;
  if ( a5 )
  {
    v12 = "Buffer";
  }
  else if ( a4 )
  {
    v12 = "Drop";
  }
  else if ( a2 )
  {
    v12 = "SendCustom";
  }
  else if ( a3 )
  {
    v12 = "Send";
  }
  else
  {
    v12 = "Listen";
    if ( !a6 )
      v12 = "Ignore";
  }
  v13 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v13 > 4u
    && (*((_DWORD *)v13 + 4) & 0x400LL) != 0
    && (*((_QWORD *)v13 + 3) & 0x400LL) == *((_QWORD *)v13 + 3) )
  {
    v14 = *(_DWORD *)a1;
    v21 = *((_QWORD *)a1 + 2);
    v23 = &v21;
    v24 = 8LL;
    v15 = InputTraceLogging::InputTypeToString(v14);
    v17 = &word_18014A10A;
    LODWORD(v18) = 0;
    if ( v15 )
    {
      v17 = (const unsigned __int16 *)v15;
      v18 = -1LL;
      do
        ++v18;
      while ( v15[v18] );
    }
    v25 = v17;
    v26 = v18 + 1;
    v20 = *((_DWORD *)a1 + 1);
    v28 = &v20;
    v19 = -1LL;
    v27 = 0;
    v29 = 4LL;
    do
      ++v19;
    while ( v12[v19] );
    v30 = v12;
    v31 = v19 + 1;
    LODWORD(v19) = 0;
    v32 = 0;
    if ( v11 )
    {
      v6 = v11;
      v19 = -1LL;
      do
        ++v19;
      while ( v11[v19] );
    }
    v33 = v6;
    v34 = 2 * v19 + 2;
    v35 = 0;
    TlgWrite(v16, &unk_18016AD90, 0LL, 0LL, 7u, &pData);
  }
}
