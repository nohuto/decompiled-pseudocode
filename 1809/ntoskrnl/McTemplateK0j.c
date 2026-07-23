/*
 * XREFs of McTemplateK0j @ 0x140288CCC
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14068029C (PpCheckInDriverDatabase.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0j(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a4;
  v7 = 16;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context,
           &KMPnPEvt_Driver_Blocked,
           0LL,
           2u,
           &EventData);
}
