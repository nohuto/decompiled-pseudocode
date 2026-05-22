/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180107420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x180107738 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180142B88 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionTarget::DeliverInput(InputRedirectionTarget *this, struct InputInfo *a2)
{
  const struct std::nothrow_t *v5; // rdx
  int v6; // [rsp+38h] [rbp-20h] BYREF
  void *v7; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a2 )
  {
    if ( InputRedirectionTarget::IsValid(this) )
    {
      if ( (*(_BYTE *)a2 & 0x3B) != 0 )
      {
        *((_QWORD *)a2 + 9) = *((_QWORD *)this + 7);
      }
      else if ( *(_DWORD *)a2 == 0x4000 )
      {
        *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
      }
      InputEventPayloadBuffer::InputEventPayloadBuffer(&v6, 4LL, a2);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, void *, int))(**((_QWORD **)this + 4) + 160LL))(
             *((_QWORD *)this + 4),
             *((_QWORD *)this + 5),
             4LL,
             v7,
             v6) < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 152LL))(
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
        *((_QWORD *)this + 5) = 0LL;
      }
      if ( v7 )
        operator delete(v7, v5);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
