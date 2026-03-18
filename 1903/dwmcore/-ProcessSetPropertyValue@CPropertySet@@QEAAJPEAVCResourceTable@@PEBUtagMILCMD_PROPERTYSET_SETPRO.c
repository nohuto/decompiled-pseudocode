/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800BB434
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001E014 (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180021888 (--$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800BB5C4 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800BB810 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x1800BBA10 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800BBCA0 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCO.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x1801F3820 (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x1801F38D0 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801F4660 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1801F46E8 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801F477C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        __int64 a4,
        unsigned int a5)
{
  int updated; // eax
  unsigned int v7; // edi
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-18h]
  unsigned int v22; // [rsp+20h] [rbp-18h]
  unsigned int v23; // [rsp+20h] [rbp-18h]
  unsigned int v24; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a3 + 4) == 17 )
  {
    if ( a5 == 4 )
    {
      updated = CPropertySet::AddOrUpdateProperty<bool>(this);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v21 = 90;
      goto LABEL_72;
    }
    v21 = 89;
    goto LABEL_35;
  }
  if ( *((_DWORD *)a3 + 4) != 18 )
  {
    if ( *((_DWORD *)a3 + 4) != 35 )
    {
      if ( *((_DWORD *)a3 + 4) != 52 )
      {
        if ( *((_DWORD *)a3 + 4) == 69 )
        {
          if ( a5 == 16 )
          {
            updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this);
            v7 = updated;
            if ( updated >= 0 )
              return 0;
            v21 = 110;
            goto LABEL_72;
          }
          v21 = 109;
          goto LABEL_35;
        }
        if ( *((_DWORD *)a3 + 4) != 70 )
        {
          switch ( *((_DWORD *)a3 + 4) )
          {
            case 0x47:
              if ( a5 == 16 )
              {
                updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this);
                v7 = updated;
                if ( updated >= 0 )
                  return 0;
                v21 = 120;
                goto LABEL_72;
              }
              v21 = 119;
              break;
            case 0x68:
              if ( a5 == 24 )
              {
                updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this);
                v7 = updated;
                if ( updated >= 0 )
                  return 0;
                v21 = 125;
                goto LABEL_72;
              }
              v21 = 124;
              break;
            case 0x109:
              if ( a5 == 64 )
              {
                updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this);
                v7 = updated;
                if ( updated >= 0 )
                  return 0;
                v21 = 130;
                goto LABEL_72;
              }
              v21 = 129;
              break;
            default:
              ModuleFailFastForHRESULT(2291663875LL, retaddr, a3);
          }
          goto LABEL_35;
        }
        if ( a5 == 16 )
        {
          if ( *((_BYTE *)a3 + 20) )
          {
            v9 = CPropertySet::AddProperty<_D3DCOLORVALUE>(this, *((_DWORD *)a3 + 2), a4);
            v11 = v9;
            if ( v9 >= 0 )
              return 0;
            v22 = 313;
          }
          else
          {
            v17 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL * *((unsigned int *)a3 + 2) + 4) & 0x1FFFFFFF;
            if ( *((_DWORD *)a3 + 3) != (_DWORD)v17 )
            {
              v11 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x88980403, 0x140u, 0LL);
LABEL_50:
              v21 = 115;
              goto LABEL_38;
            }
            v9 = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(this);
            v11 = v9;
            if ( v9 >= 0 )
              return 0;
            v22 = 323;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v22, 0LL);
          goto LABEL_50;
        }
        v21 = 114;
LABEL_35:
        v11 = -2003303421;
LABEL_38:
        v7 = v11;
        v16 = v11;
LABEL_73:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v16, v21, 0LL);
        return v7;
      }
      if ( a5 != 12 )
      {
        v21 = 104;
        goto LABEL_35;
      }
      if ( *((_BYTE *)a3 + 20) )
      {
        v12 = CPropertySet::AddProperty<D2DVector3>(this, *((_DWORD *)a3 + 2), *((_DWORD *)a3 + 3), 0x34u, a4);
        v11 = v12;
        if ( v12 >= 0 )
          return 0;
        v23 = 313;
      }
      else
      {
        v18 = *((unsigned int *)a3 + 2);
        v19 = *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v18 + 4) & 0x1FFFFFFF;
        if ( *((_DWORD *)a3 + 3) != (_DWORD)v19 )
        {
          v11 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, 0x88980403, 0x140u, 0LL);
LABEL_61:
          v21 = 105;
          goto LABEL_38;
        }
        v12 = CPropertySet::UpdateProperty<D2DVector3>(this, v18);
        v11 = v12;
        if ( v12 >= 0 )
          return 0;
        v23 = 323;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v23, 0LL);
      goto LABEL_61;
    }
    if ( a5 != 8 )
    {
      v21 = 99;
      goto LABEL_35;
    }
    if ( *((_BYTE *)a3 + 20) )
    {
      v14 = CPropertySet::AddProperty<D2DVector2>(this, *((_DWORD *)a3 + 2), *((_DWORD *)a3 + 3), 0x23u, a4);
      v11 = v14;
      if ( v14 >= 0 )
        return 0;
      v24 = 313;
    }
    else
    {
      v20 = *(_DWORD *)(*((_QWORD *)this + 10) + 8LL * *((unsigned int *)a3 + 2) + 4) & 0x1FFFFFFF;
      if ( *((_DWORD *)a3 + 3) != (_DWORD)v20 )
      {
        v11 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, 0x88980403, 0x140u, 0LL);
        goto LABEL_37;
      }
      v14 = CPropertySet::UpdateProperty<D2DVector2>(this);
      v11 = v14;
      if ( v14 >= 0 )
        return 0;
      v24 = 323;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v24, 0LL);
LABEL_37:
    v21 = 100;
    goto LABEL_38;
  }
  if ( a5 != 4 )
  {
    v21 = 94;
    goto LABEL_35;
  }
  updated = CPropertySet::AddOrUpdateProperty<float>(this);
  v7 = updated;
  if ( updated < 0 )
  {
    v21 = 95;
LABEL_72:
    v16 = updated;
    goto LABEL_73;
  }
  return 0;
}
