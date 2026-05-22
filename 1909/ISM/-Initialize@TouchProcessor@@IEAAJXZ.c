/*
 * XREFs of ?Initialize@TouchProcessor@@IEAAJXZ @ 0x18014113C
 * Callers:
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180141050 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0InputInfoValidator@@QEAA@XZ @ 0x180142D40 (--0InputInfoValidator@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::Initialize(TouchProcessor *this)
{
  InputInfoValidator *v2; // rax
  InputInfoValidator *v3; // rbx
  InputInfoValidator *v4; // rax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (InputInfoValidator *)RefCountedObject::operator new(0x50uLL);
  if ( v2 )
    v3 = InputInfoValidator::InputInfoValidator(v2);
  else
    v3 = 0LL;
  v4 = (InputInfoValidator *)*((_QWORD *)this + 8);
  if ( v4 != v3 )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      (*(void (__fastcall **)(InputInfoValidator *))(*(_QWORD *)v3 + 8LL))(v3);
      v5 = *((_QWORD *)this + 8);
    }
    *((_QWORD *)this + 8) = v3;
    v4 = v3;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = (InputInfoValidator *)*((_QWORD *)this + 8);
    }
  }
  if ( v4 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
