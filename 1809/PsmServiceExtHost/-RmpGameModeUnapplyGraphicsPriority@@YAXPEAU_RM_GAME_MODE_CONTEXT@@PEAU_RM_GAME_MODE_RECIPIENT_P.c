/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800600C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180072D94 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  int v13; // r9d
  int v14; // eax
  int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  int v17; // [rsp+38h] [rbp-21h] BYREF
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  __int64 v19; // [rsp+48h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int *v24; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]
  int *v27; // [rsp+90h] [rbp+37h]
  int v28; // [rsp+98h] [rbp+3Fh]
  int v29; // [rsp+9Ch] [rbp+43h]

  if ( (*((_BYTE *)a1 + 149) & 1) == 0 )
  {
    v19 = 0LL;
    v18 = 0LL;
    HIDWORD(v19) = *((_DWORD *)a1 + 12);
    v3 = *((_DWORD *)a1 + 15);
    LODWORD(v18) = 16;
    LODWORD(v19) = v3;
    if ( (int)D3DKMTSetYieldPercentage(&v18) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs(v5, v4, v6, v7);
    v19 = 0LL;
    v18 = 0LL;
    v19 = *(_QWORD *)((char *)a1 + 52);
    LODWORD(v18) = 16;
    if ( (int)D3DKMTSetMemoryBudgetTarget(&v18, v4, v6, v7) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs(v9, v8, v10, v11);
    if ( dword_18009B0B0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v14 = *((_DWORD *)a1 + 12);
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v15 = v14;
        v21 = &v15;
        v16 = *((_DWORD *)a1 + 13);
        v24 = &v16;
        v17 = *((_DWORD *)a1 + 14);
        v27 = &v17;
        v22 = v13;
        v25 = v13;
        v28 = v13;
        TlgWrite(v12, &unk_180086B61, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
