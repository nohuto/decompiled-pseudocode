/*
 * XREFs of ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C0266A0C
 * Callers:
 *     ?CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0265200 (-CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C0265260 (-CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265670 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C02673D0 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C029397C (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Release(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    operator delete(this);
  }
  return v1;
}
