/*
 * XREFs of ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000E130
 * Callers:
 *     ?SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C6B0 (-SetReferenceProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000D650 (-SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0171200 (-SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0177C70 (-SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000E0E0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C016871C (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  bool *v5; // r14
  int WeakReferenceBase; // esi
  bool *v9; // rdi
  struct DirectComposition::CWeakReferenceBase *v10; // rdx

  v5 = a5;
  WeakReferenceBase = 0;
  *a5 = 0;
  if ( a3 == 2 )
  {
    v9 = 0LL;
    a5 = 0LL;
    if ( a4 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            a2,
                            a4,
                            (struct DirectComposition::CWeakReferenceBase **)&a5);
      if ( WeakReferenceBase < 0 )
        return (unsigned int)WeakReferenceBase;
      v9 = a5;
    }
    v10 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
    if ( v10 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v10);
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_QWORD *)this + 7) = v9;
    *v5 = 1;
  }
  return (unsigned int)WeakReferenceBase;
}
