/*
 * XREFs of ?SetInput@CEffectInputSet@DirectComposition@@QEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@@Z @ 0x1C01B1B7C
 * Callers:
 *     ?SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01B0A20 (-SetReferenceProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::SetInput(
        DirectComposition::CEffectInputSet *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  DirectComposition::CResourceMarshaler *v10; // rcx

  if ( a3 >= *(_DWORD *)this )
    return 3221225485LL;
  v7 = *((_QWORD *)this + 1);
  v8 = a3;
  v9 = *(struct DirectComposition::CResourceMarshaler **)(v7 + 8LL * a3);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    v7 = *((_QWORD *)this + 1);
  }
  *(_QWORD *)(v7 + 8 * v8) = a4;
  v10 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * v8);
  if ( v10 )
    DirectComposition::CResourceMarshaler::AddRef(v10);
  *((_DWORD *)this + 8) = 0;
  return 0LL;
}
