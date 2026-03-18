/*
 * XREFs of ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007B54C
 * Callers:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001CD24 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800AAC78 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800AE670 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A0A54 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A0AFC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A0BB8 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D3AB0 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS@@PEBXI@Z @ 0x1801EC260 (-ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMI.c)
 *     ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1802053BC (-SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18020FB34 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1802105B8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802106B0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800BBEBC (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CResource::RegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  signed int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = CResource::RegisterNotifier(this, a2[v4]);
      v3 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v4 >= a3 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x104u, 0LL);
    CResource::UnRegisterNNotifiersInternal(this, a2, v4);
  }
  return v3;
}
