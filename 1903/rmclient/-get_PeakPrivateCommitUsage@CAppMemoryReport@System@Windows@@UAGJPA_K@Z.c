/*
 * XREFs of ?get_PeakPrivateCommitUsage@CAppMemoryReport@System@Windows@@UAGJPA_K@Z @ 0x1000BB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::get_PeakPrivateCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 4);
  return 0;
}
