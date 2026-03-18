/*
 * XREFs of ExpHwidProcessInterface @ 0x140626354
 * Callers:
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_140626208 @ 0x140626208 (sub_140626208.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1406269F4 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x140626BA0 (ExpHwidGetDeviceProperties.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x140626CE4 (ExpHwidGetDevicePropertyDataFixed.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     sub_140918A0C @ 0x140918A0C (sub_140918A0C.c)
 */

__int64 __fastcall ExpHwidProcessInterface(
        int a1,
        char a2,
        int (__fastcall *a3)(__int64, UNICODE_STRING *, __int64),
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  struct _DEVICE_OBJECT *v6; // rbx
  unsigned int v7; // r13d
  int DeviceInterfaces; // eax
  WCHAR *v9; // rsi
  unsigned int v10; // r14d
  const WCHAR *v11; // r15
  unsigned __int16 Length; // di
  unsigned __int16 v13; // cx
  int v15; // eax
  char v16[8]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PCWSTR SourceString[2]; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v6 = 0LL;
  SourceString[0] = 0LL;
  Object = 0LL;
  v7 = 0;
  DeviceInterfaces = IopGetDeviceInterfaces(a1, 0, a2 != 0, 0, (__int64)SourceString, 0LL);
  v9 = (WCHAR *)SourceString[0];
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
LABEL_13:
    v10 = 0;
  }
  else
  {
    v11 = SourceString[0];
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = 0LL;
    if ( *SourceString[0] )
    {
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, v11);
        v16[0] = -1;
        if ( a2 )
        {
          if ( (int)ExpHwidGetDevicePropertyDataFixed(
                      0LL,
                      &DestinationString,
                      &DEVPKEY_DeviceInterface_Enabled,
                      17LL,
                      1,
                      v16) < 0 )
            goto LABEL_29;
          if ( v16[0] != -1 )
            break;
        }
        Length = DestinationString.Length;
        String1 = DestinationString;
        if ( DestinationString.Length >= 0xAu )
        {
          String1.Length = 8;
          v13 = 8;
          do
          {
            if ( String1.Buffer[(unsigned __int64)v13 >> 1] == 92 )
              break;
            v13 += 2;
            String1.Length = v13;
          }
          while ( v13 < DestinationString.Length );
        }
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          goto LABEL_9;
        v15 = sub_140626208(&String1, a4, &Object);
        v6 = (struct _DEVICE_OBJECT *)Object;
        if ( v15 < 0 )
          goto LABEL_9;
        if ( Object )
        {
          if ( (int)ExpHwidGetDeviceProperties((PDEVICE_OBJECT)Object, a5) < 0
            || (int)ExpHwidAuthenticateHardwareId(v6) < 0 )
          {
            goto LABEL_9;
          }
          ObfDereferenceObject(v6);
          v6 = 0LL;
          Object = 0LL;
          if ( a3(a6, &String1, a5) >= 0 )
            String2 = String1;
        }
LABEL_11:
        v11 += ((unsigned __int64)Length >> 1) + 1;
        if ( !*v11 )
        {
          v9 = (WCHAR *)SourceString[0];
          goto LABEL_13;
        }
      }
      if ( (int)sub_140918A0C(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
        ++v7;
LABEL_29:
      Length = DestinationString.Length;
LABEL_9:
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        v6 = 0LL;
        Object = 0LL;
      }
      goto LABEL_11;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
