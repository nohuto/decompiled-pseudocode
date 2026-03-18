/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rcx
  __int64 v6; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
  v4 = this[8];
  this[7] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[9];
  this[8] = 0LL;
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[9] + v6));
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 20) );
      v5 = this[9];
    }
    Win32FreePool(v5);
    this[9] = 0LL;
    *((_DWORD *)this + 20) = 0;
    *((_DWORD *)this + 21) = 0;
  }
}
