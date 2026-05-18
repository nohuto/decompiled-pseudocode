/*
 * XREFs of sub_18002B380 @ 0x18002B380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180069010 @ 0x180069010 (sub_180069010.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_18002B380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  double v9; // xmm8_8
  int v10; // r14d
  double v11; // xmm7_8
  double v12; // xmm6_8
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  __int64 v16; // rax
  double v17; // xmm0_8
  double v18; // xmm6_8
  float v19; // xmm0_4
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  _QWORD v23[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v24; // [rsp+78h] [rbp-41h] BYREF
  _Mtx_t v25; // [rsp+80h] [rbp-39h] BYREF
  __int64 v26; // [rsp+88h] [rbp-31h]
  __int64 v27; // [rsp+90h] [rbp-29h] BYREF
  __int64 v28; // [rsp+98h] [rbp-21h]

  v23[1] = -2LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_1800631C0(a1 + 8, &v27);
  v25 = 0LL;
  v26 = 0LL;
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a1 + 320LL))(a1, &v25);
  sub_180069010(a1, v6, v7, v8, a5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
  v9 = (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) * 100.0);
  v10 = (int)(float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) * 96.0);
  v11 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL))(a1);
  v12 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
  sub_18011D988(
    &unk_180258080,
    3LL,
    "Render Output Resolution: handle=%016llx -- physical window-space %dx%d pixels (%dxMSAA) - logical display-space %.2"
    "fx%.2f dips at %d ppi (scale %.0f%%)",
    v16,
    v15,
    v14,
    v13,
    v12,
    v11,
    v10,
    v9);
  v17 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  if ( *(float *)&v17 != (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    v18 = (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) * 100.0);
    v19 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    sub_18011D988(&unk_180258080, 3LL, "  non-uniform scale factors: x=%.0f%% y=%.0f%%", (float)(v19 * 100.0), v18);
  }
  v24 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 400LL))(a1, &v24);
  v23[0] = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 384LL))(a1, v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 392LL))(a1);
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 360LL))(a1, v20);
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( (_BYTE)v26 )
  {
    v22 = Mtx_unlock(v25);
    if ( v22 )
      std::_Throw_C_error(v22);
  }
  if ( (_BYTE)v28 )
    sub_180063668(v27);
}
