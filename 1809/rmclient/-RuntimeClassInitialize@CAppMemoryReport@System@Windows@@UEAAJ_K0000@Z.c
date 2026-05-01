/*
 * XREFs of ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K0000@Z @ 0x180007E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::RuntimeClassInitialize(
        Windows::System::CAppMemoryReport *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax

  *((_QWORD *)this + 9) = a5;
  *((_QWORD *)this + 10) = a6;
  result = 0LL;
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = a4;
  return result;
}
