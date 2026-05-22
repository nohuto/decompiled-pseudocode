/*
 * XREFs of ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801072D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800436CC (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::GetCursors(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  __int64 v5; // rbx
  char *v6; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h]

  v9 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v3 = *(_QWORD **)(a1 + 56);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[4];
    v8 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(char **)(a2 + 8);
    if ( *(char **)(a2 + 16) == v6 )
    {
      std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        (char **)a2,
        v6,
        (char *)&v8);
      v5 = v8;
    }
    else
    {
      *(_QWORD *)v6 = 0LL;
      if ( v6 != (char *)&v8 )
      {
        *(_QWORD *)v6 = v5;
        v5 = 0LL;
      }
      *(_QWORD *)(a2 + 8) += 8LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a2;
}
