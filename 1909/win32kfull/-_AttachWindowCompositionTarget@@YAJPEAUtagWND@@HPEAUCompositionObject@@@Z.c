/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00161A8
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0016088 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C0015EEC (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00163A8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0017C2C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C010D070 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  char v6; // si
  signed int v7; // ebx
  struct tagWND *v8; // rdx
  CWindowProp *v9; // rdi
  int v11; // eax
  bool v12; // zf
  CWindowProp *v13; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v13) )
  {
    v9 = v13;
    v11 = 0;
    if ( a2 )
      v12 = *((_QWORD *)v13 + 2) == 0LL;
    else
      v12 = *((_QWORD *)v13 + 3) == 0LL;
    LOBYTE(v11) = !v12;
    v7 = v11 != 0 ? 0xC0000022 : 0;
  }
  else
  {
    v7 = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v13);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = a1;
    v9 = v13;
    if ( (unsigned int)CWindowProp::SetProp(v13, v8) )
    {
      v6 = 1;
    }
    else
    {
      (**(void (__fastcall ***)(CWindowProp *))v9)(v9);
      v9 = 0LL;
      v7 = -1073741790;
    }
  }
  if ( v7 < 0 || (v7 = CHwndTargetProp::SetSystemVisual(v9, a2, a3), v7 < 0) )
  {
    if ( v6 )
      CWindowProp::RemoveAndDeleteProp(v9);
  }
  return (unsigned int)v7;
}
