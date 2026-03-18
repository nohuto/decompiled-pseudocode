/*
 * XREFs of ?Render@CSpatialCallbackRenderer@@UEAAJXZ @ 0x180183AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpatialCallbackRenderer::Render(CSpatialCallbackRenderer *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, float *); // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  float v17[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v11 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v11 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 320LL))(v4, &v11);
  v12 = 1;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v11 + 768LL))(v11, &v12, &v13);
  if ( v15 > v13 && v16 > v14 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    (**(void (__fastcall ***)(__int64))v5)(v5);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 8LL))(v5, (char *)this + 104);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, *((_QWORD *)this + 3));
    v6 = *(void (__fastcall **)(__int64, float *))(*(_QWORD *)v5 + 24LL);
    v17[0] = (float)v13;
    v17[1] = (float)v14;
    v17[2] = (float)v15;
    v17[3] = (float)v16;
    v6(v5, v17);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD))(*(_QWORD *)v5 + 32LL))(
           v5,
           *((_QWORD *)this + 4),
           (char *)this + 40,
           0LL);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x63u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      goto LABEL_6;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  }
  v9 = 0;
LABEL_6:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
  return v9;
}
