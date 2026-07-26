/*
 * XREFs of ndisCreateAdapterInstanceName @ 0x1C0106AA4
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C002CE24 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00407D0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0106C5C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisMiniportQueryDeviceProperty @ 0x1C0106CE4 (ndisMiniportQueryDeviceProperty.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116734 (ndisMiniportQueryInterfaceProperty.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // r14
  unsigned __int64 v6; // rdx
  int DeviceProperty; // edi
  bool v8; // sf
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  char v11; // r10
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  int InterfaceProperty; // eax
  _QWORD *v17; // rax
  void **v18; // [rsp+40h] [rbp-20h] BYREF
  void *v19; // [rsp+48h] [rbp-18h]
  char v20; // [rsp+50h] [rbp-10h]
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  *a2 = 0LL;
  v4 = a2;
  *a3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      30,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1);
  }
  P = 0LL;
  wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v18, (__int64)&P);
  if ( (*(_DWORD *)(a1 + 120) & 0x180) != 0 )
  {
    InterfaceProperty = ndisMiniportQueryInterfaceProperty(a1);
LABEL_25:
    DeviceProperty = InterfaceProperty;
    if ( v20 )
      wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v18, v19);
    v8 = DeviceProperty < 0;
    goto LABEL_7;
  }
  DeviceProperty = ndisMiniportQueryDeviceProperty(a1, DevicePropertyFriendlyName);
  if ( v20 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>(v18, v19);
  v8 = DeviceProperty < 0;
  if ( DeviceProperty )
  {
    wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v18, (__int64)&P);
    InterfaceProperty = ndisMiniportQueryDeviceProperty(a1, DevicePropertyDeviceDescription);
    goto LABEL_25;
  }
LABEL_7:
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        31,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        a1,
        DeviceProperty);
    }
  }
  else
  {
    Rtl::DuplicateUnicodeString(&v22, P);
    v9 = v22;
    if ( v22 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x21u,
          &WPP_a3868331fe073391203672ef2b551460_Traceguids,
          (unsigned __int16 *)v22);
      v10 = P;
      v11 = 0;
      v12 = 0;
      v6 = (unsigned __int64)*(unsigned __int16 *)P >> 1;
      if ( v6 )
      {
        v13 = 0LL;
        do
        {
          v14 = v10[1];
          if ( *(_WORD *)(v14 + 2 * v13) == 47 )
          {
            v11 = 1;
            *(_WORD *)(v14 + 2 * v13) = 45;
            v10 = P;
          }
          v13 = ++v12;
        }
        while ( v12 < v6 );
        if ( v11 )
        {
          v17 = v10;
          v10 = 0LL;
          *a3 = v17;
        }
      }
      *v4 = v9;
      P = 0LL;
      if ( v10 )
        goto LABEL_19;
      goto LABEL_20;
    }
    DeviceProperty = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        32,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        a1);
    }
  }
  v10 = P;
  P = 0LL;
  if ( v10 )
LABEL_19:
    ExFreePoolWithTag(v10, 0);
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      34,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1,
      DeviceProperty);
  }
  return (unsigned int)DeviceProperty;
}
