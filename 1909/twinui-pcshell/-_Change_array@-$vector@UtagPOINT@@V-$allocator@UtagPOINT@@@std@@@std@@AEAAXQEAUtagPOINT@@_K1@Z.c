/*
 * XREFs of ?_Change_array@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXQEAUtagPOINT@@_K1@Z @ 0x18018947C
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x180187048 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1803C68B0 (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@QE.c)
 *     ??$_Emplace_reallocate@U?$pair@MH@std@@@?$vector@U?$pair@MH@std@@V?$allocator@U?$pair@MH@std@@@2@@std@@QEAAPEAU?$pair@MH@1@QEAU21@$$QEAU21@@Z @ 0x180420CAC (--$_Emplace_reallocate@U-$pair@MH@std@@@-$vector@U-$pair@MH@std@@V-$allocator@U-$pair@MH@std@@@2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<tagPOINT>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
