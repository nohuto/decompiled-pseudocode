/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x1800584B4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x18000B990 (RtlFindActivationContextSectionString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(
        PUNICODE_STRING StringToFind,
        unsigned __int16 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        PUNICODE_STRING *NewName)
{
  __int64 hActCtx; // rdi
  NTSTATUS ActivationContextSectionString; // ebx
  unsigned __int16 v12; // r13
  const WCHAR *v13; // r14
  SIZE_T v14; // r12
  int v15; // eax
  unsigned __int64 v16; // rdx
  ULONG NewFlags; // [rsp+54h] [rbp-1F4h] BYREF
  NTSTATUS v19; // [rsp+58h] [rbp-1F0h]
  __int64 v20; // [rsp+60h] [rbp-1E8h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+68h] [rbp-1E0h] BYREF
  PUNICODE_STRING StaticString; // [rsp+78h] [rbp-1D0h]
  PCWCH v23; // [rsp+80h] [rbp-1C8h]
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+100h] [rbp-148h] BYREF
  int v26; // [rsp+108h] [rbp-140h]
  _BYTE v27[56]; // [rsp+110h] [rbp-138h] BYREF
  char v28; // [rsp+150h] [rbp-F8h] BYREF

  StaticString = a3;
  hActCtx = 0LL;
  v20 = 0LL;
  NewFlags = 0;
  ReturnedData.cbSize = 112;
  memset(&ReturnedData.ulDataFormatVersion, 0, 0x6CuLL);
  v25 = 72LL;
  v26 = 1;
  memset(v27, 0, sizeof(v27));
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     StringToFind,
                                     0LL,
                                     a3,
                                     a4,
                                     NewName,
                                     &NewFlags,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0LL, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion == 1 )
          {
            if ( (ReturnedData.ulFlags & 1) == 0 )
            {
              hActCtx = (__int64)ReturnedData.hActCtx;
              if ( (ReturnedData.ulFlags & 2) != 0 )
                hActCtx = -4LL;
            }
            ReturnedData.hActCtx = (HANDLE)hActCtx;
            v12 = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
            v13 = (const WCHAR *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
            LocaleName.Buffer = (wchar_t *)&v28;
            LocaleName.MaximumLength = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(a2, &LocaleName, 2u, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)LocaleName.Length >> 1;
              if ( RtlCompareUnicodeStrings(v13, (unsigned __int64)v12 >> 1, LocaleName.Buffer, v14, 1u) )
              {
                v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(hActCtx, a2, &v20);
                ActivationContextSectionString = v15;
                if ( v15 >= 0 )
                {
                  if ( v20 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v25, v20);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       StringToFind,
                                                       0LL,
                                                       StaticString,
                                                       a4,
                                                       NewName,
                                                       &NewFlags,
                                                       0LL,
                                                       0LL);
                    v19 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7u,
                                                         0LL,
                                                         2u,
                                                         StringToFind,
                                                         &ReturnedData);
                      v19 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( ReturnedData.ulDataFormatVersion == 1 )
                        {
                          v16 = *((unsigned __int16 *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                          WORD1(StaticString) = v16;
                          LOWORD(StaticString) = v16;
                          v23 = (PCWCH)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                      + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                          if ( RtlCompareUnicodeStrings(v23, v16 >> 1, LocaleName.Buffer, v14, 1u) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v19 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v25);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
