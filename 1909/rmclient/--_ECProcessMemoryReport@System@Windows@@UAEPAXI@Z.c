/*
 * XREFs of ??_ECProcessMemoryReport@System@Windows@@UAEPAXI@Z @ 0x100105E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

Windows::System::CProcessMemoryReport *__thiscall Windows::System::CProcessMemoryReport::`vector deleting destructor'(
        Windows::System::CProcessMemoryReport *this,
        char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *((_DWORD *)this + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_DWORD *)this + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
