/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C0199704
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01949C4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0195BA8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C0196A88 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C01995CC (-TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z.c)
 * Callees:
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0198A6C (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendSqmOutput@CBasePTPEngine@@IEAAXK@Z @ 0x1C0199140 (-SendSqmOutput@CBasePTPEngine@@IEAAXK@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2, int a3, int a4, int a5)
{
  __int64 v5; // r15
  unsigned int v6; // ebx
  int v9; // esi
  int v10; // ebp
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  bool v15; // zf
  int v17; // ecx
  unsigned int v18; // r9d
  __int64 v19; // rax
  _DWORD v20[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !*((_DWORD *)this + 5) )
  {
    LODWORD(v13) = 0;
LABEL_3:
    a3 = 0;
    LOBYTE(v9) = (_DWORD)v13 == 4;
    goto LABEL_4;
  }
  v13 = *((int *)this + 103);
  if ( !(_DWORD)v13 || (_DWORD)v13 == 4 && a4 )
    goto LABEL_3;
  if ( (a3 & 2) != 0 )
  {
    v10 = 1;
    if ( (*((_DWORD *)this + 814) & 0x20000) != 0 )
    {
      v9 = 1;
      a3 &= 2u;
    }
  }
  v17 = a3 & 0x6C;
  if ( !v9 && (a3 & 0x6C) != 0 )
  {
    v10 = 1;
    if ( v17 == 32 )
    {
      v18 = *((_DWORD *)this + v13 + 118);
    }
    else
    {
      v18 = *((_DWORD *)this + v13 + 107);
      if ( v17 == 64 )
        v18 = *((_DWORD *)this + v13 + 126);
    }
    v11 = *((_QWORD *)a2 + 1);
    v12 = *((_QWORD *)a2 + 2);
    if ( v11 > 0 )
    {
      if ( v12 <= v11 )
      {
        v18 = *((_DWORD *)this + 117);
        v19 = v5 - v11;
      }
      else
      {
        v19 = v5 - v12;
      }
      if ( (__int64)((unsigned __int64)(1000 * v19) / *((_QWORD *)this + 12)) < v18 )
      {
        v9 = 1;
        a3 &= 0x6Cu;
      }
    }
  }
LABEL_4:
  v14 = *((_QWORD *)this + 12);
  v20[3] = v9;
  v20[4] = a3;
  v20[0] = 1000 * v11 / v14;
  v20[1] = 1000 * v12 / v14;
  v20[2] = 1000 * v5 / v14;
  CBasePTPEngine::SendEtwOutput((__int64)this, 0, (__int64)v20);
  if ( !a5 || !v10 )
    goto LABEL_8;
  CBasePTPEngine::SendSqmOutput(this, 11611);
  v15 = v9 == 0;
  if ( v9 )
  {
    CBasePTPEngine::SendSqmOutput(this, 11610);
LABEL_8:
    v15 = v9 == 0;
  }
  LOBYTE(v6) = v15;
  return v6;
}
