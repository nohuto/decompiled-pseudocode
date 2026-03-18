/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C007470C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C0079B30 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        int *a5)
{
  int result; // eax
  __int64 v10; // rdx
  bool v11; // di
  int v12; // ecx
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v14; // rax
  WORD NumberOfSections; // cx
  WORD v16; // ax
  void *v17; // rsi
  char *v18; // rsi
  char v19; // [rsp+40h] [rbp-58h] BYREF
  char v20[3]; // [rsp+41h] [rbp-57h] BYREF
  WORD v21; // [rsp+44h] [rbp-54h]
  WORD v22; // [rsp+48h] [rbp-50h]
  PVOID TokenInformation; // [rsp+4Ch] [rbp-4Ch] BYREF
  void *Source1; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h] BYREF
  char v26[8]; // [rsp+68h] [rbp-30h] BYREF
  char v27[16]; // [rsp+70h] [rbp-28h] BYREF

  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(a2, v10, (char *)&TokenInformation + 4, v27, v26);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, 0LL, &v19);
        if ( v19 )
        {
          result = RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v25, 0LL);
          if ( result < 0 )
            return result;
          v11 = (v25 & 0x200) != 0;
        }
        else
        {
          v11 = 0;
        }
        PsQueryProcessAttributesByToken(a2, v20, 0LL);
        v12 = (unsigned __int8)v20[0];
        *a5 = (unsigned __int8)v20[0];
        if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
        {
          ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
          v14 = RtlImageNtHeader(ProcessSectionBaseAddress);
          if ( v14 )
          {
            Source1 = (char *)&v14->OptionalHeader + v14->FileHeader.SizeOfOptionalHeader;
            NumberOfSections = v14->FileHeader.NumberOfSections;
            v22 = NumberOfSections;
            v16 = 0;
            LOBYTE(v17) = (_BYTE)Source1;
            while ( 1 )
            {
              v21 = v16;
              if ( v16 >= NumberOfSections )
              {
                v12 = *a5;
                goto LABEL_9;
              }
              if ( ((unsigned __int8)v17 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v18 = (char *)Source1;
              if ( RtlCompareMemory(Source1, ".imrsiv", 8uLL) == 8 )
                break;
              v17 = v18 + 40;
              Source1 = v17;
              v16 = v21 + 1;
              NumberOfSections = v22;
            }
            if ( *(_DWORD *)a4 )
            {
              *a5 = 1;
              *(_DWORD *)a3 = 1;
              return 0;
            }
            else if ( (unsigned int)TokenInformation < 0x2000 )
            {
              return -1073741823;
            }
            else
            {
              *(_DWORD *)a3 = 2;
              return 0;
            }
          }
          else
          {
            return -1073741823;
          }
        }
        else
        {
LABEL_9:
          if ( v12 )
          {
            if ( !*(_DWORD *)a4 || HIDWORD(TokenInformation) == 196608 || v11 )
              *a5 = 0;
            else
              *(_DWORD *)a3 = 1;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
