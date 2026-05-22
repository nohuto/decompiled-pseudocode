/*
 * XREFs of ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1800FCF5C
 * Callers:
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1800FBB80 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??0ButtonRecognizer@@QEAA@XZ @ 0x1800FCCAC (--0ButtonRecognizer@@QEAA@XZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800FD48C (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Create(struct ButtonRecognizer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  ButtonRecognizer *v5; // rax
  ButtonRecognizer *v6; // rbx
  ButtonRecognizer *v7; // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ButtonRecognizer *v11; // [rsp+40h] [rbp+8h] BYREF
  ButtonRecognizer *v12; // [rsp+48h] [rbp+10h]

  v11 = 0LL;
  if ( a1 )
  {
    v5 = (ButtonRecognizer *)RefCountedObject::operator new(0xD0uLL);
    v6 = v5;
    v12 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0xD0uLL);
      v7 = ButtonRecognizer::ButtonRecognizer(v6);
    }
    else
    {
      v7 = 0LL;
    }
    v11 = v7;
    if ( v7 )
    {
      v8 = ButtonRecognizer::Initialize(v7);
      v2 = v8;
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        *a1 = v7;
        v2 = 0;
        goto LABEL_12;
      }
      v3 = (unsigned int)v8;
      v4 = 98LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 2147942414LL;
      v4 = 95LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 2147942487LL;
    v4 = 90LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)v3);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v11);
  return v2;
}
