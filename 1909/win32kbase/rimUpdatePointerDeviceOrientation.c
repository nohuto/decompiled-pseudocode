/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1C014533C
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0143444 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimUpdatePointerDeviceOrientation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  _DWORD *v4; // r11
  _QWORD *v5; // r10
  __int64 result; // rax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d

  v3 = *(_DWORD *)(a1 + 224);
  v4 = (_DWORD *)a1;
  v5 = *(_QWORD **)(a1 + 344);
  result = (unsigned int)(v3 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    a3 = (unsigned int)(*(_DWORD *)(a1 + 176) ^ *(_DWORD *)(a1 + 180));
    v7 = *(_DWORD *)(a1 + 180);
    v8 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 176) = v7;
    *(_DWORD *)(a1 + 180) = a3 ^ v7;
    v9 = v8 ^ *(_DWORD *)(a1 + 188);
    v10 = *(_DWORD *)(a1 + 188);
    v4[46] = v10;
    v4[47] = v9 ^ v10;
    v11 = v4[48] ^ v4[49];
    v12 = v4[49];
    result = (unsigned int)v4[50];
    v4[48] = v12;
    v13 = v11 ^ v12;
    v14 = v4[51];
    v4[49] = v13;
    a2 = (unsigned int)result ^ v14;
    v4[50] = result ^ a2;
    a1 = (unsigned int)result;
    v4[51] = result;
  }
  if ( v5 )
  {
    v15 = v3 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
            return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
          result = v5[8];
        }
        else
        {
          result = v5[6];
        }
      }
      else
      {
        result = v5[4];
      }
    }
    else
    {
      result = v5[2];
    }
    v5[10] = result;
  }
  return result;
}
