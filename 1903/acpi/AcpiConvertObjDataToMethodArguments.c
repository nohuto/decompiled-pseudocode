/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C005A7F0
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C005B57C (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C0010844 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C00109E8 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C005B7A4 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x1C005BB08 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, SIZE_T *a4)
{
  void *v4; // rsi
  __int64 v6; // rbx
  int v8; // ebx
  __int64 v9; // r14
  int v10; // edx
  SIZE_T v11; // rbp
  PVOID PoolWithTag; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rax
  int v22; // [rsp+20h] [rbp-78h]
  SIZE_T v23[9]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h]
  _QWORD *v26; // [rsp+B0h] [rbp+18h]

  v26 = a3;
  v25 = a2;
  v4 = 0LL;
  v6 = a2;
  if ( a1 )
  {
    v24 = 0;
    v9 = 0LL;
    v23[0] = 0LL;
    do
    {
      v8 = ACPIIoctlCalculateOutputBufferSizeV1(v6 + 40 * v9, v23, &v24, 1, 0);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_19;
        v16 = 21;
        v17 = 21;
        goto LABEL_11;
      }
      v6 = v25;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < a1 );
    v11 = v23[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23[0], 0x4E706341u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15, v22, v11);
      return (unsigned int)v8;
    }
    v9 = 0LL;
    v18 = (__int64)PoolWithTag;
    if ( a1 )
    {
      while ( 1 )
      {
        v8 = ACPIIoctlCalculateOutputBufferV1(v6 + 40 * v9, v18, 1, 0);
        if ( v8 < 0 )
          break;
        LOWORD(v19) = *(_WORD *)(v18 + 2);
        if ( (unsigned __int16)v19 >= 4u )
          v19 = (unsigned __int16)v19;
        else
          v19 = 4LL;
        v6 = v25;
        v18 += v19 + 4;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a1 )
          goto LABEL_18;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 23;
        v16 = 19;
LABEL_11:
        WPP_RECORDER_SF_DDDD(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          v16,
          v17,
          v22,
          v9,
          a1,
          *(_WORD *)(v25 + 40 * v9 + 2),
          v8);
      }
    }
    else
    {
LABEL_18:
      v20 = v26;
      v8 = 0;
      *a4 = v11;
      *v20 = v4;
    }
LABEL_19:
    if ( v8 < 0 && v4 )
      ExFreePoolWithTag(v4, 0x4E706341u);
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
    return 0;
  }
  return (unsigned int)v8;
}
