/*
 * XREFs of ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C007D858
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0071CBC (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C0071E54 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C007D7EC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C005A758 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::NewRemovingBinding(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding *a2)
{
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rax

  if ( *((int *)this + 6) > 2 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(a2, this);
  }
  else
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 2) = *((_DWORD *)a2 + 2) & 0xFFFFFFFA | 4;
    v5 = (struct DirectComposition::CResourceMarshaler *)(**v4)(v4);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v5);
    *(_QWORD *)a2 = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = a2;
  }
}
