/*
 * XREFs of ??1?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x1800CA38C
 * Callers:
 *     ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1800C9E50 (--_EEdgyConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Edge>::~vector<Edge>(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[5];
        if ( v4 )
        {
          v2[5] = 0LL;
          (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
        }
        std::wstring::~wstring((__int64)(v2 + 1));
        v2 += 13;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    v5 = 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 104LL);
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      v6 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v6 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800CA467LL);
      }
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, (const struct std::nothrow_t *)v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
