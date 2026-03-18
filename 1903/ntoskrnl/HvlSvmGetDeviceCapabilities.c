/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x140289E60
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _DWORD *v5; // r14
  unsigned __int16 v6; // bx
  int v7; // edx
  int v8; // ecx
  PHYSICAL_ADDRESS v10[4]; // [rsp+20h] [rbp-A8h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v12[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = HvlpAcquireHypercallPage(v11, 1, (__int64)v12, 16LL);
  v5 = HvlpAcquireHypercallPage(v10, 2, (__int64)v13, 16LL);
  v4[1] = 0LL;
  *v4 = 0x4000000000000000LL;
  *(_DWORD *)v4 = a1;
  v6 = HvcallCodeVa();
  if ( !v6 )
  {
    *(_DWORD *)a2 ^= (*v5 ^ *(_DWORD *)a2) & 1;
    v7 = *(_DWORD *)a2 ^ ((unsigned __int8)*(_DWORD *)a2 ^ (unsigned __int8)*v5) & 2;
    *(_DWORD *)a2 = v7;
    v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*v5) & 4;
    *(_DWORD *)a2 = v8;
    *(_DWORD *)a2 = *v5 ^ (v8 ^ *v5) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = v5[1];
    *(_DWORD *)(a2 + 8) = v5[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)v10);
  HvlpReleaseHypercallPage((unsigned int *)v11);
  return HvlpHvToNtStatus(v6);
}
