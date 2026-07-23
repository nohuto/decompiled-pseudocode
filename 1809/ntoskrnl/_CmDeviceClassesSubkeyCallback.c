/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x14074C070
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405C67EC (_CmIsDeviceInterfaceEnabled.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C7810 (_CmValidateDeviceInterfaceName.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int v5; // r8d
  unsigned __int64 v6; // r14
  __int64 v8; // r13
  wchar_t *v9; // r12
  _WORD *PoolWithTag; // r15
  wchar_t *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // eax
  size_t v14; // rdx
  wchar_t *v15; // r14
  __int64 v16; // r8
  unsigned int v17; // esi
  unsigned __int8 (__fastcall *v18)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v19; // eax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  __int64 v23; // rax
  char v24[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int pcchRemaining[5]; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v29; // [rsp+B8h] [rbp+48h]

  v5 = *(_DWORD *)a4;
  v6 = -1LL;
  Handle = 0LL;
  ppszDestEnd = 0LL;
  v8 = a1;
  v29 = 0;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0LL;
  if ( v5 == 1 )
  {
    v23 = -1LL;
    a1 = 0LL;
    do
      ++v23;
    while ( a3[v23] );
    if ( v23 != 38 || *a3 != 123 )
      return 0LL;
  }
  else if ( v5 - 2 <= 1 )
  {
    v12 = -1LL;
    a1 = 0LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( !v12 || *a3 != 35 )
      return 0LL;
  }
  if ( v5 >= 3 && (v5 != 3 || !*(_BYTE *)(a4 + 1428)) )
    goto LABEL_10;
  v21 = 0LL;
  if ( v8 )
    v21 = *(_QWORD *)(v8 + 224);
  if ( (int)SysCtxRegOpenKey(v21, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
  {
LABEL_10:
    v13 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 < 3u )
    {
      if ( v13 == 2 && *(_WORD *)(a4 + 1012) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_38;
        pcchRemaining[0] = 400;
        if ( (int)RegRtlQueryValue(Handle, L"DeviceInstance", &pcchRemaining[1], PoolWithTag, pcchRemaining) < 0 )
          goto LABEL_36;
        if ( pcchRemaining[1] != 1 )
          goto LABEL_36;
        if ( pcchRemaining[0] < 2 )
          goto LABEL_36;
        PoolWithTag[199] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) < 0
          || RtlInitUnicodeStringEx((PUNICODE_STRING)&pcchRemaining[1], (PCWSTR)(a4 + 1012)) < 0
          || !RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&pcchRemaining[1], 1u) )
        {
          goto LABEL_36;
        }
      }
      v13 = *(_DWORD *)a4;
    }
    else if ( v13 == 3 )
    {
      do
        ++v6;
      while ( a3[v6] );
      if ( v6 <= 1 || *a3 != 35 )
        goto LABEL_17;
      v29 = 1;
      v13 = 3;
    }
    if ( v13 < 2 )
      goto LABEL_25;
LABEL_17:
    v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
    if ( v11 )
    {
      v14 = 504LL;
      if ( *(_WORD *)(a4 + 4) )
      {
        if ( RtlStringCchCopyExW(
               v11,
               0x1F8uLL,
               (NTSTRSAFE_PCWSTR)(a4 + 4),
               &ppszDestEnd,
               (size_t *)&pcchRemaining[1],
               0x900u) < 0 )
          goto LABEL_34;
        v15 = ppszDestEnd;
        v14 = *(_QWORD *)&pcchRemaining[1] - 1LL;
        *ppszDestEnd = 0;
      }
      else
      {
        v15 = v11;
      }
      if ( v29 == 1 || *(_DWORD *)a4 == 2 )
      {
        if ( RtlStringCchCopyW(v15, v14, a3) < 0 )
          goto LABEL_34;
        if ( v29 == 1 )
          *v15 = 92;
      }
LABEL_25:
      if ( *(_DWORD *)a4 < 3u )
      {
        v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
        v9 = v22;
        if ( v22 )
        {
          memset(v22, 0, 0x5B8uLL);
          *(_DWORD *)v9 = *(_DWORD *)a4 + 1;
          RtlStringCchCopyExW(v9 + 2, 0x1F8uLL, v11, 0LL, 0LL, 0x900u);
          RtlStringCchCopyExW(v9 + 506, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 1012), 0LL, 0LL, 0x900u);
          *((_QWORD *)v9 + 177) = *(_QWORD *)(a4 + 1416);
          *((_DWORD *)v9 + 356) = *(_DWORD *)(a4 + 1424);
          *((_BYTE *)v9 + 1428) = *(_BYTE *)(a4 + 1428);
          *((_QWORD *)v9 + 179) = *(_QWORD *)(a4 + 1432);
          *((_QWORD *)v9 + 180) = *(_QWORD *)(a4 + 1440);
          *((_QWORD *)v9 + 181) = *(_QWORD *)(a4 + 1448);
          *((_DWORD *)v9 + 364) = *(_DWORD *)(a4 + 1456);
          *((_DWORD *)v9 + 365) = *(_DWORD *)(a4 + 1460);
          PnpCtxRegEnumKeyWithCallback(v8, Handle, &CmDeviceClassesSubkeyCallback, v9);
          *(_QWORD *)(a4 + 1416) = *((_QWORD *)v9 + 177);
          *(_DWORD *)(a4 + 1424) = *((_DWORD *)v9 + 356);
          *(_DWORD *)(a4 + 1460) = *((_DWORD *)v9 + 365);
          *(_QWORD *)(a4 + 1448) = *((_QWORD *)v9 + 181);
          *(_DWORD *)(a4 + 1456) = *((_DWORD *)v9 + 364);
LABEL_32:
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
        }
      }
      else
      {
        *(_QWORD *)v11 = *(_QWORD *)L"\\\\?\\";
        if ( CmValidateDeviceInterfaceName(a1, (__int64)v11) >= 0
          && RtlInitUnicodeStringEx(&DestinationString, v11) >= 0 )
        {
          v17 = DestinationString.MaximumLength >> 1;
          if ( !*(_BYTE *)(a4 + 1428) || CmIsDeviceInterfaceEnabled(v8, v11, v16, (__int64)v24) >= 0 && v24[0] )
          {
            v18 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, __int64, _QWORD))(a4 + 1432);
            if ( !v18 || v18(v8, v11, 3LL, *(_QWORD *)(a4 + 1440)) )
            {
              *(_DWORD *)(a4 + 1460) += v17;
              v19 = *(_DWORD *)(a4 + 1456);
              if ( v19 > v17 )
              {
                RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 1448), v19, v11, 0LL, 0LL, 0x900u);
                *(_QWORD *)(a4 + 1448) += 2LL * v17;
                *(_DWORD *)(a4 + 1456) -= v17;
                goto LABEL_32;
              }
            }
          }
        }
      }
LABEL_34:
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
