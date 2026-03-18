/*
 * XREFs of ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B40D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0082A40 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CConditionalExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = (__int64)this[14];
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[14] + v5));
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 30) );
      v4 = (__int64)this[14];
    }
    Win32FreePool(v4);
    this[14] = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
  this[16] = 0LL;
}
