/*
 * XREFs of ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C01228D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00B3230 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C0122934 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::GetOrCreate(struct tagWND *a1, struct CoreWindowProp **a2)
{
  int Window; // ebx

  *a2 = 0LL;
  Window = 0;
  if ( !CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)a2) )
  {
    Window = CWindowProp::CreateWindowProp<CoreWindowProp>(a2);
    if ( Window >= 0 && !(unsigned int)CWindowProp::SetProp(*a2, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      *a2 = 0LL;
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)Window;
}
