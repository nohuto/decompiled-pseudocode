/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000453C
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0001C10 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00044C0 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _UNKNOWN **v2; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = (_QWORD *)((char *)a1 + 248);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 31); i != v3; i = (_QWORD *)*i )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(i - 44) + 280LL))(i - 44, a2);
    if ( (_BYTE)v2 )
    {
      LODWORD(v2) = DirectComposition::CApplicationChannel::ReleaseResource(
                      a1,
                      (struct DirectComposition::CResourceMarshaler *)(i - 44));
      return (int)v2;
    }
  }
  return (int)v2;
}
