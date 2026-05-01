/*
 * XREFs of ?get_PrivateCommitUsage@CAppMemoryReport@System@Windows@@UAGJPA_K@Z @ 0x1000BBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::get_PrivateCommitUsage(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 3);
  return 0;
}
