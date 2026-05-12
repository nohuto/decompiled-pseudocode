/*
 * XREFs of McTemplateK0zqjujsssq @ 0x1C0027418
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitResetBusSrb @ 0x1C004757C (RaUnitResetBusSrb.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0047CB4 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004953C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C004A5E8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0011680 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zqjujsssq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct _MCGEN_TRACE_CONTEXT *a4,
        char a5,
        __int64 a6,
        char a7,
        __int64 a8,
        const struct _MCGEN_TRACE_CONTEXT *a9,
        const struct _MCGEN_TRACE_CONTEXT *a10,
        const struct _MCGEN_TRACE_CONTEXT *a11,
        char a12)
{
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  const struct _MCGEN_TRACE_CONTEXT *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  const struct _MCGEN_TRACE_CONTEXT *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const struct _MCGEN_TRACE_CONTEXT *v21; // rax
  __int64 v22; // rcx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-99h] BYREF
  const struct _MCGEN_TRACE_CONTEXT *v25; // [rsp+40h] [rbp-89h]
  int v26; // [rsp+48h] [rbp-81h]
  int v27; // [rsp+4Ch] [rbp-7Dh]
  char *v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  __int64 v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  char *v32; // [rsp+70h] [rbp-59h]
  __int64 v33; // [rsp+78h] [rbp-51h]
  __int64 v34; // [rsp+80h] [rbp-49h]
  __int64 v35; // [rsp+88h] [rbp-41h]
  const struct _MCGEN_TRACE_CONTEXT *v36; // [rsp+90h] [rbp-39h]
  int v37; // [rsp+98h] [rbp-31h]
  int v38; // [rsp+9Ch] [rbp-2Dh]
  const struct _MCGEN_TRACE_CONTEXT *v39; // [rsp+A0h] [rbp-29h]
  int v40; // [rsp+A8h] [rbp-21h]
  int v41; // [rsp+ACh] [rbp-1Dh]
  const struct _MCGEN_TRACE_CONTEXT *v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B8h] [rbp-11h]
  int v44; // [rsp+BCh] [rbp-Dh]
  char *v45; // [rsp+C0h] [rbp-9h]
  __int64 v46; // [rsp+C8h] [rbp-1h]

  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_WORD *)&a4->RegistrationHandle + v13) );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v26 = v14;
  v15 = a9;
  if ( !a4 )
    a4 = &Context;
  v27 = 0;
  v25 = a4;
  v28 = &a5;
  v30 = a6;
  v32 = &a7;
  v34 = a8;
  v29 = 4LL;
  v31 = 16LL;
  v33 = 1LL;
  v35 = 16LL;
  if ( a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_BYTE *)&a9->RegistrationHandle + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5;
  }
  v37 = v17;
  v38 = 0;
  if ( !a9 )
    v15 = &stru_1C0055A88;
  v36 = v15;
  v18 = a10;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_BYTE *)&a10->RegistrationHandle + v19) );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5;
  }
  v40 = v20;
  v21 = a11;
  if ( !a10 )
    v18 = &stru_1C0055A88;
  v41 = 0;
  v39 = v18;
  if ( a11 )
  {
    do
      ++v12;
    while ( *((_BYTE *)&a11->RegistrationHandle + v12) );
    v22 = (unsigned int)(v12 + 1);
  }
  else
  {
    v22 = 5LL;
  }
  v43 = v22;
  v44 = 0;
  if ( !a11 )
    v21 = &stru_1C0055A88;
  v46 = 4LL;
  v42 = v21;
  v45 = &a12;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v22, &EventBusReset, 0LL, 0xAu, &EventData);
}
