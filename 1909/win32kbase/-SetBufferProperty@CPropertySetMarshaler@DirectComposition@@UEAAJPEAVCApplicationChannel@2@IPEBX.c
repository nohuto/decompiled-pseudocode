/*
 * XREFs of ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C007D280
 * Callers:
 *     <none>
 * Callees:
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00BD8D8 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C00BD960 (--$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C00BD9E8 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C00BDA70 (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00BDAF8 (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C00BDB80 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00BDC08 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00BDC94 (--$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C00BDD24 (--$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValu.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x1C00BDDC8 (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C00BDE4C (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00BDED0 (--$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C00BDF5C (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUProperty.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00BDFEC (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetBufferProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v8; // xmm0_8
  int updated; // eax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]

  v6 = 0;
  if ( a3 > 1 || a5 - 12 > 0x40 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a4;
  v12 = a4[2];
  v11 = v8;
  switch ( v12 )
  {
    case 17:
      if ( (_DWORD)a5 != 16 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<bool>(this, &v11, a4 + 3);
      goto LABEL_46;
    case 18:
      if ( (_DWORD)a5 != 16 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<float>(this, &v11, a4 + 3);
      goto LABEL_46;
    case 35:
      if ( (_DWORD)a5 != 20 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector2>(this, &v11, a4 + 3);
      goto LABEL_46;
    case 52:
      if ( (_DWORD)a5 != 24 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector3>(this, &v11, a4 + 3);
      goto LABEL_46;
    case 69:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( !a3 )
        goto LABEL_29;
      goto LABEL_28;
    case 70:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( !a3 )
        goto LABEL_29;
      goto LABEL_28;
    case 71:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( !a3 )
      {
LABEL_29:
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(this, &v11, a4 + 3);
        goto LABEL_46;
      }
LABEL_28:
      updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(this, &v11, a4 + 3);
      goto LABEL_46;
  }
  if ( v12 != 104 )
  {
    if ( v12 != 265 )
    {
LABEL_47:
      *((_DWORD *)this + 4) |= 0x80u;
      *a6 = 1;
      return v6;
    }
    if ( (_DWORD)a5 == 76 )
    {
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(this, &v11, a4 + 3);
      goto LABEL_46;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)a5 != 36 )
    return (unsigned int)-1073741811;
  if ( a3 )
    updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
  else
    updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
LABEL_46:
  v6 = updated;
  if ( updated >= 0 )
    goto LABEL_47;
  return v6;
}
