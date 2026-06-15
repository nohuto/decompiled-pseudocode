/*
 * XREFs of ?IsDriverVolumeLimitTrackingSupported@CEndpointCharacteristics@@UEAAHXZ @ 0x180119210
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsDriverVolumeLimitTrackingSupported(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  LPVOID *ppv; // [rsp+20h] [rbp-39h]
  __int64 v8; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-9h] BYREF
  __int64 v11; // [rsp+58h] [rbp-1h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  LPVOID v15; // [rsp+78h] [rbp+1Fh] BYREF
  GUID v16; // [rsp+80h] [rbp+27h] BYREF
  int v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+94h] [rbp+3Bh]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]
  unsigned __int16 v21; // [rsp+C0h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)this + 45) )
    return *((unsigned int *)this + 44);
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  memset_0(&v16, 0, 0x20uLL);
  v2 = *((_QWORD *)this + 2);
  v22 = 0;
  pv = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  *((_DWORD *)this + 44) = 0;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         1LL,
         0LL,
         &v10) < 0
    || (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9) < 0
    || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v11) < 0 )
  {
    goto LABEL_3;
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
         v11,
         &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9,
         &v8);
  v3 = v8;
  if ( v4 < 0 )
    goto LABEL_4;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v8 + 32LL))(v8, &v21);
  v3 = v8;
  if ( v5 < 0 )
    goto LABEL_4;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, &v12) < 0 )
  {
LABEL_3:
    v3 = v8;
LABEL_4:
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CoTaskMemFree(pv);
    goto LABEL_38;
  }
  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 64LL))(v12, &pv) >= 0
    && CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v15) >= 0
    && (*(int (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, pv, &v14) >= 0 )
  {
    ppv = (LPVOID *)&v13;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v14 + 24LL))(
           v14,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           1LL) >= 0 )
    {
      v19 = v21;
      v16 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000;
      v20 = 0;
      v17 = 57;
      v18 = 512;
      LODWORD(ppv) = 4;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64, unsigned int *, LPVOID *, int *))(*(_QWORD *)v13 + 24LL))(
             v13,
             &v16,
             32LL,
             &v23,
             ppv,
             &v22) >= 0 )
        *((_DWORD *)this + 44) = (v23 >> 1) & 1;
      *((_DWORD *)this + 45) = 1;
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  CoTaskMemFree(pv);
  pv = 0LL;
LABEL_38:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  return *((unsigned int *)this + 44);
}
