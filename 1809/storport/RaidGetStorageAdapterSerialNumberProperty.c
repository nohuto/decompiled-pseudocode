/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1C00704AC
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A084 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RtlStringCchLengthA @ 0x1C0026290 (RtlStringCchLengthA.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RtlStringCchCopyW @ 0x1C003B798 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1C003B7E0 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCopyString @ 0x1C003B894 (RtlUnicodeStringCopyString.c)
 */

NTSTATUS __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, wchar_t *a2, unsigned __int64 *a3)
{
  NTSTATUS result; // eax
  unsigned __int64 v7; // rax
  wchar_t *v8; // r14
  const wchar_t *v9; // r8
  size_t v10; // rdx
  size_t v11; // rsi
  wchar_t *PoolWithTag; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[68]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset(v16, 0, 0x10CuLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    result = -1073741789;
LABEL_24:
    *a3 = 264LL;
    return result;
  }
  *(_DWORD *)a2 = 264;
  *((_DWORD *)a2 + 1) = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  *a3 = 0LL;
  v8 = a2 + 4;
  memset(a2 + 4, 0, 0x100uLL);
  v9 = *(const wchar_t **)(a1 + 5272);
  if ( v9 )
  {
    result = RtlStringCchCopyW(a2 + 4, 0x80uLL, v9);
    if ( result < 0 )
      return result;
    goto LABEL_24;
  }
  v16[0] = 1;
  v16[1] = 268;
  result = RaCallMiniportAdapterControl(a1 + 312);
  if ( result >= 0 )
  {
    result = LOBYTE(v16[2]) == 1
           ? RtlStringCchLengthW((STRSAFE_PCNZWCH)((char *)&v16[2] + 1), 0x7FFFFFFFuLL, &pcchLength)
           : RtlStringCchLengthA((STRSAFE_PCNZCH)&v16[2] + 1, v10, &pcchLength);
    if ( result >= 0 )
    {
      v11 = pcchLength;
      if ( pcchLength - 1 > 0x7E )
        return -1073739509;
      DestinationString.Buffer = pszSrc;
      DestinationString.MaximumLength = 256;
      if ( LOBYTE(v16[2]) == 1 )
      {
        result = RtlUnicodeStringCopyString(&DestinationString, (NTSTRSAFE_PCWSTR)((char *)&v16[2] + 1));
      }
      else
      {
        RtlInitAnsiString(&SourceString, (PCSZ)&v16[2] + 1);
        result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
      }
      if ( result >= 0 )
      {
        result = RtlStringCchCopyW(v8, 0x80uLL, pszSrc);
        if ( result >= 0 )
        {
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v11 + 2, 0x54456152u);
          *(_QWORD *)(a1 + 5272) = PoolWithTag;
          if ( PoolWithTag )
            RtlStringCchCopyW(PoolWithTag, v11 + 1, pszSrc);
          result = 0;
          goto LABEL_24;
        }
      }
    }
  }
  return result;
}
