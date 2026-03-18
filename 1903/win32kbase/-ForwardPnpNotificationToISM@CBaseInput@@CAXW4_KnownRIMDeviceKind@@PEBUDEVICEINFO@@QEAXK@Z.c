/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C009D87C
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0069944 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C009D6D4 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1C003FD90 (SendMessageTo.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // xmm1_8
  _DWORD v17[144]; // [rsp+20h] [rbp-E0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v17[3], 0, 0x230uLL);
    v17[0] = a1;
    v17[1] = a3;
    v17[2] = a4;
    if ( a4 == 2 )
    {
      v17[3] = -__CFSHR__(*(_DWORD *)(a2 + 184), 14);
      v11 = *(_QWORD *)(a2 + 384);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 88);
        if ( v12 )
          v17[4] = *(_DWORD *)(v12 + 56);
      }
      v13 = *(unsigned __int16 *)(a2 + 208);
      if ( (_WORD)v13 )
      {
        if ( (unsigned __int16)((unsigned __int16)v13 >> 1) <= 0x104u )
        {
          v17[12] = (unsigned __int16)v13 >> 1;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, v10);
          LOWORD(v13) = *(_WORD *)(a2 + 208);
          v17[12] = 260;
        }
        memmove(&v17[13], *(const void **)(a2 + 216), (unsigned __int16)v13);
      }
      if ( a1 == 1 )
      {
        v14 = *(_DWORD *)(a2 + 472);
        *(_QWORD *)&v17[5] = *(_QWORD *)(a2 + 464);
        v17[7] = v14;
      }
      else if ( a1 == 2 )
      {
        v15 = *(_DWORD *)(a2 + 488);
        v16 = *(_QWORD *)(a2 + 480);
        *(_OWORD *)&v17[5] = *(_OWORD *)(a2 + 464);
        v17[11] = v15;
        *(_QWORD *)&v17[9] = v16;
      }
    }
    return SendMessageTo(13LL, (__int64)v17);
  }
  return result;
}
