/*
 * XREFs of ACPIBusIrpQueryDeviceId @ 0x1C0097DE4
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008F640 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     RtlStringCbPrintfExW @ 0x1C00050A8 (RtlStringCbPrintfExW.c)
 *     AMLIGetNSObjectType @ 0x1C0005240 (AMLIGetNSObjectType.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C004DBA8 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004E06C (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008FE90 (ACPIAllocateBuffer.c)
 *     ACPIValidateStringVendorDeviceIdFormat @ 0x1C008FF34 (ACPIValidateStringVendorDeviceIdFormat.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceId(wchar_t **a1, SIZE_T *a2, __int64 *a3)
{
  void *v6; // r13
  int v7; // esi
  wchar_t *v8; // rax
  NTSTRSAFE_PWSTR v9; // r15
  size_t v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // eax
  int v16; // eax
  const char *v18; // rax
  __int64 v19; // rdx
  const char *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  size_t v23; // rdx
  PVOID PoolWithTag; // rax
  size_t v25; // r8
  char *v26; // rdx
  SIZE_T v27; // rdx
  PVOID v28; // rax
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  PVOID v31; // rax
  int dwFlags; // [rsp+20h] [rbp-58h]
  int pszFormat; // [rsp+28h] [rbp-50h]
  int v34; // [rsp+30h] [rbp-48h]
  size_t pcbRemaining; // [rsp+60h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  size_t v38; // [rsp+C8h] [rbp+50h] BYREF
  PVOID P; // [rsp+D0h] [rbp+58h] BYREF
  void *Src; // [rsp+D8h] [rbp+60h] BYREF

  Src = 0LL;
  v6 = 0LL;
  Size = 0LL;
  v7 = 0;
  P = 0LL;
  v38 = 0LL;
  v8 = (wchar_t *)ACPIAllocateBuffer(a2, (__int64)a3, 0x294uLL);
  *a1 = v8;
  v9 = v8;
  v10 = *a2;
  v11 = 0LL;
  ppszDestEnd[0] = v8;
  pcbRemaining = v10;
  if ( !v8 )
    goto LABEL_23;
  v12 = a3[89];
  if ( v12 && (unsigned int)AMLIGetNSObjectType(v12) == 12 )
  {
    v7 = ACPIGet(a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    if ( v7 < 0 )
      goto LABEL_24;
    if ( v10 >= Size )
    {
      memmove(v9, Src, Size);
LABEL_9:
      if ( v10 < Size )
        goto LABEL_12;
      v16 = RtlStringCbPrintfExW(&v9[Size >> 1], v10 - Size, ppszDestEnd, &pcbRemaining, 0, &word_1C006FF24);
LABEL_11:
      v7 = v16;
LABEL_12:
      if ( v7 >= 0 )
      {
LABEL_13:
        if ( v6 )
          ExFreePoolWithTag(v6, 0x53706341u);
        goto LABEL_15;
      }
LABEL_24:
      v18 = byte_1C006FE7D;
      v19 = 0LL;
      v20 = byte_1C006FE7D;
      if ( a3 )
      {
        v21 = a3[1];
        v19 = (__int64)a3;
        if ( (v21 & 0x200000000000LL) != 0 )
        {
          v18 = (const char *)a3[70];
          if ( (v21 & 0x400000000000LL) != 0 )
            v20 = (const char *)a3[71];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qdLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          (__int64)&WPP_RECORDER_INITIALIZED,
          0x27u,
          dwFlags,
          pszFormat,
          v34,
          v7,
          v19,
          v18,
          v20);
      goto LABEL_13;
    }
    goto LABEL_23;
  }
  v13 = a3[119];
  v14 = -1LL;
  if ( (v13 & 8) == 0 || (v13 & 0x10) == 0 )
    goto LABEL_5;
  v22 = a3[70];
  if ( !v22 )
  {
    v16 = ACPIGet(a3, 1145653343, 268959782, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v38);
    goto LABEL_11;
  }
  v23 = -1LL;
  do
    ++v23;
  while ( *(_BYTE *)(v22 + v23) );
  v38 = v23;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x42706341u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_17;
  memset(PoolWithTag, 0, v38);
  v25 = v38;
  v26 = (char *)a3[70];
  if ( v38 >= 5 )
  {
    v25 = v38 - 5;
    v38 -= 5LL;
    v26 += 5;
  }
  memmove(P, v26, v25);
  if ( !ACPIValidateStringVendorDeviceIdFormat((__int64)P, v38) )
  {
LABEL_5:
    v15 = ACPIGet(a3, 1145653343, 268959798, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
    v7 = v15;
    if ( v15 == -1073741661 )
    {
      v30 = a3[70];
      if ( !v30 )
        goto LABEL_24;
      do
        ++v14;
      while ( *(_BYTE *)(v30 + v14) );
      Size = 2 * v14 + 2;
      v31 = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
      Src = v31;
      if ( !v31 )
        goto LABEL_23;
      memset(v31, 0, Size);
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", a3[70]);
      v7 = 0;
    }
    else if ( v15 < 0 )
    {
      goto LABEL_24;
    }
    if ( v10 >= Size )
    {
      memmove(v9, Src, Size);
      if ( !v9 )
        goto LABEL_12;
      goto LABEL_9;
    }
LABEL_23:
    v7 = -1073741670;
    goto LABEL_24;
  }
  v28 = ExAllocatePoolWithTag(PagedPool, v27, 0x42706341u);
  v6 = v28;
  if ( v28 )
  {
    LOBYTE(v11) = v38 != 7;
    v29 = v11 + 3;
    memset(v28, 0, v38);
    if ( v38 > v29 )
    {
      memmove(v6, (char *)P + v29, v38 - v29);
      *((_BYTE *)P + v29) = 0;
    }
    v34 = (int)P;
    v7 = RtlStringCbPrintfExW(v9, v10, ppszDestEnd, &pcbRemaining, 0, L"ACPI\\VEN_%S&DEV_%S&SUBSYS_%S&REV_%04X");
    if ( v7 < 0 )
      goto LABEL_24;
    if ( !ppszDestEnd[0] || pcbRemaining < 2 )
      goto LABEL_12;
    v9 = ppszDestEnd[0] + 1;
    v10 = pcbRemaining - 2;
    goto LABEL_5;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
LABEL_17:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v7;
}
