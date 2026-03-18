/*
 * XREFs of ?RemoveAllChildren@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA_N@Z @ 0x1C008AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@Z @ 0x1C008AAC8 (-DiscardPendingChildRemoves@CVisualMarshaler@DirectComposition@@IEAAXPEAVCApplicationChannel@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::RemoveAllChildren(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        bool *a3)
{
  __int64 v3; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  __int64 v9; // rax

  v3 = *((_QWORD *)this + 20);
  if ( v3 || *((_QWORD *)this + 23) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    if ( v3 )
    {
      do
      {
        v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
        *((_QWORD *)this + 20) = *((_QWORD *)v8 + 21);
        v9 = *(_QWORD *)v8;
        *((_QWORD *)v8 + 21) = 0LL;
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct DirectComposition::CApplicationChannel *))(v9 + 272))(
          v8,
          a2);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
      }
      while ( *((_QWORD *)this + 20) );
    }
    DirectComposition::CVisualMarshaler::DiscardPendingChildRemoves(this, a2);
    *a3 = 1;
  }
  return 0LL;
}
