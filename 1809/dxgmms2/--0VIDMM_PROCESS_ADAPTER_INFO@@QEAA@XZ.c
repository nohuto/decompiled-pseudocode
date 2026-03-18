/*
 * XREFs of ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C007BB00
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C007A130 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0012AF0 (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  _QWORD *v1; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *result; // rax

  v1 = (_QWORD *)((char *)this + 464);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 94) = 54;
  *((_DWORD *)this + 98) = 2;
  *((_DWORD *)this + 99) = 2;
  *((_QWORD *)this + 48) = 0LL;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 464));
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *v1 = 0LL;
  v1[1] = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  result = this;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  return result;
}
