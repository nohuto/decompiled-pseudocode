/*
 * XREFs of PopPlInitWString @ 0x1408B9F50
 * Callers:
 *     PopPlInitDevice @ 0x1408B9BB8 (PopPlInitDevice.c)
 *     PopPlInitPowerPlane @ 0x1408B9E44 (PopPlInitPowerPlane.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140099EFC (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCchCopyStringN @ 0x140305B50 (RtlUnicodeStringCchCopyStringN.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitWString(PUNICODE_STRING DestinationString, unsigned int a2, __int64 a3, __int64 a4)
{
  const wchar_t *v4; // rsi
  NTSTATUS v6; // ebx
  size_t v7; // rbx
  SIZE_T v8; // rdx
  wchar_t *PoolWithTag; // rax
  size_t cchToCopy; // [rsp+40h] [rbp+18h] BYREF

  v4 = (const wchar_t *)(a3 + a2);
  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = 0LL;
  v6 = RtlStringCchLengthW(v4, a4 - (_QWORD)v4, &cchToCopy);
  if ( v6 >= 0 )
  {
    v7 = cchToCopy;
    if ( cchToCopy <= 0x7FFF )
    {
      if ( cchToCopy )
      {
        v8 = 2 * cchToCopy;
        DestinationString->MaximumLength = 2 * cchToCopy;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6C506F50u);
        DestinationString->Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          v6 = RtlUnicodeStringCchCopyStringN(DestinationString, v4, v7);
          if ( v6 < 0 )
          {
            ExFreePoolWithTag(DestinationString->Buffer, 0x6C506F50u);
            *(_QWORD *)&DestinationString->Length = 0LL;
            DestinationString->Buffer = 0LL;
          }
        }
        else
        {
          DestinationString->MaximumLength = 0;
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return (unsigned int)v6;
}
