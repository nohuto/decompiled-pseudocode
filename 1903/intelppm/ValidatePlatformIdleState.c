/*
 * XREFs of ValidatePlatformIdleState @ 0x1C002E334
 * Callers:
 *     UpdateKernelPlatformStates @ 0x1C000DC30 (UpdateKernelPlatformStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00354EC (RegisterKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009A50 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  _DWORD *v3; // r11
  __int64 v4; // rax
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // r11d
  _DWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int16 v11; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 1136);
    v4 = *((unsigned __int8 *)a1 + 16);
    if ( (unsigned int)v4 >= *v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = *a1;
        v6 = 70;
        goto LABEL_5;
      }
      return (unsigned int)-1073741811;
    }
    if ( (v3[3 * v4 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 71;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
  }
  v7 = a1[7];
  v8 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD **)(*(_QWORD *)&a1[4 * v8 + 10] + 1136LL);
      if ( (unsigned int)LOBYTE(a1[4 * v8 + 12]) >= *v9 )
        break;
      if ( !BYTE2(a1[4 * v8 + 12]) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v11 = 73;
LABEL_26:
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v11,
          (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
          *a1,
          v8);
        return (unsigned int)-1073741811;
      }
      if ( !v1 )
      {
        v10 = *((unsigned __int8 *)a1 + 16);
        if ( (unsigned int)v10 >= *v9 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v6 = 75;
LABEL_9:
          v5 = *a1;
LABEL_5:
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v6,
            (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
            v5);
          return (unsigned int)-1073741811;
        }
        if ( (v9[3 * v10 + 1] & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v6 = 76;
          goto LABEL_9;
        }
      }
      if ( ++v8 >= v7 )
        return v2;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v11 = 72;
    goto LABEL_26;
  }
  return v2;
}
