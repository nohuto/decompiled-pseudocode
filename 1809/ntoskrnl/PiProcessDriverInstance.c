/*
 * XREFs of PiProcessDriverInstance @ 0x14070A040
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiRearrangeDeviceInstances @ 0x1407073B0 (PiRearrangeDeviceInstances.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     PiFindDevInstMatch @ 0x14070AA2C (PiFindDevInstMatch.c)
 */

__int64 __fastcall PiProcessDriverInstance(unsigned __int16 *a1, __int64 a2, char *a3)
{
  int DevInstMatch; // ebx
  HANDLE v6; // rdi
  wchar_t *Buffer; // rax
  char v8; // cl
  void *v9; // r15
  _WORD *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  _WORD *PoolWithTag; // rax
  signed __int64 v14; // rax
  bool v16; // zf
  int v17; // edx
  int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-9h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  DevInstMatch = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &KeyHandle, 1);
  if ( DevInstMatch >= 0 )
  {
    v6 = KeyHandle;
    DevInstMatch = PiFindDevInstMatch((int)KeyHandle, (int)a1, (int)&Data, (int)&UnicodeString, (ULONG)&ppszDestEnd);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v6);
      return (unsigned int)DevInstMatch;
    }
    Buffer = UnicodeString.Buffer;
    v8 = *a3;
    if ( UnicodeString.Buffer )
    {
      if ( v8 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeAnsiString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v6, &UnicodeString);
      v16 = Data == 1;
      v17 = --Data;
      if ( !v16 )
        PiRearrangeDeviceInstances(v6, v17, (int)ppszDestEnd);
    }
    else
    {
      if ( !v8 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v9 = (void *)*((_QWORD *)a1 + 1);
      v10 = 0LL;
      v11 = *a1;
      v12 = v11 >> 1;
      if ( *((_WORD *)v9 + (v11 >> 1) - 1) )
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(LODWORD(UnicodeString.Buffer) + 1), v11 + 2, 0x20207050u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v9, (unsigned int)v11);
          LODWORD(v11) = v11 + 2;
          v10[v12] = 0;
          v9 = v10;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v14 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v14 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v14;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v6, &ValueName, 0, 1u, v9, v11);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  return (unsigned int)DevInstMatch;
}
