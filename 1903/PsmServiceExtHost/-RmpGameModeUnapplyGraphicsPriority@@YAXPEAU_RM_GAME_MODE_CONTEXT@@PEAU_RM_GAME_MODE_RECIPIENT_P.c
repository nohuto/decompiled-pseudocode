/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006D040
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18007ED88 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  int v15; // r9d
  int v16; // eax
  int v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h] BYREF
  int v19; // [rsp+38h] [rbp-21h] BYREF
  int v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+44h] [rbp-15h]
  int v22; // [rsp+48h] [rbp-11h]
  int v23; // [rsp+4Ch] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+78h] [rbp+1Fh]
  int v27; // [rsp+7Ch] [rbp+23h]
  int *v28; // [rsp+80h] [rbp+27h]
  int v29; // [rsp+88h] [rbp+2Fh]
  int v30; // [rsp+8Ch] [rbp+33h]
  int *v31; // [rsp+90h] [rbp+37h]
  int v32; // [rsp+98h] [rbp+3Fh]
  int v33; // [rsp+9Ch] [rbp+43h]

  if ( (*((_BYTE *)a1 + 149) & 1) == 0 )
  {
    v3 = *((_DWORD *)a1 + 12);
    v21 = 0;
    v23 = v3;
    v4 = *((_DWORD *)a1 + 15);
    v20 = 16;
    v22 = v4;
    if ( (int)D3DKMTSetYieldPercentage(&v20) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs(v6, v5, v7, v8);
    v9 = *((_DWORD *)a1 + 13);
    v21 = 0;
    v22 = v9;
    v23 = *((_DWORD *)a1 + 14);
    v20 = 16;
    if ( (int)D3DKMTSetMemoryBudgetTarget(&v20, v5, v7, v8) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs(v11, v10, v12, v13);
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v16 = *((_DWORD *)a1 + 12);
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v17 = v16;
        v25 = &v17;
        v18 = *((_DWORD *)a1 + 13);
        v28 = &v18;
        v19 = *((_DWORD *)a1 + 14);
        v31 = &v19;
        v26 = v15;
        v29 = v15;
        v32 = v15;
        TlgWrite(v14, &unk_18009493E, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
