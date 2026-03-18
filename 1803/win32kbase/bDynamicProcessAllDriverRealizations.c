/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C0049830
 * Callers:
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     pProcessDfbSurfaces2 @ 0x1C0049B30 (pProcessDfbSurfaces2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  bool v7; // si
  __int64 v8; // rbp
  __int64 Objt; // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64); // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = a1;
  v5 = a2;
  v6 = 1;
  v7 = (*(_DWORD *)(a1 + 2120) & 0x10000) != 0 && a2 && (*(_DWORD *)(a2 + 2120) & 0x10000) != 0;
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    Objt = HmgSafeNextObjt(v8, a2);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 560)
      && *(_QWORD *)(Objt + 40)
      && (a3 || (*(_DWORD *)(Objt + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(Objt + 116) & 4) == 0)
      && !pProcessDfbSurfaces2((struct OBJECT *)Objt, v5) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    v11 = *(void (__fastcall **)(__int64))(v18 + 3024);
    if ( v11 )
    {
      v15 = *(_DWORD *)(a1 + 40);
      if ( (v15 & 0x800000) != 0 )
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 3512) + 1520LL);
      else
        v16 = *(_QWORD *)(a1 + 1520);
      if ( v16 )
      {
        do
        {
          v11(v16);
          *(_QWORD *)(v16 + 48) = 0LL;
          v16 = *(_QWORD *)(v16 + 656);
        }
        while ( v16 );
        v15 = *(_DWORD *)(a1 + 40);
      }
      if ( (v15 & 0x800000) != 0 )
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 3512) + 1512LL);
      else
        v17 = *(_QWORD *)(a1 + 1512);
      while ( v17 )
      {
        v11(v17);
        *(_QWORD *)(v17 + 48) = 0LL;
        v17 = *(_QWORD *)(v17 + 656);
      }
    }
    v12 = 0LL;
    while ( 1 )
    {
      LOBYTE(v10) = 16;
      v13 = HmgSafeNextObjt(v12, v10);
      if ( !v13 )
        break;
      v12 = *(_QWORD *)v13;
      *(_DWORD *)(v13 + 112) = -1;
      *(_DWORD *)(v13 + 44) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported(0LL) >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v18);
  }
  return v6;
}
