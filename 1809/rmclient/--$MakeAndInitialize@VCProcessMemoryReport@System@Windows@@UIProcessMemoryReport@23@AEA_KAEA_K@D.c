/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18000CC64
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000D5D0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180009404 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x18000CDB4 (--0CProcessMemoryReport@System@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  Windows::System::CProcessMemoryReport *v6; // rax
  int v7; // edi
  __int64 v8; // rbx

  *a1 = 0LL;
  v6 = (Windows::System::CProcessMemoryReport *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = Windows::System::CProcessMemoryReport::CProcessMemoryReport(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(
             v8,
             &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
             a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
