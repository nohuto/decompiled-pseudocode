/*
 * XREFs of ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F120
 * Callers:
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007EF70 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007F040 (-ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01AC470 (-ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChann.c)
 *     ?ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01ACBD0 (-ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B2130 (-ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C007F170 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 25) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) + 8 * v6));
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 25) );
      v5 = *((_QWORD *)this + 11);
    }
    Win32FreePool(v5);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 25) = 0;
    *((_DWORD *)this + 24) = 0;
  }
}
