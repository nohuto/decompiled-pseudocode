/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x18007FB04
 * Callers:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x18007FA30 (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x18007D42C (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180080284 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9E60 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddLight(__int128 **a1, __int64 a2, int a3, char a4)
{
  int v5; // esi
  __int128 **v6; // rcx
  char v7; // r14
  __int128 *v10; // rdx
  __int128 *i; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  __int128 *v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = a1 + 38;
  v7 = 0;
  v10 = v6[1];
  if ( a3 )
  {
    *(_QWORD *)&v18 = a2;
    BYTE8(v18) = a4;
    if ( v6[2] == v10 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>((__int64)v6, v10, &v18);
    }
    else
    {
      *v10 = v18;
      ++v6[1];
    }
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
  }
  else
  {
    for ( i = *v6; i != v10; ++i )
    {
      if ( *(_QWORD *)i == a2 )
        goto LABEL_8;
    }
    v12 = *(_QWORD *)(a2 + 24);
    if ( (v12 & 2) != 0 )
      v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v13 = *(_QWORD *)(a2 + 24) & 1LL;
    v14 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1, v13);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x51Au, 0LL);
      goto LABEL_11;
    }
    v7 = 1;
LABEL_8:
    *(_QWORD *)&v18 = a2;
    v16 = a1[36];
    BYTE8(v18) = a4;
    if ( a1[37] == v16 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>((__int64)(a1 + 35), v16, &v18);
    }
    else
    {
      *v16 = v18;
      ++a1[36];
    }
  }
  (*((void (__fastcall **)(__int128 **, __int64))*a1 + 8))(a1, 5LL);
  (*((void (__fastcall **)(__int128 **, _QWORD, __int64))*a1 + 8))(a1, *(_BYTE *)(a2 + 161) != 0 ? 1 : 11, a2);
LABEL_11:
  if ( v5 < 0 && v7 )
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
  return (unsigned int)v5;
}
