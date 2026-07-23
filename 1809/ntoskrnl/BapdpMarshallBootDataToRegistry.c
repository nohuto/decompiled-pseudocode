/*
 * XREFs of BapdpMarshallBootDataToRegistry @ 0x1401863FC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     RtlIntegerToUnicodeString @ 0x1405A9E00 (RtlIntegerToUnicodeString.c)
 */

void BapdpMarshallBootDataToRegistry()
{
  __int64 *v0; // rbx
  UNICODE_STRING *Class; // r12
  __int64 *v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r14d
  _QWORD *PoolWithTag; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  UNICODE_STRING **v12; // r15
  UNICODE_STRING v13; // xmm0
  ULONG v14; // r13d
  char *v15; // r14
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  ULONG v18; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  char v27; // [rsp+C8h] [rbp-40h] BYREF

  v0 = (__int64 *)qword_1404DC578;
  Class = 0LL;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v2 = (__int64 *)qword_1404DC578;
  v3 = 0;
  v24 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  v20 = 0LL;
  if ( qword_1404DC578 )
  {
    do
    {
      if ( v2 == &qword_1404DC578 )
        break;
      v4 = v2[2];
      v2 = (__int64 *)*v2;
      if ( (unsigned int)(*(_DWORD *)(v4 + 32) - 1) <= 1 )
      {
        v5 = *(_QWORD *)(v4 + 16) - (_QWORD)Handle;
        if ( !v5 )
          v5 = *(_QWORD *)(v4 + 24) - v24;
        if ( !v5 )
          ++v3;
      }
    }
    while ( v2 );
    if ( v3 )
    {
      v6 = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v3, 0x64506142u);
      if ( PoolWithTag )
      {
        while ( v0 != &qword_1404DC578 )
        {
          v8 = v0[2];
          v0 = (__int64 *)*v0;
          if ( (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1 )
          {
            v9 = *(_QWORD *)(v8 + 16) - (_QWORD)Handle;
            if ( !v9 )
              v9 = *(_QWORD *)(v8 + 24) - v24;
            if ( !v9 )
            {
              v10 = v6++;
              PoolWithTag[v10] = v8;
            }
          }
        }
        RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
        {
          KeyHandle = 0LL;
LABEL_40:
          if ( v20 )
            ZwClose(v20);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x64506142u);
          return;
        }
        RtlInitUnicodeString(&DestinationString, L"BootApplicationPersistentData");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&v20, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
        {
          v11 = 0;
          v12 = (UNICODE_STRING **)PoolWithTag;
          do
          {
            if ( *v12 )
            {
              v13 = **v12;
              *(_DWORD *)&GuidString.Length = 5111808;
              GuidString.Buffer = (wchar_t *)&v27;
              DestinationString = v13;
              if ( RtlStringFromGUIDEx((PGUID)&DestinationString, &GuidString, 0) >= 0 )
              {
                ObjectAttributes.RootDirectory = v20;
                ObjectAttributes.ObjectName = &GuidString;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, Class, 1u, (PULONG)&Class->Length) >= 0 )
                {
                  v14 = (unsigned int)Class;
                  if ( v11 < v3 )
                  {
                    Class = (UNICODE_STRING *)(v3 - v11);
                    v15 = (char *)&PoolWithTag[v11];
                    do
                    {
                      v16 = *(_QWORD **)v15;
                      *(_DWORD *)&String.Length = 1572864;
                      String.Buffer = (wchar_t *)&ObjectAttributes;
                      if ( v16 )
                      {
                        v17 = *v16 - *(_QWORD *)&DestinationString.Length;
                        if ( *v16 == *(_QWORD *)&DestinationString.Length )
                          v17 = v16[1] - (unsigned __int64)DestinationString.Buffer;
                        if ( !v17 )
                        {
                          v18 = v14++;
                          if ( RtlIntegerToUnicodeString(v18, 0xAu, &String) >= 0 )
                          {
                            ZwSetValueKey(
                              Handle,
                              &String,
                              0,
                              3u,
                              (PVOID)(*(_QWORD *)v15 + *(unsigned int *)(*(_QWORD *)v15 + 40LL)),
                              *(_DWORD *)(*(_QWORD *)v15 + 36LL));
                            *(_QWORD *)v15 = 0LL;
                          }
                        }
                      }
                      v15 += 8;
                      Class = (UNICODE_STRING *)((char *)Class - 1);
                    }
                    while ( Class );
                  }
                  ZwClose(Handle);
                }
              }
            }
            ++v11;
            ++v12;
          }
          while ( v11 < v3 );
        }
        else
        {
          v20 = 0LL;
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_40;
    }
  }
}
