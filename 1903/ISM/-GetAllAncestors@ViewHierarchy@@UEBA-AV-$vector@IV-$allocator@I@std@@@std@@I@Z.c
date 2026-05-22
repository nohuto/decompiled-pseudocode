/*
 * XREFs of ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180059600
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180058C70 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ @ 0x18005987C (-IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ.c)
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x180059E48 (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHierarchy::GetAllAncestors(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rdx
  int v6; // r8d
  int v7; // eax
  _BYTE *v8; // rdi
  __int64 v9; // rax
  const char *v11; // [rsp+20h] [rbp-48h]
  const void *v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]
  int v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v16 = a2;
  v3 = a2;
  v12 = 0LL;
  v13 = 0LL;
  if ( ViewHierarchy::IsConnectedToNavServer((ViewHierarchy *)(a1 - 16)) )
  {
    v15 = v6;
    try
    {
      v9 = ((__int64 (*)(void))std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at)();
      v8 = (_BYTE *)v13;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v9 + 8);
        v15 = v7;
        if ( !v7 )
          break;
        if ( *((_BYTE **)&v13 + 1) == v8 )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(&v12, v8, &v15);
          v8 = (_BYTE *)v13;
          v7 = v15;
        }
        else
        {
          *(_DWORD *)v8 = v7;
          v8 += 4;
          *(_QWORD *)&v13 = v8;
        }
        v15 = v7;
        v9 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(a1 + 80, &v15);
      }
    }
    catch ( ... )
    {
      *(_QWORD *)&v13 = v12;
      LODWORD(v11) = v17;
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x181,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v11);
      v3 = v16;
      v8 = (_BYTE *)v13;
    }
    *v3 = v12;
    v3[1] = v8;
    v3[2] = *((_QWORD *)&v13 + 1);
  }
  else
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  return v3;
}
