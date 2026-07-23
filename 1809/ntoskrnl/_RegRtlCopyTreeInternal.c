/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x1409017C0
 * Callers:
 *     PiDevCfgConfigureDeviceFilters @ 0x1406FB0F8 (PiDevCfgConfigureDeviceFilters.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406FB1A0 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x14082EBA8 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCopyTree @ 0x1408F70DC (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C8B4C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x1406D4A5C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     _RegRtlEnumValue @ 0x1406FD91C (_RegRtlEnumValue.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     _RegRtlQueryInfoKey @ 0x1406FDFC0 (_RegRtlQueryInfoKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        const WCHAR *a2,
        SIZE_T a3,
        const WCHAR *a4,
        char a5,
        SIZE_T a6,
        char a7)
{
  unsigned __int64 PoolWithTag; // r12
  ULONG v10; // esi
  unsigned int *v11; // rdi
  PVOID v12; // r13
  signed int v14; // ebx
  ULONG v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  bool v19; // cf
  unsigned int v20; // esi
  unsigned __int64 v21; // rax
  SIZE_T v22; // r15
  signed int v23; // eax
  unsigned __int64 v24; // rax
  ULONG i; // edx
  unsigned __int64 v26; // rax
  ULONG v27; // r8d
  signed int v28; // eax
  unsigned __int64 LowLimit; // [rsp+50h] [rbp-51h] BYREF
  SIZE_T v31; // [rsp+58h] [rbp-49h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-39h] BYREF
  ULONG LengthNeeded; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 HighLimit; // [rsp+78h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-21h] BYREF
  ULONG v37; // [rsp+88h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+8Ch] [rbp-15h] BYREF
  _BYTE KeyInformation[4]; // [rsp+90h] [rbp-11h] BYREF
  char v40; // [rsp+94h] [rbp-Dh]

  v31 = a6;
  NumberOfBytes = a3;
  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  LengthNeeded = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v14 = -1073741670;
    goto LABEL_79;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8, 0x20019u, &KeyHandle, v31);
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v40 & 2) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_79;
      }
      v10 = (v40 & 1) != 0;
    }
    if ( !a5 )
      goto LABEL_88;
    while ( ZwQuerySecurityObject(KeyHandle, 4u, (PSECURITY_DESCRIPTOR)PoolWithTag, LengthNeeded, &LengthNeeded) == -1073741789 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x4C474552u);
      if ( !PoolWithTag )
      {
        v14 = -1073741801;
        break;
      }
    }
    if ( v14 >= 0 )
    {
LABEL_88:
      v14 = RegRtlCreateKeyTransacted(
              (char *)NumberOfBytes,
              a4,
              v10,
              0x6001Fu,
              (void *)(PoolWithTag & -(__int64)(a5 != 0)),
              0,
              &Handle,
              &v37,
              v31);
      if ( v14 >= 0 )
      {
        if ( a5 )
        {
          v15 = 0;
          if ( PoolWithTag && v37 == 2 )
            ZwSetSecurityObject(Handle, 4u, (PSECURITY_DESCRIPTOR)PoolWithTag);
        }
        else
        {
          v15 = 0;
        }
        if ( (unsigned int)RegRtlQueryInfoKey(
                             KeyHandle,
                             0LL,
                             (unsigned int *)&HighLimit,
                             0LL,
                             (unsigned int *)&LowLimit,
                             &NumberOfBytes) )
        {
          v20 = 0;
          LODWORD(v22) = 0;
        }
        else
        {
          v16 = HighLimit;
          if ( (unsigned int)HighLimit <= (unsigned int)LowLimit )
            v16 = LowLimit;
          if ( v16 )
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = v16 + 1 < v16;
            v16 = -1;
            if ( !v19 )
              v16 = v18;
            v14 = v19 ? 0xC0000095 : 0;
            if ( v18 < v17 )
              goto LABEL_79;
          }
          v20 = -1;
          v21 = 2LL * v16;
          if ( v21 <= 0xFFFFFFFF )
            v20 = 2 * v16;
          v14 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v21 > 0xFFFFFFFF )
            goto LABEL_79;
          LODWORD(v22) = NumberOfBytes;
        }
        if ( !v20 || (v11 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x4C474552u)) != 0LL )
        {
          if ( !(_DWORD)v22 || (v12 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v22, 0x4C474552u)) != 0LL )
          {
            while ( 1 )
            {
              LODWORD(LowLimit) = v20 >> 1;
              v23 = RegRtlEnumKey(KeyHandle, v15, v11, (unsigned int *)&LowLimit);
              if ( v23 == -2147483622 )
                break;
              if ( v23 == -1073741789 )
              {
                v24 = 2LL * (unsigned int)LowLimit;
                v20 = -1;
                if ( v24 <= 0xFFFFFFFF )
                  v20 = 2 * LowLimit;
                v14 = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v24 > 0xFFFFFFFF )
                  break;
                if ( v11 )
                  ExFreePoolWithTag(v11, 0);
                v11 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x4C474552u);
                if ( !v11 )
                {
LABEL_47:
                  v14 = -1073741801;
                  goto LABEL_75;
                }
              }
              else
              {
                if ( v23
                  || (*((_WORD *)v11 + ((unsigned __int64)v20 >> 1) - 1) = 0,
                      (v23 = RegRtlCopyTreeInternal(
                               (_DWORD)KeyHandle,
                               (_DWORD)v11,
                               (_DWORD)Handle,
                               (_DWORD)v11,
                               a5,
                               v31,
                               a7)) != 0)
                  && v23 != -2147483603 )
                {
                  v14 = v23;
                  break;
                }
                ++v15;
              }
            }
            if ( v14 >= 0 )
            {
              LODWORD(LowLimit) = 0;
              for ( i = 0; ; i = LowLimit )
              {
                LODWORD(NumberOfBytes) = v20 >> 1;
                LODWORD(v31) = v22;
                v28 = RegRtlEnumValue(KeyHandle, i, v11, &NumberOfBytes, &HighLimit, v12, (unsigned int *)&v31);
                if ( v28 == -2147483622 )
                  break;
                if ( v28 == -1073741789 )
                {
                  if ( (unsigned int)NumberOfBytes > v20 >> 1 )
                  {
                    v26 = 2LL * (unsigned int)NumberOfBytes;
                    v20 = -1;
                    if ( v26 <= 0xFFFFFFFF )
                      v20 = 2 * NumberOfBytes;
                    v14 = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
                    if ( v26 > 0xFFFFFFFF )
                      break;
                    if ( v11 )
                      ExFreePoolWithTag(v11, 0);
                    v11 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x4C474552u);
                    if ( !v11 )
                      goto LABEL_47;
                  }
                  if ( (unsigned int)v31 > (unsigned int)v22 )
                  {
                    v22 = (unsigned int)v31;
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v12 = ExAllocatePoolWithTag(PagedPool, v22, 0x4C474552u);
                    if ( !v12 )
                      goto LABEL_38;
                  }
                }
                else
                {
                  if ( v28
                    || (v27 = HighLimit,
                        *((_WORD *)v11 + ((unsigned __int64)v20 >> 1) - 1) = 0,
                        (v28 = RegRtlSetValue(Handle, (const WCHAR *)v11, v27, v12, v31)) != 0) )
                  {
                    v14 = v28;
                    break;
                  }
                  LODWORD(LowLimit) = LowLimit + 1;
                }
              }
            }
LABEL_75:
            if ( v12 )
              ExFreePoolWithTag(v12, 0);
          }
          else
          {
LABEL_38:
            v14 = -1073741801;
          }
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
        }
        else
        {
          v14 = -1073741801;
        }
      }
    }
  }
LABEL_79:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag((PVOID)PoolWithTag, 0);
  return (unsigned int)v14;
}
