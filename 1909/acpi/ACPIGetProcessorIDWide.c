/*
 * XREFs of ACPIGetProcessorIDWide @ 0x1C0025508
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0005554 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0026170 (ACPIGetConvertToDeviceIDWide.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0005804 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfExA @ 0x1C0025998 (RtlStringCchPrintfExA.c)
 *     RtlStringCchCopyNA @ 0x1C00266CC (RtlStringCchCopyNA.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIGetProcessorIDWide(__int64 a1, __int64 a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  void *v6; // rdi
  size_t v7; // rbx
  char *v8; // r14
  char *v9; // r13
  size_t v11; // rdx
  PVOID v12; // rax
  __int64 i; // rcx
  char v14; // dl
  __int64 v15; // rdx
  char *PoolWithTag; // rax
  char *v17; // rsi
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  size_t v25; // r15
  char *v26; // rax
  char *v27; // rsi
  unsigned int v28; // ebx
  size_t v30; // rdx
  char *v31; // rcx
  size_t v32; // rdx
  char *v33; // rcx
  char v34[4]; // [rsp+40h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-3Ch] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-30h] BYREF
  char *v38; // [rsp+58h] [rbp-28h]
  char **v39; // [rsp+60h] [rbp-20h]
  _DWORD *v40; // [rsp+68h] [rbp-18h]
  char v41[8]; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0LL;
  v7 = (unsigned __int16)AcpiProcessorString;
  v8 = 0LL;
  ReturnLength = 0;
  v9 = 0LL;
  v38 = 0LL;
  v39 = a5;
  v11 = (unsigned __int16)AcpiProcessorString;
  v40 = a6;
  strcpy(v41, "ACPI\\");
  *(_WORD *)v34 = 42;
  pcchRemaining = (unsigned __int16)AcpiProcessorString;
  LODWORD(ppszDestEnd) = a4 & 0x40;
  if ( (a4 & 0x40) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v7);
    RtlStringCchCopyNA(v8, v7, Src, (unsigned __int16)AcpiProcessorString);
    v17 = strstr(v8, "Model");
    v38 = v17;
    v18 = strstr(v8, "Family");
    v9 = v18;
    if ( !v17 || !v18 )
    {
      v28 = -1073741823;
      goto LABEL_35;
    }
    v19 = -1LL;
    v20 = -1LL;
    do
      ++v20;
    while ( v17[v20] );
    v21 = -1LL;
    do
      ++v21;
    while ( v9[v21] );
    v22 = 6 * v7 - (unsigned int)(2 * v20) - (unsigned int)(2 * v21);
    v23 = -1LL;
    do
      ++v23;
    while ( v34[v23] );
    v24 = (unsigned int)(3 * v23) + v22;
    do
      ++v19;
    while ( v41[v19] );
    v7 = v24 + (unsigned int)(3 * v19) + 1LL;
  }
  else
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_28;
    if ( ZwQuerySystemInformation(
           SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
           0LL,
           0,
           &ReturnLength) == -1073741820 )
    {
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x53706341u);
      v6 = v12;
      if ( v12 )
      {
        if ( ZwQuerySystemInformation(
               SystemVerifierFaultsInformation|SystemProcessorPerformanceInformation,
               v12,
               ReturnLength,
               &ReturnLength) < 0 )
        {
          ExFreePoolWithTag(v6, 0x53706341u);
          v6 = 0LL;
        }
        else
        {
          for ( i = 0LL; (unsigned int)i < ReturnLength; i = (unsigned int)(i + 1) )
          {
            v14 = *((_BYTE *)v6 + i);
            if ( !v14 )
              break;
            if ( (unsigned __int8)(v14 - 32) > 0x5Fu || v14 == 44 )
              *((_BYTE *)v6 + i) = 32;
          }
        }
      }
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v41[v15] );
    v11 = v7 + (unsigned int)v15;
    pcchRemaining = v11;
    v7 = v11;
    if ( !v6 )
      goto LABEL_28;
    v7 = v11 + ReturnLength + 3;
  }
  v11 = v7;
  pcchRemaining = v7;
LABEL_28:
  v25 = 2 * v11;
  v26 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v11,
                  0x53706341u);
  v27 = v26;
  if ( v26 )
  {
    memset(v26, 0, v25);
    if ( (a4 & 0x20) != 0 )
    {
      if ( v6 )
        RtlStringCchPrintfA(v27, v7, "%s%s - %s", v41, Src, (const char *)v6);
      else
        RtlStringCchPrintfA(v27, v7, "%s%s", v41, Src);
    }
    else
    {
      if ( !(_DWORD)ppszDestEnd )
      {
LABEL_33:
        v28 = 0;
        *v39 = v27;
        if ( v40 )
          *v40 = v25;
        goto LABEL_35;
      }
      ppszDestEnd = v27;
      RtlStringCchPrintfExA(v27, v7, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
      RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v34, v8);
      v30 = pcchRemaining - 1;
      v31 = ppszDestEnd + 1;
      *(v38 - 1) = 0;
      RtlStringCchPrintfExA(v31, v30, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
      RtlStringCchPrintfExA(ppszDestEnd + 1, pcchRemaining - 1, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v34, v8);
      v32 = pcchRemaining - 1;
      v33 = ppszDestEnd + 1;
      *(v9 - 1) = 0;
      RtlStringCchPrintfExA(v33, v32, &ppszDestEnd, &pcchRemaining, 0, "%s%s", v41, v8);
      RtlStringCchPrintfA(ppszDestEnd + 1, pcchRemaining - 1, "%s%s", v34, v8);
    }
    ACPIAnsiStringToWideHelper(v27, v25);
    goto LABEL_33;
  }
  v28 = -1073741670;
LABEL_35:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x53706341u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x53706341u);
  return v28;
}
