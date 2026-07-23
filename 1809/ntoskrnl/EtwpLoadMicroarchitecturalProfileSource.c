/*
 * XREFs of EtwpLoadMicroarchitecturalProfileSource @ 0x1408BCBC0
 * Callers:
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsnlen @ 0x1401979D0 (wcsnlen.c)
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall EtwpLoadMicroarchitecturalProfileSource(const WCHAR *a1, unsigned __int16 *a2, const wchar_t *a3)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rbx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int *v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int *v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h] BYREF
  int *v21; // [rsp+78h] [rbp-88h]
  _QWORD v22[36]; // [rsp+90h] [rbp-70h] BYREF

  if ( !a3 )
    return 3221225473LL;
  v13 = 0;
  v12 = 0x10000;
  v10 = -1;
  v11 = -1;
  v6 = wcsnlen(a3, 0xFEuLL) + 1;
  memset(v22, 0, 0x118uLL);
  LODWORD(v22[4]) = 4;
  v22[0] = EtwpQueryRegistryCallback;
  v22[3] = &v14;
  v14 = 4;
  v22[2] = L"Event";
  v22[7] = EtwpQueryRegistryCallback;
  v15 = &v10;
  v22[10] = &v16;
  v22[9] = L"Unit";
  v17 = &v11;
  v22[17] = &v18;
  v22[16] = L"Interval";
  v19 = &v12;
  v22[24] = &v20;
  v22[23] = L"AllowsHalt";
  LODWORD(v22[11]) = 4;
  v16 = 4;
  v22[14] = EtwpQueryRegistryCallback;
  LODWORD(v22[18]) = 4;
  v18 = 4;
  v22[21] = EtwpQueryRegistryCallback;
  LODWORD(v22[25]) = 4;
  v20 = 4;
  v21 = &v13;
  result = RtlpQueryRegistryValues(0x40000000LL, a1, (__int64)v22, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( v10 == -1 || v11 == -1 )
    return 3221225473LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v6 + 178, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  wcsncpy_s(PoolWithTag + 89, v6, a3, v6);
  KeCopyAffinityEx((__int64)(v9 + 4), a2);
  *(_BYTE *)v9 = v10;
  *((_BYTE *)v9 + 1) = v11;
  *((_BYTE *)v9 + 176) = 1;
  *((_DWORD *)v9 + 1) = v12;
  ((void (__fastcall *)(__int64, _QWORD, wchar_t *))off_140401460[0])(20LL, 2 * v6 + 178, v9);
  ExFreePoolWithTag(v9, 0x50777445u);
  return 0LL;
}
