/*
 * XREFs of ?EmitSharedSectionUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000EE34
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000E430 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitSharedSectionUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 i; // rcx
  __int64 v6; // rax

  for ( i = *((_QWORD *)this + 52);
        i
     && (*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i + 80LL))(i, a2);
        *((_QWORD *)this + 52) = i )
  {
    *(_DWORD *)(*((_QWORD *)this + 52) + 16LL) &= ~2u;
    v6 = *((_QWORD *)this + 52);
    i = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  return *((_QWORD *)this + 52) == 0LL;
}
