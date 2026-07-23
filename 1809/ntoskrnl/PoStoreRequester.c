/*
 * XREFs of PoStoreRequester @ 0x140002BAC
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x1400026C8 (RtlStringCbCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rbp
  char v7; // r13
  unsigned __int16 *v8; // r12
  char *v9; // rsi
  char v10; // bl
  __int64 v11; // r8
  char *v12; // rdx
  char *i; // rax
  char *v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v18; // r14
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  ULONG v21; // ecx
  __int64 v22; // rcx
  unsigned __int16 *DeviceNode; // rcx
  size_t v24; // rdx
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v4 = *a3;
  ResultLength = 0;
  v6 = 40LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v9 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( v10 )
    {
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 40);
    }
    v11 = *(unsigned __int16 *)(a1 + 16);
    v12 = *(char **)(a1 + 24);
    ResultLength = *(unsigned __int16 *)(a1 + 16);
    if ( a4 )
    {
      for ( i = &v12[2 * ((unsigned __int64)(unsigned int)v11 >> 1)]; i != v12 && *(_WORD *)i != 92; i -= 2 )
        ;
      if ( i != v12 )
      {
        v14 = i + 2;
        v11 = (unsigned int)((_DWORD)v12 - (_DWORD)v14 + v11);
        v12 = v14;
        ResultLength = v11;
      }
    }
    v15 = (unsigned int)v11;
    v6 = v11 + 42;
    if ( v10 && v4 >= v6 )
    {
      v10 = 1;
      memmove(v9, v12, (unsigned int)v11);
      *(_WORD *)&v9[2 * (v15 >> 1)] = 0;
      *(_QWORD *)(a2 + 16) = &v9[-a2];
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 8);
    if ( v16 )
    {
      DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v16, 1732538192LL);
      v18 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        if ( DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
        {
          if ( v10 )
          {
            DeviceProperty = IoGetDeviceProperty(
                               DeviceAttachmentBaseRefWithTag,
                               DevicePropertyDeviceDescription,
                               v4 - 40,
                               v9,
                               &ResultLength);
          }
          else
          {
            DeviceProperty = IoGetDeviceProperty(
                               DeviceAttachmentBaseRefWithTag,
                               DevicePropertyDeviceDescription,
                               0,
                               0LL,
                               &ResultLength);
            if ( DeviceProperty == -1073741789 )
              DeviceProperty = 0;
          }
        }
        else
        {
          DeviceProperty = -1073741808;
        }
        if ( DeviceProperty < 0 )
        {
          p_DriverName = &v18->DriverObject->DriverName;
          v21 = p_DriverName->Length + 2;
          ResultLength = v21;
          if ( v10 && v4 >= (unsigned __int64)v21 + 40 )
          {
            v10 = 1;
            RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v21, p_DriverName);
          }
          else
          {
            v10 = 0;
          }
        }
        v22 = ResultLength;
        v6 = ResultLength + 40LL;
        if ( v10 )
        {
          v7 = 1;
          *(_QWORD *)(a2 + 16) = &v9[-a2];
          v9 += v22;
        }
        DeviceNode = (unsigned __int16 *)v18->DeviceObjectExtension->DeviceNode;
        if ( DeviceNode )
        {
          v8 = DeviceNode + 20;
          v24 = (unsigned int)DeviceNode[20] + 2;
          v6 += v24;
          ResultLength = DeviceNode[20] + 2;
          if ( v10 && v4 >= v6 )
          {
            v10 = 1;
            RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v24, (PCUNICODE_STRING)(DeviceNode + 20));
            *(_QWORD *)(a2 + 24) = &v9[-a2];
          }
          else
          {
            v10 = 0;
          }
        }
        ObfDereferenceObjectWithTag(v18, 0x67446F50u);
      }
    }
  }
  *v27 = v6;
  if ( !v10 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v7 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v8 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
