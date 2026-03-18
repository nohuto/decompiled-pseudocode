/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C012DB38
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C010FF6C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C012E038 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C012E28C (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C012F060 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagHPD_CONTACT *a2, __int64 a3)
{
  unsigned int v5; // r15d
  _BOOL8 v6; // r12
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r8
  LONG v10; // esi
  LONG v11; // r14d
  int v12; // edi
  int v13; // ebx
  unsigned int Angle; // r13d
  unsigned int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  DeadzonePalmTelemetry *v22; // rcx
  DeadzonePalmTelemetry *v23; // rcx
  struct tagPOINT v25; // [rsp+60h] [rbp+8h]
  struct tagPOINT v26; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = 0;
  v6 = (*((_DWORD *)a2 + 659) & 4) == 0 && (*((_DWORD *)a2 + 605) & 4) != 0;
  v7 = *((_DWORD *)this + 4);
  if ( v7 && *((_DWORD *)this + 10) )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *(_QWORD *)((char *)this + 44);
        v10 = (int)*((_QWORD *)a2 + 306) / 100;
        v26.x = v10;
        v11 = (int)HIDWORD(*((_QWORD *)a2 + 306)) / 100;
        v26.y = v11;
        v12 = (int)v9 / 100;
        v25.x = (int)v9 / 100;
        v13 = SHIDWORD(v9) / 100;
        v25.y = SHIDWORD(v9) / 100;
        Angle = RIMDeadzone::_GetAngle(v26, v25);
        v15 = (v10 - v12) * (v10 - v12) + (v11 - v13) * (v11 - v13);
        v16 = 0LL;
        if ( *((_DWORD *)this + 8) )
        {
          v17 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(Angle, *(_QWORD *)(v17 + 24 * v16)) )
            {
              v18 = 0LL;
              if ( *(_DWORD *)(v17 + 24 * v16 + 16) )
                break;
            }
LABEL_23:
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= *((_DWORD *)this + 8) )
              return v5;
          }
          v19 = v17;
          while ( 1 )
          {
            v20 = *(_QWORD *)(v19 + 24 * v16 + 8);
            if ( v15 >= *(_DWORD *)(v20 + 8 * v18) && v15 < *(_DWORD *)(v20 + 8 * v18 + 4) )
              break;
            v21 = v19;
            if ( v6 )
            {
              v22 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v22 )
              {
                if ( v15 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v22, v15, Angle, 0);
                  v17 = *((_QWORD *)this + 3);
                  v21 = v17;
                }
              }
            }
            v18 = (unsigned int)(v18 + 1);
            v19 = v21;
            if ( (unsigned int)v18 >= *(_DWORD *)(v21 + 24 * v16 + 16) )
              goto LABEL_23;
          }
          v5 = 1;
          if ( v6 )
          {
            v23 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v23 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v23, v15, Angle, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *((_QWORD *)a2 + 306));
    }
  }
  return v5;
}
