/*
 * XREFs of ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180035ADC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x180035984 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall SystemButtonProcessor::Create(struct SystemButtonProcessor **a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v8 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v4 = RefCountedObject::operator new(0x20uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v4 + 4) = 1;
      *v4 = &SystemButtonProcessor::`vftable'{for `IContextualProcessor'};
      v4[1] = &SystemButtonProcessor::`vftable'{for `RefCountedObject'};
      v4[3] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    v7 = v4;
    if ( v4 )
    {
      v7 = 0LL;
      *a1 = (struct SystemButtonProcessor *)v4;
      goto LABEL_10;
    }
    v1 = -2147024882;
    v3 = 27LL;
  }
  else
  {
    v1 = -2147024809;
    v3 = 21LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\systembutton\\system\\lib\\syst"
             "embuttonprocessor.cpp",
    (const char *)v1);
LABEL_10:
  std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(&v7);
  return v1;
}
