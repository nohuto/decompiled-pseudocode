/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AAKAAK@Details@WRL@Microsoft@@YGJPAPAUIProcessMemoryReport@System@Windows@@AAK1@Z @ 0x10010277
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z @ 0x100108C0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??0CProcessMemoryReport@System@Windows@@QAE@XZ @ 0x10010397 (--0CProcessMemoryReport@System@Windows@@QAE@XZ.c)
 */

int __userpurge Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned long &,unsigned long &>@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        int a3@<edi>,
        _DWORD *a4)
{
  Windows::System::CProcessMemoryReport *v5; // eax
  int v6; // ebx
  _DWORD **v7; // edi

  *a2 = 0;
  v5 = (Windows::System::CProcessMemoryReport *)operator new(0x28u);
  if ( !v5 )
    return -2147024882;
  v7 = (_DWORD **)Windows::System::CProcessMemoryReport::CProcessMemoryReport(v5);
  v6 = ((int (__thiscall *)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v7)[9])(
         (*v7)[9],
         v7,
         *a1,
         0,
         *a4,
         0,
         a3);
  if ( v6 >= 0 )
    v6 = ((int (__thiscall *)(_DWORD, _DWORD **, GUID *, _DWORD *))**v7)(
           **v7,
           v7,
           &_GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
           a2);
  ((void (__thiscall *)(_DWORD))(*v7)[2])((*v7)[2]);
  return v6;
}
