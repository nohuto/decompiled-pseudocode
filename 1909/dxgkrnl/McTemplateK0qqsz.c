/*
 * XREFs of McTemplateK0qqsz @ 0x1C00246D4
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02419A0 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001F10 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0qqsz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        const GUID *a6,
        const wchar_t *a7)
{
  const GUID *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  int v12; // ecx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  int *v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+48h] [rbp-9h]
  char *v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  const GUID *v19; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+68h] [rbp+17h]
  int v21; // [rsp+6Ch] [rbp+1Bh]
  const wchar_t *v22; // [rsp+70h] [rbp+1Fh]
  int v23; // [rsp+78h] [rbp+27h]
  int v24; // [rsp+7Ch] [rbp+2Bh]
  int v25; // [rsp+B8h] [rbp+67h] BYREF

  v25 = a4;
  v7 = a6;
  v15 = &v25;
  v8 = -1LL;
  v16 = 4LL;
  v18 = 4LL;
  v17 = &a5;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_BYTE *)&a6->Data1 + v9) );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v20 = v10;
  v11 = a7;
  if ( !a6 )
    v7 = &ActivityId;
  v21 = 0;
  v19 = v7;
  if ( a7 )
  {
    do
      ++v8;
    while ( a7[v8] );
    v12 = 2 * v8 + 2;
  }
  else
  {
    v12 = 10;
  }
  v23 = v12;
  v24 = 0;
  if ( !a7 )
    v11 = L"NULL";
  v22 = v11;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context,
           &DripsBlockerTracking_AddProcessEntry,
           &ActivityId,
           5u,
           &EventData);
}
