/*
 * XREFs of ??1ComboButtonRegistration@@QEAA@XZ @ 0x1800C5A3C
 * Callers:
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$1 @ 0x180133EAE (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ComboButtonRegistration::~ComboButtonRegistration(ComboButtonRegistration *this)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800C5A9ALL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
