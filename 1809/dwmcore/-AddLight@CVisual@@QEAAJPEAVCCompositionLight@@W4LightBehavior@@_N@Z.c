/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800A2C88
 * Callers:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800A2AD8 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1801B5E6C (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x1800A15D0 (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddLight(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  int v5; // esi
  unsigned __int64 v6; // rcx
  char v7; // r14
  char *v10; // rdx
  __int128 *i; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  char *v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = a1 + 304;
  v7 = 0;
  v10 = *(char **)(v6 + 8);
  if ( a3 )
  {
    *(_QWORD *)&v18 = a2;
    BYTE8(v18) = a4;
    if ( *(char **)(v6 + 16) == v10 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>((__int128 **)v6, v10, &v18);
    }
    else
    {
      *(_OWORD *)v10 = v18;
      *(_QWORD *)(v6 + 8) += 16LL;
    }
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), a1);
  }
  else
  {
    for ( i = *(__int128 **)v6; i != (__int128 *)v10; ++i )
    {
      if ( *(_QWORD *)i == a2 )
        goto LABEL_8;
    }
    v12 = *(_QWORD *)(a2 + 24);
    if ( (v12 & 2) != 0 )
      v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v13 = *(_QWORD *)(a2 + 24) & 1LL;
    v14 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), a1, v13);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4C5u);
      goto LABEL_11;
    }
    v7 = 1;
LABEL_8:
    *(_QWORD *)&v18 = a2;
    v16 = *(char **)(a1 + 288);
    BYTE8(v18) = a4;
    if ( *(char **)(a1 + 296) == v16 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>((__int128 **)(a1 + 280), v16, &v18);
    }
    else
    {
      *(_OWORD *)v16 = v18;
      *(_QWORD *)(a1 + 288) += 16LL;
    }
  }
  (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 5LL);
  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
    a1,
    *(_BYTE *)(a2 + 153) != 0 ? 1 : 11,
    a2);
LABEL_11:
  if ( v5 < 0 && v7 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), a1);
  return (unsigned int)v5;
}
