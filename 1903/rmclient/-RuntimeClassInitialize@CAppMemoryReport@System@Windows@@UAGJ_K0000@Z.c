/*
 * XREFs of ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UAGJ_K0000@Z @ 0x10009FE0
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K.c)
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::RuntimeClassInitialize(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  *((_QWORD *)this + 6) = a5;
  *((_QWORD *)this + 7) = a6;
  return 0;
}
