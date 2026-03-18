/*
 * XREFs of ACPIBusIrpQueryHardwareId @ 0x1C008FB24
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008F640 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RtlStringCbPrintfExW @ 0x1C00050A8 (RtlStringCbPrintfExW.c)
 *     AMLIGetNSObjectType @ 0x1C0005240 (AMLIGetNSObjectType.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004E06C (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008FE90 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C008FF34 (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryHardwareId(wchar_t **a1, size_t *a2, __int64 a3)
{
  void *v6; // r15
  int v7; // r14d
  wchar_t *v8; // rax
  size_t v9; // rbx
  NTSTRSAFE_PWSTR v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // rdx
  PVOID PoolWithTag; // rax
  size_t v16; // r8
  char *v17; // rdx
  SIZE_T v18; // rdx
  PVOID v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  NTSTATUS v22; // eax
  bool v23; // zf
  int v24; // eax
  const char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rcx
  __int64 v29; // r8
  int dwFlags; // [rsp+20h] [rbp-49h]
  int pszFormat; // [rsp+28h] [rbp-41h]
  int v32; // [rsp+30h] [rbp-39h]
  PVOID P; // [rsp+60h] [rbp-9h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h] BYREF
  size_t v35; // [rsp+70h] [rbp+7h] BYREF
  void *Src; // [rsp+78h] [rbp+Fh] BYREF
  PVOID v37; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v38[7]; // [rsp+88h] [rbp+1Fh] BYREF
  size_t pcbRemaining; // [rsp+E0h] [rbp+77h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E8h] [rbp+7Fh] BYREF

  Src = 0LL;
  P = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v35 = 0LL;
  v38[0] = 0LL;
  v7 = ACPIGet((__int64 *)a3, 1145653343, 268959830, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&v35);
  if ( v7 < 0 )
    goto LABEL_41;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, a3, v35 + 660, 0x200000000000LL);
  v9 = *a2;
  v10 = v8;
  pcbRemaining = v9;
  *a1 = v8;
  ppszDestEnd = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_41;
  }
  v11 = *(_QWORD *)(a3 + 712);
  if ( v11 && (unsigned int)AMLIGetNSObjectType(v11) == 12 )
  {
    memmove(v10, Src, v35);
LABEL_26:
    if ( v9 < v35 )
      goto LABEL_29;
    v24 = RtlStringCbPrintfExW(&v10[v35 >> 1], v9 - v35, &ppszDestEnd, &pcbRemaining, 0, &word_1C006FF24);
    goto LABEL_28;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( (v12 & 0x200000000000LL) == 0 || (v12 & 0x800000000000LL) != 0 )
    goto LABEL_24;
  v13 = *(_QWORD *)(a3 + 560);
  if ( !v13 )
  {
    v24 = ACPIGet((__int64 *)a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&Size);
LABEL_28:
    v7 = v24;
    goto LABEL_29;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(v13 + v14) );
  Size = v14;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x42706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_29;
  memset(PoolWithTag, 0, Size);
  v16 = Size;
  v17 = *(char **)(a3 + 560);
  if ( Size >= 5 )
  {
    v16 = Size - 5;
    Size -= 5LL;
    v17 += 5;
  }
  memmove(P, v17, v16);
  if ( !(unsigned __int8)ACPIValidateStringVendorDeviceIdFormat(P, Size) && (*(_BYTE *)(a3 + 952) & 0x1C) == 0 )
  {
LABEL_24:
    if ( v9 > v35 )
    {
      memmove(v10, Src, v35);
      if ( !v10 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v7 = -1073741670;
LABEL_29:
    if ( v7 >= 0 )
      goto LABEL_30;
    goto LABEL_41;
  }
  v19 = ExAllocatePoolWithTag(PagedPool, v18, 0x42706341u);
  v6 = v19;
  if ( !v19 )
    goto LABEL_29;
  v20 = (Size != 7) + 3LL;
  memset(v19, 0, Size);
  if ( Size > v20 )
  {
    memmove(v6, (char *)P + v20, Size - v20);
    *((_BYTE *)P + v20) = 0;
  }
  v21 = *(_QWORD *)(a3 + 952);
  if ( (v21 & 0x10) != 0 )
  {
    v7 = ACPIGet((__int64 *)a3, 1112888159, 268959764, 0LL, 0, 0LL, 0LL, (__int64)&v37, (__int64)v38);
    if ( v7 < 0 )
      goto LABEL_41;
    if ( (*(_BYTE *)(a3 + 952) & 8) != 0 )
    {
      v32 = (int)P;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_41;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v32 = (int)P;
    v22 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S");
  }
  else
  {
    if ( (v21 & 8) != 0 )
    {
      v32 = (int)P;
      v7 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&REV_%04X");
      if ( v7 < 0 )
        goto LABEL_41;
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v10 = ppszDestEnd + 1;
      v9 = pcbRemaining - 2;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
    }
    v32 = (int)P;
    v22 = RtlStringCbPrintfExW(v10, v9, &ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S");
  }
  v7 = v22;
  if ( v22 >= 0 )
  {
    if ( !ppszDestEnd || pcbRemaining < 2 )
      goto LABEL_29;
    v9 = pcbRemaining - 2;
    v10 = ppszDestEnd + 1;
    v23 = (*(_BYTE *)(a3 + 952) & 4) == 0;
    ++ppszDestEnd;
    pcbRemaining -= 2LL;
    if ( v23 )
      goto LABEL_24;
    v32 = (int)P;
    v7 = RtlStringCbPrintfExW(
           v10,
           v9,
           &ppszDestEnd,
           &pcbRemaining,
           0,
           L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X&PI_%02I64X");
    if ( v7 >= 0 )
    {
      if ( !ppszDestEnd || pcbRemaining < 2 )
        goto LABEL_29;
      v32 = (int)P;
      ++ppszDestEnd;
      pcbRemaining -= 2LL;
      v7 = RtlStringCbPrintfExW(
             ppszDestEnd,
             pcbRemaining,
             &ppszDestEnd,
             &pcbRemaining,
             0,
             L"ACPI\\VEN_%S&DEV_%S&CLS_%04I64X&SUBCLS_%04I64X");
      if ( v7 >= 0 )
      {
        if ( !ppszDestEnd || pcbRemaining < 2 )
          goto LABEL_29;
        v10 = ppszDestEnd + 1;
        v9 = pcbRemaining - 2;
        goto LABEL_24;
      }
    }
  }
LABEL_41:
  v26 = byte_1C006FE7D;
  v27 = 0LL;
  v28 = byte_1C006FE7D;
  if ( a3 )
  {
    v29 = *(_QWORD *)(a3 + 8);
    v27 = a3;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v26 = *(const char **)(a3 + 560);
      if ( (v29 & 0x400000000000LL) != 0 )
        v28 = *(const char **)(a3 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v27,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x28u,
      dwFlags,
      pszFormat,
      v32,
      v7,
      v27,
      v26,
      v28);
LABEL_30:
  if ( v37 )
    ExFreePoolWithTag(v37, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
