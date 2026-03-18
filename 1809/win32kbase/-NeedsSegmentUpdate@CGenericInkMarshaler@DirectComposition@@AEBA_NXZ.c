/*
 * XREFs of ?NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ @ 0x1C016A724
 * Callers:
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016A4C8 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this)
{
  __int64 v1; // r8
  char v2; // dl

  v1 = *((_QWORD *)this + 15);
  v2 = 0;
  if ( v1
    && (v1 * (unsigned __int64)*((unsigned int *)this + 33) < *((_QWORD *)this + 13)
     || *((_BYTE *)this + 136)
     || (*((_DWORD *)this + 4) & 0x40) == 0) )
  {
    return 1;
  }
  return v2;
}
