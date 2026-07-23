/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180009270
 * Callers:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 * Callees:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FE4B8 @ 0x1800FE4B8 (sub_1800FE4B8.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      ObjectAttributes.RootDirectory = a1;
    }
    else
    {
      v7 = sub_180009204(0x2000000u, v6, &Handle);
      if ( v7 < 0 )
        goto LABEL_6;
      ObjectAttributes.RootDirectory = Handle;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      v7 = sub_1800FD168(KeyHandle);
      if ( !v7 )
      {
        v9 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = 0;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
            goto LABEL_6;
          }
          v10 = sub_1800FE4B8(*a3);
        }
        else
        {
          v10 = sub_18001564C(1LL, 0LL, a2);
        }
        *a3 = v10;
        v9 = v10;
        if ( !v10 )
        {
          v7 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
