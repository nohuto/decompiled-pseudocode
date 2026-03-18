/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x140768870
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyW @ 0x140153F64 (RtlStringCchCopyW.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405C2178 (_CmIsDeviceInterfaceEnabled.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C29A0 (_CmValidateDeviceInterfaceName.c)
 *     _RegRtlQueryValue @ 0x1405C32E4 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  wchar_t *v5; // r12
  _WORD *PoolWithTag; // r15
  wchar_t *v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
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
  char v24[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int KeyHandle[3]; // [rsp+34h] [rbp-4Ch] BYREF
  size_t pcchRemaining; // [rsp+40h] [rbp-40h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v31; // [rsp+C8h] [rbp+48h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  v5 = 0LL;
  PoolWithTag = 0LL;
  ppszDestEnd = 0LL;
  v7 = 0LL;
  v31 = 0;
  v8 = *a4;
  v9 = -1LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( (_DWORD)v8 == 1 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a3[v23] );
    if ( v23 != 38 || *a3 != 123 )
      return 0LL;
  }
  else if ( (unsigned int)(v8 - 2) <= 1 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( !v12 || *a3 != 35 )
      return 0LL;
  }
  if ( (unsigned int)v8 >= 3 && ((_DWORD)v8 != 3 || !*((_BYTE *)a4 + 1428)) )
    goto LABEL_10;
  v21 = 0LL;
  if ( a1 )
    v21 = *(_QWORD *)(a1 + 224);
  if ( (int)SysCtxRegOpenKey(v21, a2, (__int64)a3, 8u, 0x20019u, (__int64)&KeyHandle[1]) >= 0 )
  {
LABEL_10:
    v13 = *a4;
    if ( *a4 < 3 )
    {
      if ( v13 == 2 && *((_WORD *)a4 + 506) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_38;
        KeyHandle[0] = 400;
        if ( (int)RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], L"DeviceInstance", &pcchRemaining, PoolWithTag, KeyHandle) < 0 )
          goto LABEL_36;
        if ( (_DWORD)pcchRemaining != 1 )
          goto LABEL_36;
        if ( KeyHandle[0] < 2 )
          goto LABEL_36;
        PoolWithTag[199] = 0;
        if ( RtlInitUnicodeStringEx(&String1, PoolWithTag) < 0
          || RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) < 0
          || !RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          goto LABEL_36;
        }
      }
      v13 = *a4;
    }
    else if ( v13 == 3 )
    {
      do
        ++v9;
      while ( a3[v9] );
      if ( v9 <= 1 || *a3 != 35 )
        goto LABEL_17;
      v31 = 1;
      v13 = 3;
    }
    if ( v13 < 2 )
      goto LABEL_25;
LABEL_17:
    v7 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
    if ( v7 )
    {
      v14 = 504LL;
      if ( *((_WORD *)a4 + 2) )
      {
        if ( RtlStringCchCopyExW(v7, 0x1F8uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
          goto LABEL_34;
        v15 = ppszDestEnd;
        v14 = pcchRemaining - 1;
        *ppszDestEnd = 0;
      }
      else
      {
        v15 = v7;
      }
      if ( v31 == 1 || *a4 == 2 )
      {
        if ( RtlStringCchCopyW(v15, v14, a3) < 0 )
          goto LABEL_34;
        if ( v31 == 1 )
          *v15 = 92;
      }
LABEL_25:
      if ( *a4 < 3 )
      {
        v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
        v5 = v22;
        if ( v22 )
        {
          memset(v22, 0, 0x5B8uLL);
          *(_DWORD *)v5 = *a4 + 1;
          RtlStringCchCopyExW(v5 + 2, 0x1F8uLL, v7, 0LL, 0LL, 0x900u);
          RtlStringCchCopyExW(v5 + 506, 0xC8uLL, (NTSTRSAFE_PCWSTR)a4 + 506, 0LL, 0LL, 0x900u);
          *((_QWORD *)v5 + 177) = *((_QWORD *)a4 + 177);
          *((_DWORD *)v5 + 356) = a4[356];
          *((_BYTE *)v5 + 1428) = *((_BYTE *)a4 + 1428);
          *((_QWORD *)v5 + 179) = *((_QWORD *)a4 + 179);
          *((_QWORD *)v5 + 180) = *((_QWORD *)a4 + 180);
          *((_QWORD *)v5 + 181) = *((_QWORD *)a4 + 181);
          *((_DWORD *)v5 + 364) = a4[364];
          *((_DWORD *)v5 + 365) = a4[365];
          PnpCtxRegEnumKeyWithCallback(a1, *(_QWORD *)&KeyHandle[1], &CmDeviceClassesSubkeyCallback, v5);
          *((_QWORD *)a4 + 177) = *((_QWORD *)v5 + 177);
          a4[356] = *((_DWORD *)v5 + 356);
          a4[365] = *((_DWORD *)v5 + 365);
          *((_QWORD *)a4 + 181) = *((_QWORD *)v5 + 181);
          a4[364] = *((_DWORD *)v5 + 364);
LABEL_32:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
      }
      else
      {
        *(_QWORD *)v7 = *(_QWORD *)L"\\\\?\\";
        if ( CmValidateDeviceInterfaceName(v8, (__int64)v7) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v7) >= 0 )
        {
          v17 = DestinationString.MaximumLength >> 1;
          if ( !*((_BYTE *)a4 + 1428) || CmIsDeviceInterfaceEnabled(a1, v7, v16, (__int64)v24) >= 0 && v24[0] )
          {
            v18 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 179);
            if ( !v18 || v18(a1, v7, 3LL, *((_QWORD *)a4 + 180)) )
            {
              a4[365] += v17;
              v19 = a4[364];
              if ( v19 > v17 )
              {
                RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 181), v19, v7, 0LL, 0LL, 0x900u);
                *((_QWORD *)a4 + 181) += 2LL * v17;
                a4[364] -= v17;
                goto LABEL_32;
              }
            }
          }
        }
      }
LABEL_34:
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_38:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return 0LL;
}
