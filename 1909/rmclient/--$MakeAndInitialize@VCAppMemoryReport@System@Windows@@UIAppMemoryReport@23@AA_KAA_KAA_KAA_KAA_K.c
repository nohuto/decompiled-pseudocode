/*
 * XREFs of ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIAppMemoryReport@23@@Z @ 0x100083E0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UAGJPAPAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@QAE@XZ @ 0x100085BA (--0-$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Mi.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UAGKXZ @ 0x10009EC0 (-Release@CAppMemoryReport@System@Windows@@UAGKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGJABU_GUID@@PAPAX@Z @ 0x10009FC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemory.c)
 *     ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UAGJ_K0000@Z @ 0x10009FE0 (-RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UAGJ_K0000@Z.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CAppMemoryReport,Windows::System::IAppMemoryReport,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
        _DWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int Interface; // eax
  unsigned int (__stdcall *v11)(Windows::System::CAppMemoryReport *__hidden); // ebx
  Windows::System::CAppMemoryReport *v14; // [esp+14h] [ebp-18h]

  *a1 = 0;
  v7 = operator new(0x40u, (const struct std::nothrow_t *)std::nothrow);
  v8 = v7;
  v14 = (Windows::System::CAppMemoryReport *)v7;
  if ( !v7 )
    return -2147024882;
  Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>(v7);
  *v8 = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
  v8[1] = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  v8[2] = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
  v8[3] = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  v8[12] = 0;
  v8[13] = 0;
  v9 = Windows::System::CAppMemoryReport::RuntimeClassInitialize(v14, *a2, *a3, *a4, *a5, *a6);
  if ( v9 >= 0 )
  {
    if ( **(_DWORD (__stdcall ***)(_DWORD, _DWORD, _DWORD))v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::QueryInterface(
                    v14,
                    &_GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
                    a1);
    else
      Interface = (**(int (__thiscall ***)(_DWORD, Windows::System::CAppMemoryReport *, GUID *, _DWORD *))v14)(
                    **(_DWORD **)v14,
                    v14,
                    &_GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
                    a1);
    v9 = Interface;
  }
  v11 = *(unsigned int (__stdcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_DWORD *)v14 + 8);
  if ( v11 == Windows::System::CAppMemoryReport::Release )
    Windows::System::CAppMemoryReport::Release(v14);
  else
    ((void (__thiscall *)(_DWORD, Windows::System::CAppMemoryReport *))v11)(*(_DWORD *)(*(_DWORD *)v14 + 8), v14);
  return v9;
}
