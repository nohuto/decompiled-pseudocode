/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180007950
 * Callers:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 * Callees:
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FE4B8 @ 0x1800FE4B8 (sub_1800FE4B8.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  NTSTATUS v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = KeyHandle;
    }
    v5 = sub_1800FD168(a1);
    if ( !v5 )
    {
      v8 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v8 + 4) < *(_WORD *)(v8 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(v8 + 24) + 6LL * *(unsigned __int16 *)(v8 + 4)) = 0;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
          goto LABEL_5;
        }
        v9 = sub_1800FE4B8(*a3);
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = sub_18001564C(1LL, v7, a2);
      }
      *a3 = v9;
      v8 = v9;
      if ( !v9 )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
