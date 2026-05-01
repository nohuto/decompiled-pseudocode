/*
 * XREFs of ?get_TotalCommitLimit@CAppMemoryReport@System@Windows@@UAGJPA_K@Z @ 0x1000BB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::get_TotalCommitLimit(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 6);
  return 0;
}
