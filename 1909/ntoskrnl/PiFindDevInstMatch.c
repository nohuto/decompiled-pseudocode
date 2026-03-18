/*
 * XREFs of PiFindDevInstMatch @ 0x14073628C
 * Callers:
 *     PiProcessDriverInstance @ 0x140735A90 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406FEAD8 (PnpRegSzToString.c)
 */

NTSTATUS __fastcall PiFindDevInstMatch(
        HANDLE KeyHandle,
        const UNICODE_STRING *a2,
        unsigned int *a3,
        __int64 a4,
        _DWORD *ResultLength)
{
  _DWORD *v5; // r13
  int v6; // edi
  ULONG v9; // r12d
  unsigned int v10; // r14d
  NTSTATUS result; // eax
  PVOID v12; // rcx
  unsigned int *PoolWithTag; // rbx
  PVOID v14; // rsi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  unsigned int v17; // edx
  wchar_t *v18; // rax
  UNICODE_STRING v19; // xmm0
  unsigned int *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-18h] BYREF
  PVOID P; // [rsp+C0h] [rbp+58h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C8h] [rbp+60h] BYREF

  v5 = ResultLength;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *v5 = -1;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v9 = 256;
  *(_QWORD *)&String1.Length = 0LL;
  v10 = 0;
  String1.Buffer = 0LL;
  *a3 = 0;
  P = 0LL;
  result = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
  if ( result < 0 )
  {
    if ( result != -1073741772 )
      return result;
    return 0;
  }
  v12 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v12, 0);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
  if ( !PoolWithTag )
    return -1073741670;
  v14 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v14 )
  {
    v20 = PoolWithTag;
    goto LABEL_22;
  }
  if ( !v10 )
  {
LABEL_15:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( !*(_WORD *)a4 )
      ExFreePoolWithTag(v14, 0);
    return 0;
  }
  while ( 1 )
  {
    LODWORD(v21) = v6;
    ppszDestEnd = (NTSTRSAFE_PWSTR)v14;
    RtlStringCchPrintfExW((NTSTRSAFE_PWSTR)v14, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v21);
    ValueName.MaximumLength = 20;
    v15 = ((char *)ppszDestEnd - (_BYTE *)v14) >> 1;
    ValueName.Length = (_DWORD)v15 == -1 ? 20 : 2 * v15;
    ValueName.Buffer = (wchar_t *)v14;
    v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, PoolWithTag, v9, (PULONG)&ResultLength);
    if ( v16 < 0 )
      break;
    if ( PoolWithTag[1] == 1 )
    {
      v17 = PoolWithTag[3];
      if ( v17 > 2 )
      {
        PnpRegSzToString((unsigned int *)((char *)PoolWithTag + PoolWithTag[2]), v17, (int *)&P);
        String1.MaximumLength = *((_WORD *)PoolWithTag + 6);
        v18 = (wchar_t *)((char *)PoolWithTag + PoolWithTag[2]);
        String1.Length = (unsigned __int16)P;
        String1.Buffer = v18;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v19 = ValueName;
          *v5 = v6;
          *(UNICODE_STRING *)a4 = v19;
          goto LABEL_15;
        }
      }
    }
LABEL_14:
    if ( ++v6 >= v10 )
      goto LABEL_15;
  }
  if ( v16 != -2147483643 && v16 != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag(PoolWithTag, 0);
  v9 = (unsigned int)ResultLength;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)ResultLength, 0x20207050u);
  if ( PoolWithTag )
  {
    --v6;
    goto LABEL_14;
  }
  v20 = (unsigned int *)v14;
LABEL_22:
  ExFreePoolWithTag(v20, 0);
  return -1073741670;
}
