/*
 * XREFs of DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x18039DFE0
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x18039FC98 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x18039E5B8 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--ExternalD.c)
 */

__int64 __fastcall DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  void *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v5 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
                                                               v7,
                                                               a1,
                                                               a3);
    v8 = v5;
  }
  if ( v8 )
  {
    v12 = (**v5)(v5, &GUID_8253a5da_57e3_4257_bbe4_a0d563ae8ff1, a2);
    v9 = v12;
    if ( v12 >= 0 )
      goto LABEL_8;
    v11 = (unsigned int)v12;
    v10 = 67LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 66LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
    (const char *)v11);
LABEL_8:
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  return v9;
}
