/*
 * XREFs of ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x1800D9588
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg__ @ 0x1800EDD40 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  _QWORD **v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  while ( 1 )
  {
    v1 = (_QWORD **)qword_18033CA58;
    if ( !qword_18033CA58 )
      break;
    qword_18033CA58 = *(void **)qword_18033CA58;
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *))(*v1[1] + 16LL))(v1[1]);
    if ( v2 )
      (**v2)(v2, 1LL);
    operator delete(v1);
  }
}
