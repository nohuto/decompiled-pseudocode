/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1406BC640
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x1402E95A0 (PspReadDfssConfigurationValues.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspReadOptionsMapFromIFEO @ 0x14064F944 (PspReadOptionsMapFromIFEO.c)
 *     SepIsImageInMinTcbList @ 0x1406B56A8 (SepIsImageInMinTcbList.c)
 *     PspDetectComplusILImage @ 0x1406BC1FC (PspDetectComplusILImage.c)
 *     PspReadIFEOPerfOptions @ 0x1406BC450 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140734ED4 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  _BYTE *v11; // rdi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  SIZE_T i; // rdx
  PVOID PoolWithQuotaTag; // rax
  void *v16; // r12
  NTSTATUS v17; // eax
  int v18; // ecx
  size_t v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  ULONG *v22; // [rsp+48h] [rbp-28h]
  _BYTE KeyValueInformation[24]; // [rsp+50h] [rbp-20h] BYREF

  v22 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 < 8 )
  {
    v11 = KeyValueInformation;
    result = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    v12 = result;
    if ( result < 0 )
    {
      if ( result != -2147483643 )
        return result;
      Length = ResultLength;
      goto LABEL_7;
    }
    v16 = 0LL;
LABEL_15:
    if ( !a3 )
    {
      if ( *((_DWORD *)v11 + 2) > a5 )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_37;
      }
      a3 = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v18 = *((_DWORD *)v11 + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v11 + 3);
              goto LABEL_26;
            }
LABEL_37:
            v12 = -2147483643;
            goto LABEL_26;
          }
          goto LABEL_36;
        }
        goto LABEL_55;
      }
      if ( v18 == 11 )
      {
        if ( a3 == 11 )
        {
          if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
          {
            ResultLength = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v11 + 12);
LABEL_26:
              if ( v22 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
                *v22 = ResultLength;
              goto LABEL_11;
            }
            goto LABEL_37;
          }
          goto LABEL_36;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_11;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_26;
      }
      if ( a3 == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              DestinationString.Buffer = (wchar_t *)(v11 + 12);
              DestinationString.Length = *((_WORD *)v11 + 4);
              DestinationString.MaximumLength = *((_WORD *)v11 + 4);
              v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
              goto LABEL_26;
            }
            goto LABEL_37;
          }
          v12 = -2147483646;
LABEL_11:
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          return v12;
        }
LABEL_36:
        v12 = -1073741820;
        goto LABEL_11;
      }
      v19 = *((unsigned int *)v11 + 2);
      ResultLength = *((_DWORD *)v11 + 2);
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_55;
      ResultLength = *((_DWORD *)v11 + 2);
      if ( !a4 )
        goto LABEL_37;
      v19 = *((unsigned int *)v11 + 2);
    }
    if ( (unsigned int)v19 <= v10 )
    {
      memmove(a4, v11 + 12, v19);
      goto LABEL_26;
    }
    goto LABEL_37;
  }
  Length = a5 + 12;
LABEL_7:
  for ( i = Length; ; i = ResultLength )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, i, 0x6B497452u);
    v16 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      break;
    v11 = PoolWithQuotaTag;
    v17 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            PoolWithQuotaTag,
            Length,
            &ResultLength);
    v12 = v17;
    if ( v17 >= 0 )
      goto LABEL_15;
    if ( v17 != -2147483643 )
      goto LABEL_11;
    ExFreePoolWithTag(v16, 0);
    Length = ResultLength;
  }
  return -1073741801;
}
