/*
 * XREFs of NtDCompositionSetChannelCommitCompletionEvent @ 0x1C005AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010378 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C005AAC8 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCommitCompletionEvent(unsigned int a1, void *a2, int a3)
{
  DirectComposition::CApplicationChannel *v3; // rdi
  signed int v6; // ebx
  signed int v7; // eax
  struct DirectComposition::CApplicationChannel *v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  v6 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v3 = v9;
    v6 = v7;
  }
  if ( v6 >= 0 )
  {
    v6 = DirectComposition::CApplicationChannel::SetCommitCompletionEvent(v3, a2, a3 != 0);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v3)(v3);
  }
  return (unsigned int)v6;
}
