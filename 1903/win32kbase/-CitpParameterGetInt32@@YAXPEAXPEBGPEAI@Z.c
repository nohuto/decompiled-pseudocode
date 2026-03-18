/*
 * XREFs of ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C008582C
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00850BC (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0085634 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall CitpParameterGetInt32(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned int *a3)
{
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  unsigned int v9; // [rsp+54h] [rbp-14h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  ResultLength = 16;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
    && v8 == 4 )
  {
    *a3 = v9;
  }
}
