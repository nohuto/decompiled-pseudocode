/*
 * XREFs of ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18008EF58
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008ED30 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008F0A0 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x18008F678 (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Initialize(struct ICoverageSet **this)
{
  _QWORD *v1; // rsi
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v1 = this + 49;
  v3 = CArrayBasedCoverageSet::Create(this + 49);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x24u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
    v6 = CContentBounder::Create(this[79], this + 143);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x28u);
    }
    else
    {
      *((_DWORD *)this + 294) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(this + 144), 0x28u);
    }
  }
  return v5;
}
