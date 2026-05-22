/*
 * XREFs of ?SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z @ 0x1800CAA48
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC630 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController::SendCursorAnimationCreatedCallback(
        SystemCursorController *this,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 18) && (v6 = *((_QWORD *)this + 8)) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)(v6 + 8)
                                                                                                  + 56LL))(
           v6 + 8,
           a3,
           a4,
           a5,
           a6);
    if ( v7 >= 0 )
      return 0LL;
    v8 = 371LL;
  }
  else
  {
    v7 = -2147418113;
    v8 = 376LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
