/*
 * XREFs of _CmGetDeviceInterfaceSubkeyPath @ 0x1405C75E8
 * Callers:
 *     _CmGetDeviceInterfaceClassGuidString @ 0x14059BE1C (_CmGetDeviceInterfaceClassGuidString.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140015A04 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C7810 (_CmValidateDeviceInterfaceName.c)
 */

signed int __fastcall CmGetDeviceInterfaceSubkeyPath(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        wchar_t *a4,
        wchar_t *pszDest,
        unsigned int cchDest)
{
  char v7; // r12
  signed int result; // eax
  wchar_t *v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned int v16; // r14d
  size_t pcchRemaining; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  v7 = a3;
  result = CmValidateDeviceInterfaceName(a1, a2, a3);
  if ( result >= 0 )
  {
    v10 = wcschr(a2 + 4, 0x5Cu);
    v11 = -1LL;
    if ( v10 )
    {
      v12 = v10 + 1;
      v13 = v10 - a2;
    }
    else
    {
      v12 = 0LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
    }
    v14 = -1;
    if ( v13 <= 0xFFFFFFFF )
      v14 = v13;
    result = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 <= 0xFFFFFFFF )
    {
      if ( v14 < 0x30 )
      {
        return -1073741773;
      }
      else
      {
        v15 = v14 + 1;
        if ( v7 )
        {
          v15 += 2LL;
          if ( v12 )
          {
            do
              ++v11;
            while ( v12[v11] );
            v15 += v11;
          }
        }
        v16 = -1;
        if ( v15 <= 0xFFFFFFFF )
          v16 = v15;
        result = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v15 <= 0xFFFFFFFF )
        {
          if ( !a4
            || (result = RtlStringCchCopyNExW(a4, 0x27uLL, &a2[v14 - 38], 0x26uLL, 0LL, 0LL, 0x800u), result >= 0)
            && (result = RtlInitUnicodeStringEx(&DestinationString, a4), result >= 0)
            && (result = RtlGUIDFromString(&DestinationString, &Guid), result >= 0) )
          {
            if ( v16 > cchDest )
            {
              return -1073741789;
            }
            else
            {
              result = RtlStringCchCopyNExW(
                         pszDest,
                         cchDest,
                         a2,
                         v14,
                         (NTSTRSAFE_PWSTR *)&DestinationString,
                         &pcchRemaining,
                         0x800u);
              if ( result >= 0 )
              {
                *(_QWORD *)pszDest = 0x23003F00230023LL;
                if ( v7 )
                {
                  result = RtlStringCchCopyExW(
                             *(NTSTRSAFE_PWSTR *)&DestinationString.Length,
                             pcchRemaining,
                             L"\\#",
                             (NTSTRSAFE_PWSTR *)&DestinationString,
                             &pcchRemaining,
                             0x800u);
                  if ( result >= 0 )
                  {
                    if ( v12 )
                      return RtlStringCchCopyExW(
                               *(NTSTRSAFE_PWSTR *)&DestinationString.Length,
                               pcchRemaining,
                               v12,
                               (NTSTRSAFE_PWSTR *)&DestinationString,
                               &pcchRemaining,
                               0x800u);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
