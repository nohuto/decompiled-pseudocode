/*
 * XREFs of McTemplateK0dz @ 0x1402A1074
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase1 @ 0x140717F78 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x14071838C (PipProcessStartPhase2.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PipProcessRestartPhase1 @ 0x14087D17C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
 * Callees:
 *     McGenEventWrite @ 0x140144A30 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
