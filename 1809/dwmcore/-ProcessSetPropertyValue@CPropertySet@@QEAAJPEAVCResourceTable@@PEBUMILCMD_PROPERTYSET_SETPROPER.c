/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800A400C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18006DCE4 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVA.c)
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x180073098 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180073AB8 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800A1F10 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@.c)
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A3DE8 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A3EB0 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800A43BC (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18016FBD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801B08A4 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801B096C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        _OWORD *a4,
        unsigned int a5)
{
  unsigned int v6; // ecx
  signed int v7; // ebx
  int updated; // eax
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int v18; // [rsp+20h] [rbp-18h]
  unsigned int v19; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_DWORD *)a3 + 4) )
  {
    case 0x11:
      v6 = a5;
      v7 = a5 != 4 ? 0x88980403 : 0;
      if ( a5 == 4 )
      {
        updated = CPropertySet::AddOrUpdateProperty<bool>(this, a3, a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 96;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 95;
      goto LABEL_58;
    case 0x12:
      v6 = a5;
      v7 = a5 != 4 ? 0x88980403 : 0;
      if ( a5 != 4 )
      {
        v18 = 100;
        goto LABEL_58;
      }
      if ( *((_DWORD *)a3 + 5) )
      {
        v10 = CPropertySet::AddProperty<float>((__int64)this, *((_DWORD *)a3 + 2), *((_DWORD *)a3 + 3), 18, a4);
        v7 = v10;
        if ( v10 >= 0 )
          return 0;
        v19 = 333;
      }
      else
      {
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 80) )
          goto LABEL_49;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( *(_DWORD *)(v15 + 12) != (*(_DWORD *)(*v14 + 8 * v13 + 4) & 0x1FFFFFFF) )
        {
LABEL_49:
          v7 = -2003303421;
          v19 = 341;
          v12 = -2003303421;
          goto LABEL_50;
        }
        v10 = CPropertySet::UpdateProperty<float>(v16, v13, 18LL);
        v7 = v10;
        if ( v10 >= 0 )
          return 0;
        v19 = 344;
      }
      v12 = v10;
LABEL_50:
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, v19);
      if ( v7 >= 0 )
        return 0;
      v18 = 101;
      goto LABEL_58;
    case 0x23:
      v6 = a5;
      v7 = a5 != 8 ? 0x88980403 : 0;
      if ( a5 == 8 )
      {
        updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, (__int64)a3, (__int64)a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 106;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 105;
      goto LABEL_58;
    case 0x34:
      v6 = a5;
      v7 = a5 != 12 ? 0x88980403 : 0;
      if ( a5 == 12 )
      {
        updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, (__int64)a3, (__int64)a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 111;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 110;
      goto LABEL_58;
    case 0x45:
      v6 = a5;
      v7 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 == 16 )
      {
        updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, a3, a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 116;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 115;
      goto LABEL_58;
    case 0x46:
      v6 = a5;
      v7 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 == 16 )
      {
        updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, (__int64)a3, (__int64)a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 121;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 120;
      goto LABEL_58;
    case 0x47:
      v6 = a5;
      v7 = a5 != 16 ? 0x88980403 : 0;
      if ( a5 == 16 )
      {
        updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, a3, a4);
        v7 = updated;
        if ( updated < 0 )
        {
          v18 = 126;
          goto LABEL_13;
        }
        return 0;
      }
      v18 = 125;
      goto LABEL_58;
  }
  if ( *((_DWORD *)a3 + 4) != 104 )
  {
    if ( *((_DWORD *)a3 + 4) != 265 )
      ModuleFailFastForHRESULT(2291663875LL, retaddr);
    v6 = a5;
    v7 = a5 != 64 ? 0x88980403 : 0;
    if ( a5 == 64 )
    {
      updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
      v7 = updated;
      if ( updated < 0 )
      {
        v18 = 136;
LABEL_13:
        v9 = updated;
LABEL_59:
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v9, v18);
        return (unsigned int)v7;
      }
      return 0;
    }
    v18 = 135;
LABEL_58:
    v9 = v7;
    goto LABEL_59;
  }
  v6 = a5;
  v7 = a5 != 24 ? 0x88980403 : 0;
  if ( a5 != 24 )
  {
    v18 = 130;
    goto LABEL_58;
  }
  updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this, a3, (__int64)a4);
  v7 = updated;
  if ( updated < 0 )
  {
    v18 = 131;
    goto LABEL_13;
  }
  return 0;
}
