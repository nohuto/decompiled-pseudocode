/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007EF70
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F120 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  __int64 v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(this, a2);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 46) )
    {
      do
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 22) + 8LL * v9++));
      while ( v9 < *((_DWORD *)this + 46) );
      v4 = *((_QWORD *)this + 22);
    }
    Win32FreePool(v4);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
  v6 = *((_QWORD *)this + 36);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)(v6 + 16));
    *((_QWORD *)this + 36) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        v11 = v10++;
        v12 = *(_QWORD *)(*((_QWORD *)this + 24) + 16 * v11);
        --*(_DWORD *)(v12 + 20);
      }
      while ( v10 < *((_DWORD *)this + 50) );
      v8 = *((_QWORD *)this + 24);
    }
    Win32FreePool(v8);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
}
