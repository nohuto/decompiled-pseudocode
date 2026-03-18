/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C015B01C
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C015AAFC (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C015ACDC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2, __int64 a3)
{
  int v3; // r14d
  int v4; // ebp
  int v5; // ebx
  int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rcx
  signed int v9; // eax
  signed int *v10; // rdx
  bool v11; // cc
  int v12; // esi
  int v13; // esi
  int v14; // eax

  v3 = a1.x - a2.x;
  v4 = 0;
  v5 = a1.y - a2.y;
  v6 = 4;
  if ( a1.x == a2.x )
  {
    v7 = 90;
  }
  else
  {
    v8 = 0LL;
    v9 = abs32(100 * v5 / v3);
    v10 = (signed int *)&RIMDeadzone::s_adwTangentLookup;
    do
    {
      if ( v9 <= *v10 )
        break;
      v8 = (unsigned int)(v8 + 1);
      ++v10;
    }
    while ( (unsigned int)v8 < 0x12 );
    if ( (_DWORD)v8 == 18 )
    {
      v7 = 90;
    }
    else
    {
      v7 = 5 * v8;
      if ( (unsigned int)(5 * v8) > 0x5A )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v10, a3);
    }
    v11 = v3 <= 0;
    if ( v3 < 0 )
      goto LABEL_13;
  }
  if ( v5 >= 0 )
    goto LABEL_16;
  v11 = v3 <= 0;
LABEL_13:
  if ( v11 )
  {
    LOBYTE(v4) = v5 >= 0;
    v6 = v4 + 2;
  }
  else
  {
    v6 = 1;
  }
LABEL_16:
  v12 = v6 - 2;
  if ( !v12 )
  {
    v14 = 180;
    goto LABEL_22;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v14 = 360;
LABEL_22:
      v7 = v14 - v7;
    }
  }
  else
  {
    v7 += 180;
  }
  return v7 % 0x168;
}
