/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x14093E36C
 * Callers:
 *     PiDevCfgConfigureDeviceFilters @ 0x1407178C4 (PiDevCfgConfigureDeviceFilters.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140717978 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x1408678DC (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCopyTree @ 0x140933548 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400A2DA0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C3B98 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406F4448 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140717270 (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x14071A884 (_RegRtlSetValue.c)
 *     _RegRtlQueryInfoKey @ 0x14071CA28 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumValue @ 0x14071D488 (_RegRtlEnumValue.c)
 *     _RegRtlCloseKey @ 0x14093E358 (_RegRtlCloseKey.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 *     _RegRtlGetKeySecurity @ 0x14093EA50 (_RegRtlGetKeySecurity.c)
 *     _RegRtlSetKeySecurity @ 0x14093EA74 (_RegRtlSetKeySecurity.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        const WCHAR *a2,
        SIZE_T a3,
        const WCHAR *a4,
        char a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r12
  ULONG v9; // edi
  PVOID v10; // rsi
  int v13; // ebx
  int v14; // eax
  ULONG v15; // r14d
  __int64 v16; // rdx
  char v17; // r13
  PVOID i; // r8
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  SIZE_T v23; // r15
  ULONG j; // edx
  int v25; // eax
  ULONG v26; // r13d
  ULONG k; // edx
  PVOID v28; // r9
  ULONG v29; // r8d
  int v30; // eax
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  SIZE_T v34; // [rsp+60h] [rbp-51h] BYREF
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp-49h] BYREF
  PVOID P; // [rsp+70h] [rbp-41h]
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-39h] BYREF
  HANDLE v38; // [rsp+80h] [rbp-31h] BYREF
  ULONG v39; // [rsp+88h] [rbp-29h] BYREF
  __int64 v40; // [rsp+90h] [rbp-21h]
  ULONG ResultLength; // [rsp+98h] [rbp-19h] BYREF
  __int64 KeyInformation; // [rsp+A0h] [rbp-11h] BYREF
  int v43; // [rsp+A8h] [rbp-9h]

  v34 = a3;
  KeyHandle = 0LL;
  v38 = 0LL;
  v8 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v9 = 0;
  v10 = 0LL;
  P = 0LL;
  v40 = a6;
  KeyInformation = 0LL;
  v43 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v13 = -1073741670;
    goto LABEL_82;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8u, 0x20019u, &KeyHandle, a6);
  v15 = 0;
  v13 = v14;
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v13 = -2147483603;
        goto LABEL_82;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    v17 = a5;
    if ( !a5 )
      goto LABEL_91;
    for ( i = 0LL; (unsigned int)RegRtlGetKeySecurity(KeyHandle, v16, i, &NumberOfBytes) == -1073741789; i = PoolWithTag )
    {
      if ( v8 )
        ExFreePoolWithTag((PVOID)v8, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4C474552u);
      v8 = (unsigned __int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = -1073741801;
        break;
      }
    }
    if ( v13 >= 0 )
    {
LABEL_91:
      v13 = RegRtlCreateKeyTransacted(
              (char *)v34,
              a4,
              v9,
              0x6001Fu,
              (void *)(v8 & -(__int64)(a5 != 0)),
              0,
              &v38,
              &v39,
              v40);
      if ( v13 >= 0 )
      {
        if ( a5 && v8 && v39 == 2 )
          RegRtlSetKeySecurity(v38, v20, v8);
        if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, &HighLimit, 0LL, &LowLimit, &v34) )
        {
          LODWORD(v22) = 0;
          LODWORD(v23) = 0;
          goto LABEL_35;
        }
        v21 = HighLimit;
        if ( (unsigned int)HighLimit <= (unsigned int)LowLimit )
          v21 = LowLimit;
        if ( !v21 || (v21 + 1 < v21 ? (v13 = -1073741675, v21 = -1) : (v13 = 0, ++v21), v13 >= 0) )
        {
          v22 = 2LL * v21;
          if ( v22 > 0xFFFFFFFF )
          {
            v13 = -1073741675;
            goto LABEL_82;
          }
          LODWORD(v23) = v34;
          v13 = 0;
LABEL_35:
          if ( (_DWORD)v22 )
          {
            v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v22, 0x4C474552u);
            if ( !v10 )
            {
              v13 = -1073741801;
              goto LABEL_82;
            }
          }
          if ( (_DWORD)v23 )
          {
            P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v23, 0x4C474552u);
            if ( !P )
            {
LABEL_40:
              v13 = -1073741801;
LABEL_80:
              if ( v10 )
                ExFreePoolWithTag(v10, 0);
              goto LABEL_82;
            }
            v17 = a5;
          }
          for ( j = 0; ; j = v15 )
          {
            LODWORD(LowLimit) = (unsigned int)v22 >> 1;
            v25 = RegRtlEnumKey(KeyHandle, j, (unsigned int *)v10, (unsigned int *)&LowLimit);
            if ( v25 == -2147483622 )
              break;
            if ( v25 == -1073741789 )
            {
              v22 = 2LL * (unsigned int)LowLimit;
              if ( v22 > 0xFFFFFFFF )
              {
LABEL_56:
                v13 = -1073741675;
                goto LABEL_78;
              }
              v13 = 0;
              if ( v10 )
                ExFreePoolWithTag(v10, 0);
              v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v22, 0x4C474552u);
              if ( !v10 )
              {
LABEL_48:
                v13 = -1073741801;
                goto LABEL_78;
              }
            }
            else
            {
              if ( v25
                || (*((_WORD *)v10 + ((unsigned __int64)(unsigned int)v22 >> 1) - 1) = 0,
                    (v25 = RegRtlCopyTreeInternal(
                             (_DWORD)KeyHandle,
                             (_DWORD)v10,
                             (_DWORD)v38,
                             (_DWORD)v10,
                             v17,
                             v40,
                             a7)) != 0)
                && v25 != -2147483603 )
              {
                v13 = v25;
                break;
              }
              ++v15;
            }
          }
          if ( v13 >= 0 )
          {
            v26 = 0;
            for ( k = 0; ; k = v26 )
            {
              LODWORD(LowLimit) = (unsigned int)v22 >> 1;
              LODWORD(v34) = v23;
              v30 = RegRtlEnumValue(KeyHandle, k, v10, &LowLimit, &HighLimit, P, (unsigned int *)&v34);
              if ( v30 == -2147483622 )
                break;
              if ( v30 == -1073741789 )
              {
                if ( (unsigned int)LowLimit > (unsigned int)v22 >> 1 )
                {
                  v22 = 2LL * (unsigned int)LowLimit;
                  if ( v22 > 0xFFFFFFFF )
                    goto LABEL_56;
                  v13 = 0;
                  if ( v10 )
                    ExFreePoolWithTag(v10, 0);
                  v10 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v22, 0x4C474552u);
                  if ( !v10 )
                    goto LABEL_48;
                }
                if ( (unsigned int)v34 > (unsigned int)v23 )
                {
                  v23 = (unsigned int)v34;
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  P = ExAllocatePoolWithTag(PagedPool, v23, 0x4C474552u);
                  if ( !P )
                    goto LABEL_40;
                }
              }
              else
              {
                if ( v30
                  || (v28 = P,
                      v29 = HighLimit,
                      *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v22 >> 1) - 1) = 0,
                      (v30 = RegRtlSetValue(v38, (const WCHAR *)v10, v29, v28, v34)) != 0) )
                {
                  v13 = v30;
                  break;
                }
                ++v26;
              }
            }
          }
LABEL_78:
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_80;
        }
      }
    }
  }
LABEL_82:
  if ( KeyHandle )
    RegRtlCloseKey(KeyHandle);
  if ( v38 )
    RegRtlCloseKey(v38);
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0);
  return (unsigned int)v13;
}
