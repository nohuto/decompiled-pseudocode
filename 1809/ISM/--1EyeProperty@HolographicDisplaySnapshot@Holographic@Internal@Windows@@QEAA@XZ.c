/*
 * XREFs of ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800A43B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty(
        Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty *this)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  `eh vector destructor iterator'(
    (char *)this + 288,
    0x28uLL,
    2uLL,
    (void (*)(void *))Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase);
  v2 = (char *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)(*((_QWORD *)this + 34) - (_QWORD)v2);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v4 = (char *)*((_QWORD *)v2 - 1);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800A4441LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
}
