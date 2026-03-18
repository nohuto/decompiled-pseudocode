/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C012DD18
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C010FFF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01100CC (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C012DFBC (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C012E038 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C012E134 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C012E1E0 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C012E28C (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     RIMGetOneCoreEdition @ 0x1C012FA04 (RIMGetOneCoreEdition.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  RIMDeadzone *v5; // r13
  unsigned int v6; // r12d
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // r9
  unsigned int v16; // r14d
  __int64 v17; // r10
  int v18; // r9d
  unsigned int v19; // r11d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagPOINT v24; // [rsp+20h] [rbp-18h]
  struct tagPOINT v25; // [rsp+80h] [rbp+48h]
  unsigned int Angle; // [rsp+80h] [rbp+48h]
  int v28; // [rsp+94h] [rbp+5Ch]
  int v29; // [rsp+9Ch] [rbp+64h]

  v29 = HIDWORD(a4);
  v28 = HIDWORD(a3);
  v5 = RIMDeadzone::s_pRimDeadzoneInstance;
  v6 = 0;
  v7 = a4;
  v8 = a3;
  if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) || a5 != *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
  {
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    v9 = a5 ? RIMDeadzone::_InitializeRightHandedDeadzone(v5) : RIMDeadzone::_InitializeLeftHandedDeadzone(v5);
    if ( v9 < 0 )
      return 0LL;
  }
  v24.x = v8 / 100;
  v24.y = v28 / 100;
  v25.x = v7 / 100;
  v25.y = v29 / 100;
  Angle = RIMDeadzone::_GetAngle(v24, v25);
  v13 = Angle;
  v14 = *((_DWORD *)v5 + 8);
  v15 = 0LL;
  v16 = (v8 / 100 - v7 / 100) * (v8 / 100 - v7 / 100) + (v28 / 100 - v29 / 100) * (v28 / 100 - v29 / 100);
  if ( v14 )
  {
    v17 = *((_QWORD *)v5 + 3);
    while ( 1 )
    {
      if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v13, *(_QWORD *)(v17 + 24LL * (unsigned int)v15)) )
      {
        v19 = *(_DWORD *)(v17 + 8 * v12 + 16);
        v20 = 0;
        if ( v19 )
          break;
      }
LABEL_19:
      v15 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v15 >= v14 )
        goto LABEL_20;
    }
    v11 = *(_QWORD *)(v17 + 8 * v12 + 8);
    while ( v16 < *(_DWORD *)(v11 + 8LL * v20) || v16 >= *(_DWORD *)(v11 + 8LL * v20 + 4) )
    {
      if ( ++v20 >= v19 )
      {
        v13 = Angle;
        goto LABEL_19;
      }
    }
    return 1;
  }
LABEL_20:
  if ( (unsigned int)RIMGetOneCoreEdition(v13, v11, v12, v15) == 6 )
    return v6;
  if ( a5 != 1 )
  {
    if ( a5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
    if ( v28 > a2[3] - 1000 && v8 <= v7 )
      return 1;
    if ( v8 >= *a2 + 530 )
      return v6;
    goto LABEL_31;
  }
  if ( v28 > a2[3] - 1000 && v8 >= v7 )
    return 1;
  if ( v8 > a2[2] - 530 )
  {
LABEL_31:
    if ( v28 >= v29 )
      return 1;
  }
  return v6;
}
