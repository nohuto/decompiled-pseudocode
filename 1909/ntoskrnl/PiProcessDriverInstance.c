/*
 * XREFs of PiProcessDriverInstance @ 0x140735A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
 *     PiFindDevInstMatch @ 0x14073628C (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140736494 (PiRearrangeDeviceInstances.c)
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
  int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-9h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  DevInstMatch = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &KeyHandle, 1);
  if ( DevInstMatch >= 0 )
  {
    v6 = KeyHandle;
    DevInstMatch = PiFindDevInstMatch(KeyHandle, (ULONG)&ppszDestEnd);
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
      if ( --Data )
        PiRearrangeDeviceInstances(v6);
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
