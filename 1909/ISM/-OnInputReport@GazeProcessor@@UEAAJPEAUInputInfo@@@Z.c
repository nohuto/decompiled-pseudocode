/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A2F8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002EE94 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x180125548 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  const struct std::nothrow_t *v6; // rdx
  struct tagPOINT *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct tagPOINT *v12; // r9
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, _QWORD, struct tagPOINT *, _QWORD, _QWORD, __int64 *); // r12
  __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // r8
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  struct tagPOINT v21; // [rsp+A0h] [rbp+50h] BYREF
  void *v22; // [rsp+A8h] [rbp+58h] BYREF

  v20 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(&v22, 0x168uLL, a3, a4);
  v7 = (struct tagPOINT *)v22;
  v21 = 0LL;
  if ( *(_DWORD *)a2 != 0x4000 )
  {
    v8 = -2147024809;
    v9 = 2147942487LL;
    v10 = 211LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)v9);
    goto LABEL_38;
  }
  if ( *((_BYTE *)this + 72) == 1 )
  {
    if ( *((_BYTE *)a2 + 60) )
    {
      v11 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
              (GazeProcessor *)((char *)this - 24),
              *(struct tagPOINT *)((char *)a2 + 52),
              (struct tagPOINT *)((char *)a2 + 44),
              &v21);
      v8 = v11;
      if ( v11 < 0 )
      {
        v10 = 227LL;
LABEL_36:
        v9 = (unsigned int)v11;
        goto LABEL_37;
      }
      *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
    }
    if ( *((_BYTE *)a2 + 80) )
    {
      v12 = &v21;
      if ( *((_BYTE *)a2 + 60) )
        v12 = 0LL;
      v11 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
              (GazeProcessor *)((char *)this - 24),
              *(struct tagPOINT *)((char *)a2 + 72),
              (struct tagPOINT *)a2 + 8,
              v12);
      v8 = v11;
      if ( v11 < 0 )
      {
        v10 = 239LL;
        goto LABEL_36;
      }
      *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 8);
    }
    v7->y = *((_DWORD *)a2 + 1);
    v7->x = 16386;
    v7[33] = v21;
    v7[26].y = 1;
    LOBYTE(v7[26].x) = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    v14 = *(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 56LL);
    v15 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (_QWORD *)((char *)this + 184);
    v14(v13, *((_QWORD *)this + 8), v7, 0LL, *((_QWORD *)this + 23), &v20);
    v17 = v20;
    if ( v20 == *((_QWORD *)this + 23) )
    {
      if ( !v20 )
        goto LABEL_27;
      *((_DWORD *)a2 + 10) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v17 + 24LL))(v17, a2);
      v8 = v11;
      if ( v11 < 0 )
      {
        v10 = 286LL;
        goto LABEL_36;
      }
    }
    else
    {
      if ( *v16 )
      {
        *((_DWORD *)a2 + 10) = 2;
        v11 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v16 + 24LL))(*v16, a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v10 = 270LL;
          goto LABEL_36;
        }
        v17 = v20;
      }
      if ( v17 )
      {
        *((_DWORD *)a2 + 10) = 1;
        v11 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v17 + 24LL))(v17, a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v10 = 277LL;
          goto LABEL_36;
        }
      }
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 23, &v20);
    }
    v17 = v20;
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  v8 = 0;
LABEL_38:
  v17 = v20;
LABEL_28:
  if ( v22 )
  {
    operator delete(v22, v6);
    v17 = v20;
  }
  if ( v17 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v8;
}
