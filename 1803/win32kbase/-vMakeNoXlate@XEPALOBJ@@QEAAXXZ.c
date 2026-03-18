/*
 * XREFs of ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C003E440
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003F7FC (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall XEPALOBJ::vMakeNoXlate(XEPALOBJ *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD **)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v3 )
  {
    if ( v3 != v1[9] )
    {
      Win32FreePool(v3);
      v1 = *(_QWORD **)this;
    }
    v1[11] = 0LL;
    v1 = *(_QWORD **)this;
  }
  v4 = v1[10];
  if ( v4 )
  {
    if ( v4 != v1[9] )
    {
      Win32FreePool(v4);
      v1 = *(_QWORD **)this;
    }
    v1[10] = 0LL;
    v1 = *(_QWORD **)this;
  }
  v5 = v1[9];
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
  }
}
