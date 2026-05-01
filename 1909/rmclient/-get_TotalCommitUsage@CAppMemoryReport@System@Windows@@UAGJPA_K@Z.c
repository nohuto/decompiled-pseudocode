/*
 * XREFs of ?get_TotalCommitUsage@CAppMemoryReport@System@Windows@@UAGJPA_K@Z @ 0x1000BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::get_TotalCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 5);
  return 0;
}
