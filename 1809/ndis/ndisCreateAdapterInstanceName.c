/*
 * XREFs of ndisCreateAdapterInstanceName @ 0x1C00CAC70
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     WPP_SF_qZl @ 0x1C0051B20 (WPP_SF_qZl_ea_1C0051B20.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(_UNICODE_STRING **a1, __int64 a2, __int64 a3, _UNICODE_STRING **a4)
{
  _UNICODE_STRING **v4; // r15
  _DEVICE_OBJECT *v7; // rdi
  DEVICE_REGISTRY_PROPERTY v8; // r14d
  NTSTATUS DeviceProperty; // eax
  PVOID PoolWithTag; // rax
  void *v11; // r12
  NTSTATUS appended; // ebx
  _UNICODE_STRING *v13; // rax
  _UNICODE_STRING *v14; // r14
  unsigned __int16 v15; // dx
  char v16; // r15
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  _UNICODE_STRING *v24; // rax
  _UNICODE_STRING *v25; // r15
  PULONG ResultLength; // [rsp+20h] [rbp-28h]
  int PropertyBuffer[6]; // [rsp+30h] [rbp-18h] BYREF
  ULONG BufferLength; // [rsp+98h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+58h]
  _UNICODE_STRING **v31; // [rsp+A8h] [rbp+60h]

  v31 = a4;
  v30 = a3;
  v4 = a4;
  BufferLength = 0;
  LOBYTE(v30) = 0;
  v7 = 0LL;
  if ( a2 )
    v7 = *(_DEVICE_OBJECT **)(a2 + 3864);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xFu, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, (__int64)v7);
  *a1 = 0LL;
  v8 = DevicePropertyFriendlyName;
  DeviceProperty = IoGetDeviceProperty(v7, DevicePropertyFriendlyName, 0, 0LL, &BufferLength);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    v8 = DevicePropertyDeviceDescription;
    v21 = IoGetDeviceProperty(v7, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    appended = v21;
    if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741789 )
    {
      if ( (unsigned __int8)byte_1C00A025C < 2u )
        goto LABEL_26;
      v22 = 16;
      goto LABEL_36;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x2020444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, BufferLength);
    appended = IoGetDeviceProperty(v7, v8, BufferLength, v11, &BufferLength);
    if ( appended < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 2u )
      {
        v23 = 18;
LABEL_41:
        WPP_SF_qq(v23, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a2, v7);
      }
    }
    else
    {
      BufferLength += 16;
      v13 = (_UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x6E61444Eu);
      v14 = v13;
      if ( !v13 )
      {
        appended = -1073741670;
        if ( (unsigned __int8)byte_1C00A025C < 2u )
          goto LABEL_25;
        v23 = 19;
        goto LABEL_41;
      }
      memset(v13, 0, BufferLength);
      v14->Length = 0;
      v14->Buffer = &v14[1].Length;
      v14->MaximumLength = BufferLength - 16;
      appended = RtlAppendUnicodeToString(v14, (PCWSTR)v11);
      if ( appended >= 0 )
      {
        if ( (unsigned __int8)byte_1C00A025C >= 4u )
          WPP_SF_Z(0x14u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, &v14->Length);
        if ( !v4 )
          goto LABEL_20;
        v15 = 0;
        if ( (v14->Length & 0xFFFE) == 0 )
          goto LABEL_19;
        v16 = v30;
        do
        {
          if ( *((_WORD *)v11 + v15) == 47 )
          {
            v16 = 1;
            *((_WORD *)v11 + v15) = 45;
          }
          ++v15;
        }
        while ( v15 < (unsigned __int16)(v14->Length >> 1) );
        v17 = v16 == 0;
        v4 = v31;
        if ( v17 )
        {
LABEL_19:
          *v4 = 0LL;
          goto LABEL_20;
        }
        v24 = (_UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x6E61444Eu);
        v25 = v24;
        if ( v24 )
        {
          memset(v24, 0, BufferLength);
          v25->Buffer = &v25[1].Length;
          v25->Length = 0;
          v25->MaximumLength = BufferLength - 16;
          RtlAppendUnicodeToString(v25, (PCWSTR)v11);
          *v31 = v25;
LABEL_20:
          *a1 = v14;
          if ( a2 )
          {
            if ( IoGetDeviceProperty(v7, DevicePropertyUINumber, 4u, PropertyBuffer, &BufferLength) < 0 )
            {
              if ( (unsigned __int8)byte_1C00A025C >= 4u )
                WPP_SF_Z(0x17u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, &v14->Length);
            }
            else
            {
              if ( (unsigned __int8)byte_1C00A025C >= 4u )
              {
                LODWORD(ResultLength) = PropertyBuffer[0];
                WPP_SF_qZl(v19, v18, a2, &v14->Length, ResultLength);
              }
              *(_DWORD *)(a2 + 3752) = PropertyBuffer[0];
            }
          }
          goto LABEL_25;
        }
        ExFreePoolWithTag(v14, 0);
        appended = -1073741670;
        if ( (unsigned __int8)byte_1C00A025C >= 2u )
        {
          v23 = 21;
          goto LABEL_41;
        }
      }
    }
LABEL_25:
    ExFreePoolWithTag(v11, 0);
    goto LABEL_26;
  }
  appended = -1073741670;
  if ( (unsigned __int8)byte_1C00A025C >= 2u )
  {
    v22 = 17;
LABEL_36:
    WPP_SF_qq(v22, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, a2, v7);
  }
LABEL_26:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x18u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, (__int64)v7, appended);
  return (unsigned int)appended;
}
