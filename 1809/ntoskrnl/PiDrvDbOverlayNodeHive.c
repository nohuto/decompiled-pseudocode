/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x14083EFEC
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(__int64 a1, const wchar_t *a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // edx
  int v8; // ebx
  wchar_t **v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int *PoolWithTag; // r14
  ULONG i; // r15d
  int v18; // eax
  int v19; // edi
  int v20; // esi
  char *v21; // r8
  unsigned int v23; // [rsp+40h] [rbp-59h] BYREF
  int v24; // [rsp+44h] [rbp-55h] BYREF
  int v25; // [rsp+48h] [rbp-51h] BYREF
  int v26; // [rsp+4Ch] [rbp-4Dh] BYREF
  HANDLE v27; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-41h] BYREF
  HANDLE v29; // [rsp+60h] [rbp-39h] BYREF
  HANDLE v30; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v31[8]; // [rsp+70h] [rbp-29h] BYREF

  v30 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  LODWORD(v6) = 0;
  v24 = 0;
  v25 = 0;
  if ( wcsicmp(a2, L"SYSTEM") )
  {
    if ( !wcsicmp(a2, L"SOFTWARE") && (*(_DWORD *)(a1 + 492) & 0x20) == 0 )
      goto LABEL_3;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 492);
    if ( (v7 & 0x10) == 0 )
    {
LABEL_3:
      v8 = 0;
      goto LABEL_45;
    }
    v9 = off_14090AB90;
    do
    {
      v10 = (__int64)*v9++;
      v11 = (unsigned int)v6;
      v6 = (unsigned int)(v6 + 1);
      v31[v11] = v10;
    }
    while ( (unsigned int)v6 < 4 );
    v12 = v7 & 0xC0;
    if ( v12 != 192 )
    {
      if ( v12 )
      {
        v13 = SysCtxRegOpenKey(0LL, a3, (__int64)L"ControlSet001\\Services", 0, 0x20019u, (__int64)&v27);
        v8 = v13;
        if ( v13 == -1073741772 )
        {
          v27 = 0LL;
        }
        else if ( v13 < 0 )
        {
          goto LABEL_45;
        }
      }
      v31[v6] = L"ControlSet001\\Services";
      LODWORD(v6) = v6 + 1;
    }
  }
  v14 = (unsigned int)v6;
  v15 = v6 + 1;
  v31[v14] = L"Setup\\ResolveFilePaths";
  v8 = SysCtxRegOpenKey(0LL, 2147483650LL, (__int64)a2, 0, 0x2001Fu, (__int64)&v30);
  if ( v8 < 0 )
    goto LABEL_45;
  v8 = PiDrvDbOverlayCopyKeys(a3, 0LL, (char *)v30, 0LL, 0, (__int64)v31, v15);
  if ( v8 < 0 )
    goto LABEL_45;
  if ( v27 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x62647050u);
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
LABEL_45:
      if ( v27 )
        ZwClose(v27);
      goto LABEL_47;
    }
    for ( i = 0; ; ++i )
    {
      v23 = 260;
      v18 = RegRtlEnumKey(v27, i, PoolWithTag, &v23);
      if ( v18 == -2147483622 )
      {
LABEL_44:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_45;
      }
      if ( v18 < 0 || (int)SysCtxRegOpenKey(0LL, (__int64)v27, (__int64)PoolWithTag, 0, 0x20019u, (__int64)&Handle) < 0 )
        continue;
      v23 = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Type", &v26, &v24, &v23) < 0 || v26 != 4 || v23 != 4 )
        break;
      v23 = 4;
      if ( (int)RegRtlQueryValue(Handle, L"Start", &v26, &v25, &v23) < 0 || v26 != 4 || v23 != 4 )
      {
        v19 = v24;
LABEL_32:
        v25 = 0;
        v20 = 0;
        goto LABEL_33;
      }
      v19 = v24;
      v20 = v25;
LABEL_33:
      ZwClose(Handle);
      if ( !v19 )
        continue;
      if ( (v19 & 0xB) == 0 || v20 == 2 )
      {
        if ( (*(_DWORD *)(a1 + 492) & 0x80u) == 0 )
          continue;
      }
      else if ( (*(_DWORD *)(a1 + 492) & 0x40) == 0 )
      {
        continue;
      }
      v21 = (char *)v29;
      if ( !v29 )
      {
        v8 = PnpCtxRegCreateKey(0LL, (char *)v30, L"ControlSet001\\Services", 0, 0x2001Fu, 0LL, &v29, 0LL);
        if ( v8 < 0 )
          goto LABEL_44;
        v21 = (char *)v29;
      }
      v8 = PiDrvDbOverlayCopyKeys((__int64)v27, (__int64)PoolWithTag, v21, (const WCHAR *)PoolWithTag, 0, 0LL, 0);
      if ( v8 < 0 )
        goto LABEL_44;
    }
    v19 = 0;
    v24 = 0;
    goto LABEL_32;
  }
LABEL_47:
  if ( v29 )
    ZwClose(v29);
  if ( v30 )
    ZwClose(v30);
  return (unsigned int)v8;
}
