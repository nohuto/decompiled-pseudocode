/*
 * XREFs of ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800AF0D4
 * Callers:
 *     ?ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001FB6C (-ProcessLegacyTransformGroupUpdateCommand@@YAJPEAVCTransformGroup@@PEAVCChannelContext@@PEBUtagM.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800AAC78 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800AE670 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET.c)
 *     ??$UnmarshalResourceArray@VCSceneComponent@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCSceneComponent@@PEAVCResourceTable@@_N@Z @ 0x18019AC60 (--$UnmarshalResourceArray@VCSceneComponent@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEA.c)
 *     ??$UnmarshalResourceArray@VCSceneNode@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCSceneNode@@PEAVCResourceTable@@_N@Z @ 0x18019ACB4 (--$UnmarshalResourceArray@VCSceneNode@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVC.c)
 *     ??$UnmarshalResourceArray@VCTransform3D@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCTransform3D@@PEAVCResourceTable@@_N@Z @ 0x18019AD08 (--$UnmarshalResourceArray@VCTransform3D@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEA.c)
 *     ??$UnmarshalResourceArray@VCTransform@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCTransform@@PEAVCResourceTable@@_N@Z @ 0x18019AD5C (--$UnmarshalResourceArray@VCTransform@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVC.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801CC500 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18020FB34 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180210138 (-ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBU.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1802105B8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802106B0 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        void **a6,
        __int64 a7,
        char a8)
{
  unsigned int v8; // ebx
  unsigned int *v10; // r12
  unsigned int v11; // edi
  signed int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // r15
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 Resource; // rax
  unsigned int v19; // [rsp+20h] [rbp-38h]

  v8 = 0;
  v10 = (unsigned int *)a1;
  *a5 = 0;
  *a6 = 0LL;
  if ( a3 > a2 || (a3 & 3) != 0 )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x88980403, 0x56u, 0LL);
LABEL_9:
    if ( (v8 & 0x80000000) != 0 )
      goto LABEL_15;
    return v8;
  }
  v11 = a3 >> 2;
  *a5 = a3 >> 2;
  if ( !(a3 >> 2) )
    return v8;
  v12 = HrMalloc(8uLL, v11, a6);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x61u, 0LL);
    goto LABEL_9;
  }
  v14 = *a6;
  v15 = 0;
  while ( 1 )
  {
    v16 = *v10;
    Resource = 0LL;
    ++v10;
    if ( v16 )
      break;
    if ( !a8 )
    {
      v19 = 114;
      goto LABEL_14;
    }
LABEL_8:
    *v14 = Resource;
    ++v15;
    ++v14;
    if ( v15 >= v11 )
      goto LABEL_9;
  }
  Resource = CResourceTable::GetResource(a7, v16, a4);
  if ( Resource )
    goto LABEL_8;
  v19 = 110;
LABEL_14:
  v8 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x80070006, v19, 0LL);
LABEL_15:
  if ( *a6 )
  {
    operator delete(*a6);
    *a6 = 0LL;
  }
  *a5 = 0;
  return v8;
}
