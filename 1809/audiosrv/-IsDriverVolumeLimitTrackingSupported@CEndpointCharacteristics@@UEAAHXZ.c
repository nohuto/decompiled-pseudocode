/*
 * XREFs of ?IsDriverVolumeLimitTrackingSupported@CEndpointCharacteristics@@UEAAHXZ @ 0x18010BFD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsDriverVolumeLimitTrackingSupported(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  __int64 v8; // [rsp+48h] [rbp-11h] BYREF
  __int64 v9; // [rsp+50h] [rbp-9h] BYREF
  __int64 v10; // [rsp+58h] [rbp-1h] BYREF
  __int64 v11; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+17h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+1Fh] BYREF
  GUID v15; // [rsp+80h] [rbp+27h] BYREF
  int v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+94h] [rbp+3Bh]
  int v18; // [rsp+98h] [rbp+3Fh]
  unsigned __int16 v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)this + 45) )
    return *((unsigned int *)this + 44);
  ppv = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  memset_0(&v15, 0, 0x20uLL);
  v2 = *((_QWORD *)this + 2);
  v20 = 0;
  pv = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  *((_DWORD *)this + 44) = 0;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         1LL,
         0LL,
         &v9) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 0LL, &v8) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, &v10) >= 0 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
           &v7);
    v4 = v7;
    if ( v3 < 0 )
      goto LABEL_16;
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v7 + 32LL))(v7, &v19);
    v4 = v7;
    if ( v5 < 0 )
      goto LABEL_16;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 96LL))(v7, &v11) >= 0
      && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v11 + 64LL))(v11, &pv) >= 0
      && CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0
      && (*(int (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v13) >= 0
      && (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 24LL))(
           v13,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           1LL,
           0LL,
           &v12) >= 0 )
    {
      memset_0(&v15, 0, 0x20uLL);
      v18 = v19;
      v15 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
      v16 = 57;
      v17 = 512;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64, unsigned int *, int, int *))(*(_QWORD *)v12 + 24LL))(
             v12,
             &v15,
             32LL,
             &v21,
             4,
             &v20) >= 0 )
        *((_DWORD *)this + 44) = (v21 >> 1) & 1;
      *((_DWORD *)this + 45) = 1;
    }
  }
  v4 = v7;
LABEL_16:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return *((unsigned int *)this + 44);
}
