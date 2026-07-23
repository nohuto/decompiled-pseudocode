/*
 * XREFs of BapdpMarshallBootDataToRegistry @ 0x14018C8E0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A09E1C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
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
  GUID **v12; // r15
  GUID v13; // xmm0
  ULONG v14; // r13d
  char *v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rax
  ULONG v18; // ecx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES v23; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h]
  GUID Guid; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF

  v0 = (__int64 *)qword_140508848;
  Class = 0LL;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v2 = (__int64 *)qword_140508848;
  v3 = 0;
  v25 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  if ( qword_140508848 )
  {
    do
    {
      if ( v2 == &qword_140508848 )
        break;
      v4 = v2[2];
      v2 = (__int64 *)*v2;
      if ( (unsigned int)(*(_DWORD *)(v4 + 32) - 1) <= 1 )
      {
        v5 = *(_QWORD *)(v4 + 16) - (_QWORD)Handle;
        if ( !v5 )
          v5 = *(_QWORD *)(v4 + 24) - v25;
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
        while ( v0 != &qword_140508848 )
        {
          v8 = v0[2];
          v0 = (__int64 *)*v0;
          if ( (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1 )
          {
            v9 = *(_QWORD *)(v8 + 16) - (_QWORD)Handle;
            if ( !v9 )
              v9 = *(_QWORD *)(v8 + 24) - v25;
            if ( !v9 )
            {
              v10 = v6++;
              PoolWithTag[v10] = v8;
            }
          }
        }
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
        {
          KeyHandle = 0LL;
LABEL_40:
          if ( v21 )
            ZwClose(v21);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x64506142u);
          return;
        }
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        RtlInitUnicodeString(&DestinationString, L"BootApplicationPersistentData");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&v21, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
        {
          v11 = 0;
          v12 = (GUID **)PoolWithTag;
          do
          {
            if ( *v12 )
            {
              v13 = **v12;
              *(_QWORD *)&GuidString.Length = 5111808LL;
              Guid = v13;
              memset(&v23, 0, sizeof(v23));
              GuidString.Buffer = (wchar_t *)&ObjectAttributes;
              if ( RtlStringFromGUIDEx(&Guid, &GuidString, 0) >= 0 )
              {
                v23.RootDirectory = v21;
                v23.ObjectName = &GuidString;
                v23.Length = 48;
                v23.Attributes = 576;
                *(_OWORD *)&v23.SecurityDescriptor = 0LL;
                if ( ZwCreateKey(&Handle, 0x6001Fu, &v23, 0, Class, 1u, (PULONG)&Class->Length) >= 0 )
                {
                  v14 = (unsigned int)Class;
                  if ( v11 < v3 )
                  {
                    Class = (UNICODE_STRING *)(v3 - v11);
                    v15 = (char *)&PoolWithTag[v11];
                    do
                    {
                      v16 = *(_QWORD **)v15;
                      *(_QWORD *)&DestinationString.Length = 1572864LL;
                      DestinationString.Buffer = (wchar_t *)&ObjectAttributes;
                      if ( v16 )
                      {
                        v17 = *v16 - *(_QWORD *)&Guid.Data1;
                        if ( *v16 == *(_QWORD *)&Guid.Data1 )
                          v17 = v16[1] - *(_QWORD *)Guid.Data4;
                        if ( !v17 )
                        {
                          v18 = v14++;
                          if ( RtlIntegerToUnicodeString(v18, 0xAu, &DestinationString) >= 0 )
                          {
                            ZwSetValueKey(
                              Handle,
                              &DestinationString,
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
          v21 = 0LL;
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_40;
    }
  }
}
