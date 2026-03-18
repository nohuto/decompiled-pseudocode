/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0076A54
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0076B9C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0017C6C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0076DA0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2, int a3)
{
  HDC v5; // rdx
  HDC v6; // rdx
  __int64 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(struct PALETTE **)this != ppalDefault )
  {
    v5 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v7, v5, a3);
      if ( v7[0] )
      {
        v7[0][124] = *(_QWORD *)(*(_QWORD *)a2 + 992LL);
        XDCOBJ::vAltUnlockFast(v7);
      }
    }
    v6 = *(HDC *)(*(_QWORD *)a2 + 992LL);
    if ( v6 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v8, v6, a3);
      if ( v8[0] )
      {
        v8[0][123] = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
        XDCOBJ::vAltUnlockFast(v8);
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
}
