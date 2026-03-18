/*
 * XREFs of McTemplateK0dz @ 0x1402A0DD4
 * Callers:
 *     PipProcessStartPhase3 @ 0x140700C08 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase1 @ 0x140719D68 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x14071A17C (PipProcessStartPhase2.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PipProcessRestartPhase1 @ 0x14087C87C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14087C93C (PipProcessRestartPhase2.c)
 * Callees:
 *     McGenEventWrite @ 0x1401450D0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0dz(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, const wchar_t *a5)
{
  const wchar_t *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-48h] BYREF
  int *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  const wchar_t *v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  int v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4;
  v5 = a5;
  v11 = &v16;
  v12 = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v5 = L"NULL";
  v13 = v5;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &EventData);
}
