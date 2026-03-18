/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0093CAC
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0093BF0 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00141E8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0093D50 (-InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        void **a4)
{
  unsigned __int64 v5; // rcx
  DirectComposition::CSharedSectionMarshaler *v8; // rbx
  int v9; // edi

  v5 = (unsigned int)(a2 - 1);
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v8 = *(DirectComposition::CSharedSectionMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CSharedSectionMarshaler *, __int64))(*(_QWORD *)v8 + 120LL))(
         v8,
         167LL) )
  {
    v9 = DirectComposition::CSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v9 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
