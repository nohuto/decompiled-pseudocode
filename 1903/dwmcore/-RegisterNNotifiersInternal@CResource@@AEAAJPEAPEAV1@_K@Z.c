/*
 * XREFs of ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007FD24
 * Callers:
 *     ?SetOrAppendChildren@?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV?$span@PEAVCTransform@@$0?0@gsl@@_N@Z @ 0x18001EB74 (-SetOrAppendChildren@-$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@AEAAJAEBV-$spa.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180029E28 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800D641C (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x1801A2314 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x1801A23BC (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x1801A2478 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D5220 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS@@PEBXI@Z @ 0x1801ED9D0 (-ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMI.c)
 *     ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180206AAC (-SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180211244 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180211CC8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180211DC0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

__int64 __fastcall CResource::RegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  int v8; // eax
  unsigned int v9; // ecx

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
