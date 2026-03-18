/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000E090 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[22];
  if ( v4 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 46) )
    {
      do
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[22] + v9++));
      while ( v9 < *((_DWORD *)this + 46) );
      v4 = this[22];
    }
    Win32FreePool(v4);
    this[22] = 0LL;
    this[23] = 0LL;
  }
  v5 = this[14];
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    this[14] = 0LL;
    this[16] = 0LL;
    this[15] = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
  v6 = this[36];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)((char *)v6 + 16));
    this[36] = 0LL;
  }
  v7 = this[18];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[18] = 0LL;
    this[19] = 0LL;
    this[20] = 0LL;
  }
  v8 = this[24];
  if ( v8 )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        v11 = v10++;
        v12 = *((_QWORD *)this[24] + 2 * v11);
        --*(_DWORD *)(v12 + 20);
      }
      while ( v10 < *((_DWORD *)this + 50) );
      v8 = this[24];
    }
    Win32FreePool(v8);
    this[24] = 0LL;
    this[25] = 0LL;
  }
}
