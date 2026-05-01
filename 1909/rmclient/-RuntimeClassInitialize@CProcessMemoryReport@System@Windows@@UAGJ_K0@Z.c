/*
 * XREFs of ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UAGJ_K0@Z @ 0x1000BB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CProcessMemoryReport::RuntimeClassInitialize(
        Windows::System::CProcessMemoryReport *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  return 0;
}
