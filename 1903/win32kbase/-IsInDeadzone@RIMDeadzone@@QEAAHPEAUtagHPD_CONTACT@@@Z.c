/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C015AAFC
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C013AE8C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C015B01C (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C015B270 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C015C118 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2, __int64 a3)
{
  unsigned int v5; // r12d
  _BOOL8 v6; // r13
  int v7; // ecx
  int v8; // ecx
  LONG x; // edi
  unsigned int v10; // r10d
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DeadzonePalmTelemetry *v18; // rcx
  DeadzonePalmTelemetry *v19; // rcx
  struct tagPOINT v21; // [rsp+60h] [rbp+40h]
  unsigned int Angle; // [rsp+60h] [rbp+40h]
  struct tagPOINT v23; // [rsp+68h] [rbp+48h]

  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = 0;
  v6 = (a2[332].y & 4) == 0 && (a2[302].y & 4) != 0;
  v7 = *((_DWORD *)this + 4);
  if ( v7 && *((_DWORD *)this + 10) )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v23 = a2[306];
        v21 = *(struct tagPOINT *)((char *)this + 44);
        v23.x /= 100;
        v23.y /= 100;
        v21.x /= 100;
        x = v21.x;
        v21.y /= 100;
        Angle = RIMDeadzone::_GetAngle(v23, v21);
        v10 = Angle;
        v11 = (v23.x - x) * (v23.x - x) + (v23.y - v21.y) * (v23.y - v21.y);
        v12 = 0LL;
        if ( *((_DWORD *)this + 8) )
        {
          v13 = *((_QWORD *)this + 3);
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v10, *(_QWORD *)(v13 + 24 * v12)) )
            {
              v14 = 0LL;
              if ( *(_DWORD *)(v13 + 24 * v12 + 16) )
                break;
            }
LABEL_23:
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= *((_DWORD *)this + 8) )
              return v5;
          }
          v15 = v13;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v15 + 24 * v12 + 8);
            if ( v11 >= *(_DWORD *)(v16 + 8 * v14) && v11 < *(_DWORD *)(v16 + 8 * v14 + 4) )
              break;
            v17 = v15;
            if ( v6 )
            {
              v18 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v18 )
              {
                if ( v11 < 0x57E4 )
                {
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v18, v11, v10, 0);
                  v13 = *((_QWORD *)this + 3);
                  v10 = Angle;
                  v17 = v13;
                }
              }
            }
            v14 = (unsigned int)(v14 + 1);
            v15 = v17;
            if ( (unsigned int)v14 >= *(_DWORD *)(v17 + 24 * v12 + 16) )
              goto LABEL_23;
          }
          v5 = 1;
          if ( v6 )
          {
            v19 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v19 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v19, v11, v10, 1);
          }
        }
      }
    }
    else
    {
      return PtInRect((_DWORD *)this + 6, *(_QWORD *)&a2[306]);
    }
  }
  return v5;
}
