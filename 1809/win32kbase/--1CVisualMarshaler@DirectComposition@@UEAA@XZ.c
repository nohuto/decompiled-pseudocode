/*
 * XREFs of ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0019C9C
 * Callers:
 *     ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0001560 (--_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0004830 (--_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0017E20 (--_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00720A0 (--_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0083260 (--_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0168110 (--_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0168330 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0168370 (--_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0019CD0 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::~CVisualMarshaler(DirectComposition::CVisualMarshaler *this)
{
  __int64 v1; // r9

  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CVisualMarshaler *)((char *)this + 304));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CResourceMarshalerArray *)(v1 + 280));
}
