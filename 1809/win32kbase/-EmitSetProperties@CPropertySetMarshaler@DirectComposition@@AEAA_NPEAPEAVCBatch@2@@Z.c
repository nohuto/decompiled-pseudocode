/*
 * XREFs of ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BEB4
 * Callers:
 *     ?EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AF50 (-EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0008ED8 (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C000A0EC (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C000BCF4 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x1C000BFE4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1C000C034 (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 *     ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00804E8 (--$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposi.c)
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00859EC (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C008BD0C (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C016CE24 (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C016CF30 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperties(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  unsigned int v5; // esi
  int DataType; // eax
  char v7; // al

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 16) )
    {
      while ( !(unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                               (char *)this + 56,
                               v5) )
      {
LABEL_9:
        if ( ++v5 >= *((_DWORD *)this + 16) )
          goto LABEL_10;
      }
      DataType = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                   (char *)this + 56,
                   v5);
      switch ( DataType )
      {
        case 17:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetBooleanValue,bool>(this, a2, v5);
          break;
        case 18:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetScalarValue,float>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 35:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector2Value,D2DVector2>(
                 this,
                 a2,
                 v5);
          break;
        case 52:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector3Value,D2DVector3>(
                 this,
                 a2,
                 v5);
          break;
        case 69:
          goto LABEL_24;
        case 70:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
                 this,
                 a2,
                 v5);
          break;
        case 71:
LABEL_24:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetQuaternionValue,D2DQuaternion>(
                 this,
                 a2,
                 v5);
          break;
        case 104:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 265:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        default:
LABEL_8:
          if ( !v4 )
            return v4;
          goto LABEL_9;
      }
      v4 = v7;
      goto LABEL_8;
    }
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  return v4;
}
