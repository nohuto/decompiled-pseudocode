/*
 * XREFs of HUBID_BuildContainerID @ 0x1C001B504
 * Callers:
 *     HUBPDO_AssignPDOIds @ 0x1C00761BC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000B2B8 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1C001A5C8 (RtlUnicodeStringCbCatStringN.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBID_BuildContainerID(__int64 a1, __int64 a2)
{
  NTSTATUS Property; // ebx
  UCHAR *v5; // r14
  int v6; // eax
  UCHAR *v7; // rsi
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned __int16 v10; // ax
  __int64 v11; // r9
  unsigned __int16 v12; // cx
  char v13; // al
  NTSTATUS v14; // eax
  const wchar_t *v15; // rdx
  size_t v16; // r8
  UCHAR *PoolWithTag; // rax
  UCHAR *v18; // rax
  __int64 dwFlags; // [rsp+28h] [rbp-41h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-29h] BYREF
  ULONG pcbResult; // [rsp+44h] [rbp-25h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-21h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v26[8]; // [rsp+78h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  Property = 0;
  GuidString.Buffer = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 1632);
  v7 = 0LL;
  phHash = 0LL;
  *(_DWORD *)pbOutput = 0;
  pcbResult = 0;
  phAlgorithm = 0LL;
  if ( (v6 & 0x20) != 0 )
    goto LABEL_42;
  LOBYTE(v8) = v6;
  if ( (v6 & 0x10) != 0 || (v6 & 8) != 0 || (v6 & 0x40) == 0 )
    goto LABEL_33;
  v9 = *(_DWORD *)(a1 + 2148) + 28;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v9, 0x64334855u);
  if ( DestinationString.Buffer )
  {
    v10 = *(_WORD *)(a1 + 1990);
    v11 = *(unsigned __int16 *)(a1 + 1998);
    DestinationString.MaximumLength = v9;
    DestinationString.Length = 0;
    if ( v10 > 0x200u )
    {
      v14 = RtlUnicodeStringPrintf(&DestinationString, L"%.4X%.4X.%4X", *(unsigned __int16 *)(a1 + 1996), v11, v10);
    }
    else
    {
      v12 = *(_WORD *)(a1 + 2000);
      v26[4] = 0;
      v26[0] = (v12 >> 12) + 48;
      v26[1] = (HIBYTE(v12) & 0xF) + 48;
      v13 = *(_BYTE *)(a1 + 2000) & 0xF;
      v26[2] = ((unsigned __int8)v12 >> 4) + 48;
      v26[3] = v13 + 48;
      v14 = RtlUnicodeStringPrintf(&DestinationString, L"%.4X%.4X%S", *(unsigned __int16 *)(a1 + 1996), v11, v26);
    }
    Property = v14;
    if ( v14 < 0 )
      goto LABEL_36;
    v15 = *(const wchar_t **)(a1 + 2152);
    if ( v15 )
    {
      if ( (*(_DWORD *)(a1 + 1636) & 0x800) != 0 )
        v15 += 6;
      v16 = *(unsigned int *)(a1 + 2148) - 14LL;
      if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
        v16 = *(unsigned int *)(a1 + 2148);
      Property = RtlUnicodeStringCbCatStringN(&DestinationString, v15, v16);
      if ( Property < 0 )
        goto LABEL_36;
    }
    Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
    if ( Property < 0 )
    {
      phAlgorithm = 0LL;
      goto LABEL_36;
    }
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
    if ( Property < 0 )
      goto LABEL_36;
    if ( pcbResult != 4 )
    {
      Property = -1073741306;
      goto LABEL_36;
    }
    PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)pbOutput, 0x64334855u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      Property = BCryptCreateHash(phAlgorithm, &phHash, PoolWithTag, *(ULONG *)pbOutput, 0LL, 0, 0);
      if ( Property < 0 )
        goto LABEL_36;
      Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
      if ( Property < 0 )
        goto LABEL_36;
      Property = BCryptHashData(phHash, (PUCHAR)DestinationString.Buffer, DestinationString.Length, 0);
      if ( Property < 0 )
        goto LABEL_36;
      Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", pbOutput, 4u, &pcbResult, 0);
      if ( Property < 0 )
        goto LABEL_36;
      if ( pcbResult != 4 || *(_DWORD *)pbOutput < 0x10u )
      {
        Property = -1073741811;
        goto LABEL_36;
      }
      v18 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)pbOutput, 0x64334855u);
      v7 = v18;
      if ( v18 )
      {
        Property = BCryptFinishHash(phHash, v18, *(ULONG *)pbOutput, 0);
        if ( Property < 0 )
          goto LABEL_36;
        *(_OWORD *)(a1 + 2064) = *(_OWORD *)v7;
        *(_WORD *)(a1 + 2070) = *(_WORD *)(a1 + 2070) & 0xFFF | 0x5000;
        *(_BYTE *)(a1 + 2072) = *(_BYTE *)(a1 + 2072) & 0x3F | 0x80;
        _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 8u);
        v8 = *(_DWORD *)(a1 + 1632);
LABEL_33:
        if ( (v8 & 0x18) != 0 )
        {
          Property = RtlStringFromGUID((const GUID *const)(a1 + 2064), &GuidString);
          if ( Property >= 0 )
            Property = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 3128))(
                         WdfDriverGlobals,
                         a2,
                         &GuidString);
        }
        goto LABEL_36;
      }
    }
  }
  Property = -1073741670;
LABEL_36:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
LABEL_42:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x64334855u);
  if ( GuidString.Buffer )
    RtlFreeUnicodeString(&GuidString);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( Property < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(dwFlags) = Property;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0xCu,
      (__int64)&WPP_55e5ae68dce134eda0e0394b0184ed4a_Traceguids,
      dwFlags);
  }
}
