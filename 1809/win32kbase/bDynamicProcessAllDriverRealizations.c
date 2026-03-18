/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C003DF70
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0 (vDynamicConvertNewSurfaceDCs.c)
 *     pProcessDfbSurfaces2 @ 0x1C00A02F0 (pProcessDfbSurfaces2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r14d
  bool v7; // si
  __int64 v8; // rbp
  __int64 Objt; // rax
  void (__fastcall *v10)(__int64); // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v6 = 1;
  v7 = (*(_DWORD *)(a1 + 2128) & 0x10000) != 0 && a2 && (*(_DWORD *)(a2 + 2128) & 0x10000) != 0;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 5);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 560)
      && *(_QWORD *)(Objt + 40)
      && (a3 || (*(_DWORD *)(Objt + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(Objt + 116) & 4) == 0)
      && !pProcessDfbSurfaces2((struct OBJECT *)Objt, a2) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64))(v17 + 3032);
    if ( v10 )
    {
      v14 = *(_DWORD *)(a1 + 40);
      if ( (v14 & 0x800000) != 0 )
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3520) + 1528LL);
      else
        v15 = *(_QWORD *)(a1 + 1528);
      if ( v15 )
      {
        do
        {
          v10(v15);
          *(_QWORD *)(v15 + 48) = 0LL;
          v15 = *(_QWORD *)(v15 + 672);
        }
        while ( v15 );
        v14 = *(_DWORD *)(a1 + 40);
      }
      if ( (v14 & 0x800000) != 0 )
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 3520) + 1520LL);
      else
        v16 = *(_QWORD *)(a1 + 1520);
      while ( v16 )
      {
        v10(v16);
        *(_QWORD *)(v16 + 48) = 0LL;
        v16 = *(_QWORD *)(v16 + 672);
      }
    }
    LODWORD(v11) = 0;
    while ( 1 )
    {
      v12 = HmgSafeNextObjt(v11, 16);
      if ( !v12 )
        break;
      v11 = *(_QWORD *)v12;
      *(_DWORD *)(v12 + 112) = -1;
      *(_DWORD *)(v12 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported(0LL) >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v17);
  }
  return v6;
}
