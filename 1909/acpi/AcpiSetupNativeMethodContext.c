/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C005B57C
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C005AF10 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005A7F0 (AcpiConvertObjDataToMethodArguments.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005BDF4 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005BF4C (WPP_RECORDER_SF_sqqD.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C00605AC (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  PVOID PoolWithTag; // rsi
  int v5; // ebx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbp
  int NativeMethodHandleFromAcpiObject; // eax
  SIZE_T v9; // r15
  int v10; // edx
  int v11; // edx
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  SIZE_T v14; // [rsp+90h] [rbp+18h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  v5 = -1073741823;
  v6 = AMLIGetParent(*(_QWORD *)(a1 + 24));
  v7 = (volatile signed __int32 *)v6;
  if ( v6 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v6, &v14);
    v5 = NativeMethodHandleFromAcpiObject;
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      v9 = v14;
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v9;
      v5 = AcpiConvertObjDataToMethodArguments(*(_DWORD *)(a1 + 44), *(_QWORD *)(a1 + 48), &P, &v14);
      if ( v5 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4E706341u);
          if ( !PoolWithTag )
          {
            v5 = -1073741670;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 21, 20);
            goto LABEL_16;
          }
        }
        a2[4] = P;
        a2[3] = v14;
        *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
        if ( PoolWithTag )
        {
          a2[7] = PoolWithTag;
          *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
          a2[6] = 64LL;
        }
        v5 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v10, 19, 19);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x13u,
        0x12u,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        v7,
        NativeMethodHandleFromAcpiObject);
    }
    if ( v5 >= 0 )
    {
LABEL_20:
      AMLIDereferenceHandleEx(v7);
      return (unsigned int)v5;
    }
LABEL_16:
    if ( P )
      ExFreePoolWithTag(P, 0x4E706341u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4E706341u);
    goto LABEL_20;
  }
  return (unsigned int)v5;
}
