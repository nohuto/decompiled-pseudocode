/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C0213040
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0212CA0 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C013D33F (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  unsigned int v5; // r10d
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int v11; // r8d
  unsigned int v12; // eax
  double v13; // xmm1_8
  double v14; // xmm2_8
  unsigned int v15; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  int v18; // r9d
  __int64 v19; // xmm1_8
  __int64 v20; // [rsp+58h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 20);
  result = (unsigned int)(a4 - 1);
  v9 = (v5 >> 1) & 1;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C032FC50 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
            *(&gIntObjTelemetryState + 6 * v9 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState + 6 * v9 + 5)
                                                                                           + a5
                                                                                           - gmsInputStartTime);
        }
      }
      gmsInputStartTime = a5;
      v18 = a4 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 5) += abs32(*(_DWORD *)(a2 + 24));
      }
      else
      {
        *((_DWORD *)&gIntObjTelemetryState + 12 * v9 + 4) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    v10 = (unsigned int)v9;
    if ( (a3 & 1) != 0 )
    {
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v9);
    }
    v11 = 2;
    if ( (a3 & 2) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        *(&gIntObjTelemetryState + 6 * v10 + 5) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState
                                                                                                  + 6 * v10
                                                                                                  + 5)
                                                                                        + a5
                                                                                        - gmsInputStartTime);
      gmsInputStartTime = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v12 = abs32(*(_DWORD *)(a2 + 24));
      if ( (v5 & 4) != 0 )
        *((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 7) += v12;
      else
        *((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 1) += v12;
    }
    if ( (a3 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 6);
    }
    if ( (v5 & 4) != 0 && (a3 & 0x1000) != 0 )
    {
      v13 = DOUBLE_1_0;
      v20 = *(_QWORD *)(a2 + 12);
      v14 = DOUBLE_1_0;
      v15 = 2;
      for ( i = (double)((int)v20 - (int)qword_1C032FC44); ; i = i * i )
      {
        if ( (v15 & 1) != 0 )
          v14 = v14 * i;
        v15 >>= 1;
        if ( !v15 )
          break;
      }
      for ( j = (double)(HIDWORD(v20) - HIDWORD(qword_1C032FC44)); ; j = j * j )
      {
        if ( (v11 & 1) != 0 )
          v13 = v13 * j;
        v11 >>= 1;
        if ( !v11 )
          break;
      }
      *((double *)&gIntObjTelemetryState + 6 * v10 + 4) = sqrt_0(v13 + v14)
                                                        + *((double *)&gIntObjTelemetryState + 6 * v10 + 4);
    }
    if ( (a3 & 0x100) != 0 )
    {
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 2);
      gIsButtonHeld = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime && gmsInputStartTime )
        qword_1C032FC98 += a5 - gmsInputStartTime;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 3);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime )
      {
        if ( gmsInputStartTime )
          qword_1C032FCC8 += a5 - gmsInputStartTime;
      }
      gmsInputStartTime = a5;
    }
  }
  v19 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C032FC50 = result;
  *(__int64 *)((char *)&qword_1C032FC44 + 4) = v19;
  return result;
}
