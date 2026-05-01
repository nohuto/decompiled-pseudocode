/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180017970
 * Callers:
 *     _DoWorkOnGameConfigStore_::_1_::dtor$1 @ 0x18004462D (_DoWorkOnGameConfigStore_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_GUID>::~vector<_GUID>(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 += 39LL;
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800179CCLL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
