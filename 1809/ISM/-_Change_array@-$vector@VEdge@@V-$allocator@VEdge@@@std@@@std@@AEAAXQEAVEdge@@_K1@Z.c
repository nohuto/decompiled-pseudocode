/*
 * XREFs of ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1800CC768
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1800CC564 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Edge>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = v4[5];
        if ( v10 )
        {
          v4[5] = 0LL;
          (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
        }
        std::wstring::~wstring((__int64)(v4 + 1));
        v4 += 13;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    v11 = 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 104LL);
    if ( v11 >= 0x1000 )
    {
      v12 = *(v4 - 1);
      v11 += 39LL;
      if ( (unsigned __int64)v4 - v12 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800CC85BLL);
      }
      v4 = (_QWORD *)*(v4 - 1);
    }
    operator delete(v4, (const struct std::nothrow_t *)v11);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
