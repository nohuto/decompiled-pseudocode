/*
 * XREFs of ??0CProcessMemoryReport@System@Windows@@QAE@XZ @ 0x10010397
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AAKAAK@Details@WRL@Microsoft@@YGJPAPAUIProcessMemoryReport@System@Windows@@AAK1@Z @ 0x10010277 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AAKAAK@Detai.c)
 * Callees:
 *     ??0?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@QAE@XZ @ 0x10010357 (--0-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@QAE@XZ.c)
 */

Windows::System::CProcessMemoryReport *__thiscall Windows::System::CProcessMemoryReport::CProcessMemoryReport(
        Windows::System::CProcessMemoryReport *this)
{
  Windows::System::CProcessMemoryReport *result; // eax

  Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>(this);
  *(_DWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  result = this;
  *((_DWORD *)this + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_DWORD *)this + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  return result;
}
