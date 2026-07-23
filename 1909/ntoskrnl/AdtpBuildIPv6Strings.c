/*
 * XREFs of AdtpBuildIPv6Strings @ 0x14092C73C
 * Callers:
 *     AdtpBuildSockAddrString @ 0x14092D060 (AdtpBuildSockAddrString.c)
 * Callees:
 *     StringCchPrintfW @ 0x140136578 (StringCchPrintfW.c)
 *     RtlIpv6AddressToStringW @ 0x1401771C0 (RtlIpv6AddressToStringW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildIPv6Strings(_WORD *a1, __int64 a2, _BYTE *a3, __int64 a4, _BYTE *a5)
{
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rax

  if ( *a1 != 23 )
  {
    v9 = -1073741503;
    goto LABEL_13;
  }
  if ( a2 && a3 )
  {
    *(_WORD *)(a2 + 2) = 110;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6EuLL, 0x6B416553u);
    *(_QWORD *)(a2 + 8) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_6:
      v9 = -1073741801;
      goto LABEL_13;
    }
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlIpv6AddressToStringW(
                                              (const struct in6_addr *)(a1 + 4),
                                              *(PWSTR *)(a2 + 8))
                            - *(_DWORD *)(a2 + 8)) >> 1);
  }
  if ( !a4 || !a5 )
    return 0;
  *(_WORD *)(a4 + 2) = 16;
  v11 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6B416553u);
  *(_QWORD *)(a4 + 8) = v11;
  if ( !v11 )
    goto LABEL_6;
  *a5 = 1;
  if ( StringCchPrintfW(*(STRSAFE_LPWSTR *)(a4 + 8), 8uLL, L"%d", (unsigned __int16)__ROL2__(a1[1], 8)) >= 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * v12) );
    *(_WORD *)a4 = 2 * v12;
    return 0;
  }
  v9 = -1073741811;
LABEL_13:
  if ( a3 && *a3 )
  {
    *a3 = 0;
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
  if ( a5 && *a5 )
  {
    *a5 = 0;
    ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0);
  }
  return v9;
}
