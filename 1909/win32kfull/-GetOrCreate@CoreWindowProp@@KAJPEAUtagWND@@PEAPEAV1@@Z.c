/*
 * XREFs of ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C0016910
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C00164A8 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0017C2C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::GetOrCreate(struct tagWND *a1, struct CoreWindowProp **a2)
{
  int Window; // ebx

  *a2 = 0LL;
  Window = 0;
  if ( !(unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, a2) )
  {
    Window = CWindowProp::CreateWindowProp<CoreWindowProp>(a2);
    if ( Window >= 0 && !(unsigned int)CWindowProp::SetProp(*a2, a1) )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      *a2 = 0LL;
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)Window;
}
