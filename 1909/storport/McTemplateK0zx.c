/*
 * XREFs of McTemplateK0zx @ 0x1C0042A14
 * Callers:
 *     TranslateResultToScsiRequestBlock @ 0x1C0042AB4 (TranslateResultToScsiRequestBlock.c)
 *     TranslateToExtendedSrb @ 0x1C0042F60 (TranslateToExtendedSrb.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DDD4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zx(__int64 a1, __int64 a2, __int64 a3, char *a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-48h] BYREF
  char *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&a4[2 * v5] );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v11 = 0;
  v10 = v6;
  if ( !a4 )
    a4 = (char *)&Context.Logger + 4;
  v13 = 8LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v6, &EventOperationDuration, 0LL, 3u, &EventData);
}
