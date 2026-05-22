/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EC060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x1800EBF54 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  struct tagPOINT *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  struct tagPOINT v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h]
  _DWORD v19[6]; // [rsp+68h] [rbp-A0h] BYREF
  int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+98h] [rbp-70h]
  struct tagPOINT v22; // [rsp+A8h] [rbp-60h]
  char v23; // [rsp+6A4h] [rbp+59Ch]
  wil::details::in1diag3 *retaddr; // [rsp+6E0h] [rbp+5D8h]

  v18 = -2LL;
  v4 = 0LL;
  v16 = 0LL;
  memset_0(v19, 0, 0x640uLL);
  v20 = 1600;
  v17 = 0LL;
  if ( *(_DWORD *)a2 == 0x4000 )
  {
    if ( *((_BYTE *)this + 48) == 1 )
    {
      if ( *((_BYTE *)a2 + 60) )
      {
        v8 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
               (GazeProcessor *)((char *)this - 24),
               *(struct tagPOINT *)((char *)a2 + 52),
               (struct tagPOINT *)((char *)a2 + 44),
               &v17);
        v5 = v8;
        if ( v8 < 0 )
        {
          v7 = 224LL;
LABEL_38:
          v6 = (unsigned int)v8;
          goto LABEL_39;
        }
        *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v9 = &v17;
        if ( *((_BYTE *)a2 + 60) )
          v9 = 0LL;
        v8 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
               (GazeProcessor *)((char *)this - 24),
               *(struct tagPOINT *)((char *)a2 + 72),
               (struct tagPOINT *)a2 + 8,
               v9);
        v5 = v8;
        if ( v8 < 0 )
        {
          v7 = 236LL;
          goto LABEL_38;
        }
        *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 8);
      }
      v19[1] = *((_DWORD *)a2 + 1);
      v20 = 1600;
      v19[0] = 16386;
      v22 = v17;
      v21 = 1;
      v23 = 1;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      (*(void (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10 + 56LL))(
        v10,
        *((_QWORD *)this + 5),
        v19,
        0LL,
        *((_QWORD *)this + 20),
        &v16);
      v12 = *((_QWORD *)this + 20);
      v4 = v16;
      if ( v16 == v12 )
      {
        if ( !v16 )
          goto LABEL_31;
        *((_DWORD *)a2 + 10) = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v4 + 24LL))(v4, a2);
        v5 = v8;
        if ( v8 < 0 )
        {
          v7 = 285LL;
          goto LABEL_38;
        }
        goto LABEL_30;
      }
      if ( v12 )
      {
        *((_DWORD *)a2 + 10) = 2;
        v8 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 20) + 24LL))(
               *((_QWORD *)this + 20),
               a2);
        v5 = v8;
        if ( v8 < 0 )
        {
          v7 = 269LL;
          goto LABEL_38;
        }
        v4 = v16;
      }
      if ( v4 )
      {
        *((_DWORD *)a2 + 10) = 1;
        v8 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v4 + 24LL))(v4, a2);
        v5 = v8;
        if ( v8 < 0 )
        {
          v7 = 276LL;
          goto LABEL_38;
        }
        v4 = v16;
      }
      v13 = *((_QWORD *)this + 20);
      if ( v13 != v4 )
      {
        v14 = v4;
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          v13 = *((_QWORD *)this + 20);
          v4 = v16;
        }
        *((_QWORD *)this + 20) = v14;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_30:
          v4 = v16;
        }
      }
    }
LABEL_31:
    v5 = 0;
    goto LABEL_32;
  }
  v5 = -2147024809;
  v6 = 2147942487LL;
  v7 = 208LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)v6);
  v4 = v16;
LABEL_32:
  if ( v4 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v5;
}
