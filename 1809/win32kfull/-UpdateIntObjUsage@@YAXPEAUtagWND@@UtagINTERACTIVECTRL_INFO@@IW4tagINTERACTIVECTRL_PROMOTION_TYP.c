/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C023C85C
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023C4AC (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x1C016327F (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, unsigned __int64 a5)
{
  int v5; // r10d
  __int64 result; // rax
  int v9; // r8d
  _BOOL8 v10; // r14
  unsigned int v11; // eax
  double v12; // xmm1_8
  double v13; // xmm2_8
  unsigned int v14; // eax
  double i; // xmm0_8
  unsigned int v16; // ecx
  unsigned int v17; // eax
  double j; // xmm0_8
  unsigned int v19; // ecx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // xmm1_8
  __int64 v25; // [rsp+58h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 20);
  result = (unsigned int)(a4 - 1);
  v9 = v5 & 2;
  if ( (unsigned int)result <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( dword_1C031DDA8 )
      {
        gmsInputEndTime = a5;
        if ( a5 > gmsInputStartTime )
        {
          if ( gmsInputStartTime )
          {
            v20 = v9 != 0 ? 0x30 : 0;
            *(struct tagINTOBJTELEMETRYSTATE near **)((char *)&gIntObjTelemetryState + v20 + 40) = (struct tagINTOBJTELEMETRYSTATE near *)(*(char **)((char *)&gIntObjTelemetryState + v20 + 40) + a5 - gmsInputStartTime);
          }
        }
      }
      gmsInputStartTime = a5;
      v21 = a4 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v22 = v9 != 0 ? 0x30 : 0;
          *(_DWORD *)((char *)&gIntObjTelemetryState + v22 + 20) += abs32(*(_DWORD *)(a2 + 24));
        }
      }
      else
      {
        v23 = v9 != 0 ? 0x30 : 0;
        *(_DWORD *)((char *)&gIntObjTelemetryState + v23 + 16) += abs32(*(_DWORD *)(a2 + 24));
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    v10 = v9 != 0;
    if ( (a3 & 1) != 0 )
    {
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10);
    }
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
      v11 = abs32(*(_DWORD *)(a2 + 24));
      if ( (v5 & 4) != 0 )
        *((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 7) += v11;
      else
        *((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 1) += v11;
    }
    if ( (a3 & 0x2000) != 0 && !gIsButtonHeld )
    {
      gIsButtonHeld = 1;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 6);
    }
    if ( (v5 & 4) != 0 && (a3 & 0x1000) != 0 )
    {
      v12 = DOUBLE_1_0;
      v25 = *(_QWORD *)(a2 + 12);
      v13 = DOUBLE_1_0;
      v14 = 2;
      for ( i = (double)((int)v25 - (int)qword_1C031DD9C); ; i = i * i )
      {
        v16 = v14;
        if ( (v14 & 1) != 0 )
          v13 = v13 * i;
        v14 >>= 1;
        if ( v16 < 2 )
          break;
      }
      v17 = 2;
      for ( j = (double)(HIDWORD(v25) - HIDWORD(qword_1C031DD9C)); ; j = j * j )
      {
        v19 = v17;
        if ( (v17 & 1) != 0 )
          v12 = v12 * j;
        v17 >>= 1;
        if ( v19 < 2 )
          break;
      }
      *((double *)&gIntObjTelemetryState + 6 * v10 + 4) = sqrt_0(v12 + v13)
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
        qword_1C031DDF8 += a5 - gmsInputStartTime;
      gmsInputStartTime = a5;
      ++*((_DWORD *)&gIntObjTelemetryState + 12 * v10 + 3);
    }
    if ( (a3 & 0x800) != 0 )
    {
      gmsInputEndTime = a5;
      if ( a5 > gmsInputStartTime )
      {
        if ( gmsInputStartTime )
          qword_1C031DE28 += a5 - gmsInputStartTime;
      }
      gmsInputStartTime = a5;
    }
  }
  v24 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  gLastInputInfo = *(_OWORD *)a2;
  dword_1C031DDA8 = result;
  *(__int64 *)((char *)&qword_1C031DD9C + 4) = v24;
  return result;
}
