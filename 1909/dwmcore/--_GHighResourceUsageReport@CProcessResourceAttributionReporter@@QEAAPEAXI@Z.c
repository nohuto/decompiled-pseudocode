/*
 * XREFs of ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800EC09C
 * Callers:
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1800EBE90 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800EBEBC (_lambda_d726b1e7ec95932be2432bf4c2269415_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

CProcessResourceAttributionReporter::HighResourceUsageReport *__fastcall CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        CProcessResourceAttributionReporter::HighResourceUsageReport *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 104 * ((*((_QWORD *)this + 4) - (_QWORD)v2) / 104LL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  operator delete(this);
  return this;
}
