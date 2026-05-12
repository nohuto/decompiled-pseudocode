/*
 * XREFs of McTemplateK0zx @ 0x1C0041624
 * Callers:
 *     TranslateResultToScsiRequestBlock @ 0x1C00416C4 (TranslateResultToScsiRequestBlock.c)
 *     TranslateToExtendedSrb @ 0x1C0041B70 (TranslateToExtendedSrb.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zx(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *p_Logger, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( p_Logger )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *((_WORD *)p_Logger + v5) );
    v6 = (unsigned int)(2 * v5 + 2);
  }
  else
  {
    v6 = 10LL;
  }
  v11 = 0;
  v10 = v6;
  if ( !p_Logger )
    p_Logger = &Context.Logger;
  v13 = 8LL;
  v9 = p_Logger;
  v12 = &a5;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v6, &EventOperationDuration, 0LL, 3u, &EventData);
}
