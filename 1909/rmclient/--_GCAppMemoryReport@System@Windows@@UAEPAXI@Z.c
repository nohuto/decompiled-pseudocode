/*
 * XREFs of ??_GCAppMemoryReport@System@Windows@@UAEPAXI@Z @ 0x10009F70
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10009ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@.c)
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

Windows::System::CAppMemoryReport *__thiscall Windows::System::CAppMemoryReport::`scalar deleting destructor'(
        Windows::System::CAppMemoryReport *this,
        char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
  *((_DWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  *((_DWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
  *((_DWORD *)this + 3) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
