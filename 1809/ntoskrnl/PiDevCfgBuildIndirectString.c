/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x1406F69F4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x14015DA4C (PnpValidateRegistryString.c)
 *     PnpDuplicateUnicodeString @ 0x14015DAB8 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     PnpRegSzToString @ 0x1406F6E14 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int16 v4; // ax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  _WORD *v11; // rcx
  unsigned __int16 Length; // bx
  wchar_t *StringRoutine; // rax
  const WCHAR *v14; // rsi
  NTSTATUS RegistryValue; // ebx
  unsigned int v16; // edx
  unsigned __int16 v17; // r15
  int v18; // esi
  __int64 v19; // rsi
  UNICODE_STRING v20; // xmm0
  HANDLE KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-41h] BYREF
  int v24; // [rsp+50h] [rbp-31h] BYREF
  char *v25; // [rsp+58h] [rbp-29h]
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = *a2;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( v4 <= 4u || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[((unsigned __int64)v4 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( a4 )
        *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_19;
    }
    goto LABEL_24;
  }
  v24 = 0;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  v25 = 0LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_DWORD *)&RemainingString.Length = 1048590;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    UnicodeString.Length = *a2 - 4;
    Length = UnicodeString.Length;
    UnicodeString.MaximumLength = UnicodeString.Length + 2;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(UnicodeString.Length + 2));
    UnicodeString.Buffer = StringRoutine;
    v14 = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_24;
    memmove(StringRoutine, (const void *)(*((_QWORD *)a2 + 1) + 2LL), Length);
    v14[(unsigned __int64)Length >> 1] = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, v14, 0, &P);
    RtlFreeAnsiString(&UnicodeString);
    if ( RegistryValue >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( PnpValidateRegistryString(P) )
      {
        PnpRegSzToString((char *)v10 + v10[2], v10[3], &P);
        LOWORD(v24) = (_WORD)P;
        HIWORD(v24) = *((_WORD *)v10 + 6);
        v25 = (char *)v10 + v10[2];
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
      }
    }
  }
  v16 = *(unsigned __int16 *)(a1 + 40) + *a2 + 4;
  if ( v25 )
    v16 += (unsigned __int16)v24 + 2;
  if ( (unsigned __int64)v16 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_19;
  }
  DestinationString.Length = v16;
  DestinationString.MaximumLength = v16 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v16 + 2));
  if ( !DestinationString.Buffer )
  {
LABEL_24:
    v9 = -1073741670;
    goto LABEL_19;
  }
  v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
  if ( v9 < 0 )
    goto LABEL_19;
  v17 = DestinationString.Length;
  v18 = DestinationString.Length >> 1;
  if ( v25 )
  {
    v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v24);
    if ( v9 < 0 )
      goto LABEL_19;
    DestinationString.Length = RemainingString.Length + v17;
    v19 = (unsigned int)(v18 + 1);
  }
  else
  {
    v19 = v18 - (*a2 >> 1);
  }
  v20 = DestinationString;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(UNICODE_STRING *)a3 = v20;
  if ( a4 )
    RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v19));
LABEL_19:
  RtlFreeAnsiString(&DestinationString);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
