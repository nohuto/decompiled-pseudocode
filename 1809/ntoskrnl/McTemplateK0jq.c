/*
 * XREFs of McTemplateK0jq @ 0x1402707C0
 * Callers:
 *     McGenControlCallbackV2 @ 0x140139F90 (McGenControlCallbackV2.c)
 *     FsRtlpHeatRegisterVolume @ 0x140817738 (FsRtlpHeatRegisterVolume.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0jq(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, __int64 a5)
{
  EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v7 = a4;
  v9 = 0;
  v8 = 16;
  v10 = &a5;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&MS_StorageTiering_Provider_Context,
           &TieredStorage_NewVolume,
           a3,
           3u,
           &v6);
}
