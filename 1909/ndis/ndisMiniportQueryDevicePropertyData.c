/*
 * XREFs of ndisMiniportQueryDevicePropertyData @ 0x1C010AA50
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x1C010ABA8 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(__int64 a1, __int64 a2, wchar_t **a3)
{
  _DEVICE_OBJECT *v3; // rsi
  char v5; // bp
  __int64 v6; // rdx
  unsigned int DevicePropertyData; // ebx
  int v8; // edx
  wchar_t *v9; // rbx
  NTSTATUS v10; // eax
  int v11; // edx
  unsigned int v12; // edi
  size_t v13; // rdi
  int v14; // edx
  wchar_t *v15; // rax
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-30h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-30h]
  ULONG v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 RequiredSize; // [rsp+78h] [rbp+10h] BYREF
  PVOID Data; // [rsp+80h] [rbp+18h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  v3 = *(_DEVICE_OBJECT **)(a1 + 3832);
  LODWORD(RequiredSize) = 0;
  v5 = a1;
  DevicePropertyData = IoGetDevicePropertyData(
                         v3,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v19);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    if ( (unsigned int)RequiredSize < 2 || (RequiredSize & 1) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          13,
          22,
          &WPP_a3868331fe073391203672ef2b551460_Traceguids,
          v5,
          (char)v3);
      }
      return 3221225534LL;
    }
    else
    {
      MakeSizedPoolPtr<wchar_t>(&Data, v6, (unsigned int)RequiredSize);
      v9 = (wchar_t *)Data;
      if ( Data )
      {
        v10 = IoGetDevicePropertyData(
                v3,
                &DEVPKEY_Device_InstanceId,
                0,
                0,
                RequiredSize,
                Data,
                (PULONG)&RequiredSize,
                &v19);
        v12 = v10;
        if ( v10 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v10;
            WPP_RECORDER_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x18u,
              &WPP_a3868331fe073391203672ef2b551460_Traceguids,
              v5,
              (char)v3,
              Typea);
          }
        }
        else if ( v19 == 18 || v19 == 25 )
        {
          v13 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
          if ( v13 - 1 == wcsnlen(v9, v13) )
          {
            v15 = v9;
            v9 = 0LL;
            v12 = 0;
            *a3 = v15;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v14,
                13,
                26,
                &WPP_a3868331fe073391203672ef2b551460_Traceguids,
                v5,
                (char)v3);
            }
            v12 = -1073741762;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_qqL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              13,
              25,
              &WPP_a3868331fe073391203672ef2b551460_Traceguids,
              v5,
              (char)v3,
              v19);
          }
          v12 = -1073741811;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            13,
            23,
            &WPP_a3868331fe073391203672ef2b551460_Traceguids,
            v5,
            (char)v3);
        }
        v12 = -1073741670;
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return v12;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Type) = DevicePropertyData;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x15u,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        v5,
        (char)v3,
        Type);
    }
    return DevicePropertyData;
  }
}
