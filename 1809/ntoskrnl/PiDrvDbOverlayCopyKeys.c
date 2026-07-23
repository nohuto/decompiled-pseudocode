/*
 * XREFs of PiDrvDbOverlayCopyKeys @ 0x14083EA48
 * Callers:
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 */

__int64 __fastcall PiDrvDbOverlayCopyKeys(
        __int64 a1,
        __int64 a2,
        char *a3,
        const WCHAR *a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  PVOID v9; // rdi
  void *v10; // r15
  ULONG v11; // esi
  unsigned int v12; // r14d
  int v13; // ebx
  NTSTATUS v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned int v18; // eax
  ULONG v19; // r13d
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rsi
  unsigned int v24; // r15d
  size_t v25; // rax
  const wchar_t **v26; // r14
  __int64 v27; // rdx
  __int16 v28; // ax
  __int64 v29; // rax
  int v30; // eax
  PVOID v31; // r12
  ULONG v32; // r15d
  unsigned int v33; // r14d
  int v34; // eax
  unsigned int v35; // r14d
  SIZE_T v36; // r14
  unsigned int v38; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-5Dh]
  ULONG NumberOfBytes; // [rsp+48h] [rbp-59h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+4Ch] [rbp-55h] BYREF
  PVOID PoolWithTag; // [rsp+50h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-41h]
  ULONG v45; // [rsp+64h] [rbp-3Dh] BYREF
  size_t i; // [rsp+68h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-31h] BYREF
  PVOID P; // [rsp+78h] [rbp-29h]
  PVOID v49; // [rsp+80h] [rbp-21h]
  __int64 v50; // [rsp+88h] [rbp-19h]
  _BYTE KeyInformation[4]; // [rsp+90h] [rbp-11h] BYREF
  char v52; // [rsp+94h] [rbp-Dh]

  v50 = a6;
  v44 = a7;
  v9 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0;
  v49 = 0LL;
  v12 = 0;
  v45 = 0;
  v38 = 0;
  LODWORD(i) = 0;
  v39 = 0;
  P = 0LL;
  NumberOfBytes = 0;
  v13 = SysCtxRegOpenKey(0LL, a1, a2, 8u, 0x20019u, (__int64)&KeyHandle);
  if ( v13 < 0 )
    goto LABEL_93;
  if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &NumberOfBytes_4) >= 0 )
  {
    if ( (v52 & 2) != 0 )
    {
      v13 = -2147483603;
      goto LABEL_93;
    }
    v11 = (v52 & 1) != 0;
  }
  if ( (a5 & 2) != 0 )
  {
    while ( 1 )
    {
      v14 = ZwQuerySecurityObject(KeyHandle, 4u, v10, NumberOfBytes_4, &NumberOfBytes_4);
      if ( v14 >= 0 )
        break;
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
        v10 = 0LL;
        PoolWithTag = 0LL;
      }
      if ( v14 != -1073741789 )
        break;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x62647050u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
        break;
      }
    }
    if ( v13 < 0 )
      goto LABEL_89;
    v12 = 0;
  }
  v15 = PnpCtxRegCreateKey(0LL, a3, a4, v11, 0x6001Fu, v10, &Handle, &v45);
  v17 = 0;
  v13 = v15;
  if ( v15 >= 0 )
  {
    if ( v45 == 2 && (a5 & 1) != 0 && v10 )
      ZwSetSecurityObject(Handle, 4u, v10);
    if ( (int)PnpCtxRegQueryInfoKey(v16, (int)KeyHandle, 0, (int)&v38, 0LL, (__int64)&i, (__int64)&NumberOfBytes) < 0 )
      goto LABEL_100;
    v18 = i;
    if ( v38 > (unsigned int)i )
      v18 = v38;
    v12 = 2 * v18 + 2;
    v39 = v12;
    if ( 2 * v18 == -2 || (v9 = ExAllocatePoolWithTag(PagedPool, v12, 0x62647050u)) != 0LL )
    {
LABEL_100:
      if ( NumberOfBytes && (P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x62647050u)) == 0LL
        || v50 && v44 && (v49 = ExAllocatePoolWithTag(PagedPool, 8LL * v44, 0x62647050u)) == 0LL )
      {
        v13 = -1073741670;
LABEL_85:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
LABEL_87:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_89;
      }
      v19 = 0;
LABEL_33:
      v38 = v12 >> 1;
      v20 = RegRtlEnumKey(KeyHandle, v19, (unsigned int *)v9, &v38);
      if ( v20 == -2147483622 )
        goto LABEL_63;
      if ( v20 == -1073741789 )
      {
        v12 = 2 * v38;
        v39 = 2 * v38;
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        v9 = ExAllocatePoolWithTag(PagedPool, v12, 0x62647050u);
        if ( v9 )
        {
          --v19;
          goto LABEL_60;
        }
LABEL_61:
        v10 = PoolWithTag;
        v13 = -1073741670;
        goto LABEL_87;
      }
      if ( v20 < 0 )
      {
        v13 = v20;
LABEL_63:
        if ( v13 >= 0 )
        {
          v31 = P;
          v32 = NumberOfBytes;
          while ( 1 )
          {
            v33 = v12 >> 1;
            v38 = v33;
            NumberOfBytes = v32;
            v34 = PnpCtxRegEnumValue(
                    v21,
                    (__int64)KeyHandle,
                    v17,
                    (__int64)v9,
                    (__int64)&v38,
                    (__int64)&i,
                    (__int64)v31,
                    (__int64)&NumberOfBytes);
            if ( v34 == -2147483622 )
              break;
            if ( v34 == -1073741789 )
            {
              if ( v38 > v33 )
              {
                v35 = 2 * v38;
                v39 = 2 * v38;
                if ( v9 )
                  ExFreePoolWithTag(v9, 0);
                v9 = ExAllocatePoolWithTag(PagedPool, v35, 0x62647050u);
                if ( !v9 )
                  goto LABEL_61;
              }
              v36 = NumberOfBytes;
              if ( NumberOfBytes > v32 )
              {
                v32 = NumberOfBytes;
                if ( v31 )
                  ExFreePoolWithTag(v31, 0);
                P = ExAllocatePoolWithTag(PagedPool, v36, 0x62647050u);
                v31 = P;
                if ( !P )
                {
                  v13 = -1073741670;
                  break;
                }
              }
              --v17;
            }
            else
            {
              if ( v34 < 0 )
              {
                v13 = v34;
                break;
              }
              if ( (a5 & 1) != 0
                || v45 != 2
                || (NumberOfBytes_4 = 0,
                    (unsigned int)RegRtlQueryValue(Handle, (const WCHAR *)v9, 0LL, 0LL, &NumberOfBytes_4) != -1073741789) )
              {
                v13 = RegRtlSetValue(Handle, (const WCHAR *)v9, i, v31, NumberOfBytes);
                if ( v13 < 0 )
                  break;
              }
            }
            v12 = v39;
            ++v17;
          }
        }
LABEL_84:
        v10 = PoolWithTag;
        goto LABEL_85;
      }
      v22 = 0;
      if ( !v50 )
        goto LABEL_55;
      v23 = v38;
      if ( !v38 )
        goto LABEL_54;
      v24 = 0;
      if ( !v44 )
        goto LABEL_53;
      v25 = v38 - 1;
      v26 = (const wchar_t **)v50;
      for ( i = v25; ; v25 = i )
      {
        if ( !wcsnicmp(*v26, (const wchar_t *)v9, v25) )
        {
          v27 = (__int64)&(*v26)[v23];
          v28 = *(_WORD *)(v27 - 2);
          if ( !v28 )
          {
            LODWORD(v23) = 0;
LABEL_52:
            v12 = v39;
LABEL_53:
            if ( !(_DWORD)v23 )
            {
              v17 = 0;
              goto LABEL_60;
            }
LABEL_54:
            v17 = 0;
LABEL_55:
            v30 = PiDrvDbOverlayCopyKeys(
                    (_DWORD)KeyHandle,
                    (_DWORD)v9,
                    (_DWORD)Handle,
                    (_DWORD)v9,
                    a5,
                    (unsigned __int64)v49 & -(__int64)(v22 != 0),
                    v22);
            v13 = v30;
            if ( v30 == -2147483603 )
            {
              v13 = 0;
              goto LABEL_60;
            }
            if ( v30 < 0 )
              goto LABEL_84;
LABEL_60:
            ++v19;
            goto LABEL_33;
          }
          if ( v28 == 92 && v49 )
          {
            v29 = v22++;
            *((_QWORD *)v49 + v29) = v27;
          }
        }
        ++v24;
        ++v26;
        if ( v24 >= v44 )
          goto LABEL_52;
      }
    }
    v13 = -1073741670;
  }
LABEL_89:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
LABEL_93:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
