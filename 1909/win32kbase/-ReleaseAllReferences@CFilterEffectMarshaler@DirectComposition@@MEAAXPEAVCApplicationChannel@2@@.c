/*
 * XREFs of ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AE970
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::ReleaseAllReferences(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 12) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v5));
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 12) );
      v4 = *((_QWORD *)this + 7);
    }
    Win32FreePool(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
