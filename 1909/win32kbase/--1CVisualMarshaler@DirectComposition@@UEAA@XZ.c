/*
 * XREFs of ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0010C08
 * Callers:
 *     ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0001BA0 (--_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0005610 (--_ECCrossChannelParentVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0010350 (--_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00853B0 (--_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00969E0 (--_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2E00 (--_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECGlyphRunVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2EF0 (--_ECGlyphRunVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A30F0 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A3170 (--_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0010C3C (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::~CVisualMarshaler(DirectComposition::CVisualMarshaler *this)
{
  __int64 v1; // r9

  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CVisualMarshaler *)((char *)this + 304));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CResourceMarshalerArray *)(v1 + 280));
}
