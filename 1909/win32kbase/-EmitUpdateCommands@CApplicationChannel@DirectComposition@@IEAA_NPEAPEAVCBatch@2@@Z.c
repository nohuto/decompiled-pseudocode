/*
 * XREFs of ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BE80
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000B4F0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 *i; // rbx
  __int64 v5; // rax
  char result; // al

  for ( i = (__int64 *)*((_QWORD *)this + 51); ; i = (__int64 *)*((_QWORD *)this + 51) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 51) = i[1];
    v5 = *i;
    i[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, struct DirectComposition::CBatch **))(v5 + 80))(i, a2) )
      break;
    *((_DWORD *)i + 4) &= ~2u;
  }
  i[1] = *((_QWORD *)this + 51);
  result = 0;
  *((_QWORD *)this + 51) = i;
  return result;
}
