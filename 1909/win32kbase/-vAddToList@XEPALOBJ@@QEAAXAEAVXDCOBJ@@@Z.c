/*
 * XREFs of ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00769B4
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0076DA0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, __int64 **a2)
{
  __int64 *v3; // r8
  HDC v4; // rdx
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(struct PALETTE **)this == ppalDefault )
  {
    (*a2)[123] = 0LL;
    (*a2)[124] = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    v3 = *a2;
    (*a2)[123] = *(_QWORD *)(*(_QWORD *)this + 40LL);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **a2;
    (*a2)[124] = 0LL;
    v4 = (HDC)(*a2)[123];
    if ( v4 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v5, v4, (int)v3);
      if ( v5[0] )
      {
        v5[0][124] = **a2;
        XDCOBJ::vAltUnlockFast(v5);
      }
    }
  }
}
