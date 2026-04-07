/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800821A4
 * Callers:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003FE98 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800402BC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180012714 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002507C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180081D30 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        char a3)
{
  char *v3; // rbx
  __int64 v4; // r11
  struct CWindowData *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (char *)this + 16;
  if ( a3 )
  {
    ++*((_DWORD *)this + 20);
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, &v5);
  }
  else if ( !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 16, &v5) )
  {
    --*(_DWORD *)(v4 + 80);
    DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)v3, &v5);
  }
}
