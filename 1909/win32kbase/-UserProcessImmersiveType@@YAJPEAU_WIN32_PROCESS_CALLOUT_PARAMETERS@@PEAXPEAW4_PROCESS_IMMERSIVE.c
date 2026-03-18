/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00803C4
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C0080694 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        int *a5)
{
  bool v8; // r12
  bool v9; // di
  int result; // eax
  __int64 v11; // rdx
  int v12; // ecx
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v14; // rax
  WORD NumberOfSections; // cx
  WORD v16; // ax
  void *v17; // rsi
  char *v18; // rsi
  char v19; // [rsp+40h] [rbp-68h] BYREF
  char v20[3]; // [rsp+41h] [rbp-67h] BYREF
  WORD v21; // [rsp+44h] [rbp-64h]
  WORD v22; // [rsp+48h] [rbp-60h]
  PVOID TokenInformation; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  void *Source1; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp-40h] BYREF
  char v27[16]; // [rsp+70h] [rbp-38h] BYREF

  v24 = 0LL;
  v8 = 0;
  v9 = 0;
  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      v26 = 0LL;
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(a2, v11, (char *)&TokenInformation + 4, &v26, v27);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, 0LL, &v19);
        if ( v19 )
        {
          result = RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v24, 0LL);
          if ( result < 0 )
            return result;
          v9 = (v24 & 0x800) != 0;
          v8 = (v24 & 0x200) != 0;
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
                goto LABEL_8;
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
            result = 0;
            if ( *(_DWORD *)a4 )
            {
              *a5 = 1;
              *(_DWORD *)a3 = 1;
            }
            else if ( (unsigned int)TokenInformation < 0x2000 )
            {
              return -1073741823;
            }
            else
            {
              *(_DWORD *)a3 = 2;
            }
          }
          else
          {
            return -1073741823;
          }
        }
        else
        {
LABEL_8:
          if ( v12 )
          {
            if ( !v9 && !*(_DWORD *)a4 || HIDWORD(TokenInformation) == 196608 || v8 )
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
