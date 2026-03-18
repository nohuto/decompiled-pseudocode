/*
 * XREFs of ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801F3820
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F3980 (--$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuat.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801F45D8 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DVector4>(CResource *this, __int64 a2, __int64 a3)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DQuaternion>(this, *(_DWORD *)(a2 + 8), a3);
    v6 = updated;
    if ( updated < 0 )
    {
      v9 = 313;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, v9, 0LL);
      return v6;
    }
    return 0;
  }
  v7 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL * *(unsigned int *)(a2 + 8) + 4) & 0x1FFFFFFF;
  if ( *(_DWORD *)(a2 + 12) == (_DWORD)v7 )
  {
    updated = CPropertySet::UpdateProperty<D2DQuaternion>(this);
    v6 = updated;
    if ( updated < 0 )
    {
      v9 = 323;
      goto LABEL_9;
    }
    return 0;
  }
  v6 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x88980403, 0x140u, 0LL);
  return v6;
}
