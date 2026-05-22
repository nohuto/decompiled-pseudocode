/*
 * XREFs of ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800062B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180006370 (--$_Emplace_reallocate@V-$ComPtr@UICursor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UICursor@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall DWMCursorBroker::GetCursors(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+10h]

  v9 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = *(_QWORD **)(a1 + 56);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = i[4];
    v8 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (__int64 *)a2[1];
    if ( (__int64 *)a2[2] == v7 )
    {
      std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(a2, v7, &v8);
      v6 = v8;
    }
    else
    {
      *v7 = 0LL;
      if ( v7 != &v8 )
      {
        *v7 = v6;
        v6 = 0LL;
      }
      a2[1] += 8LL;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a2;
}
