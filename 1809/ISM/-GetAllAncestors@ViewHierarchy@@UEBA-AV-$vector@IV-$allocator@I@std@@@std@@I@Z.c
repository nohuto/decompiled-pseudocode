/*
 * XREFs of ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18000E750
 * Callers:
 *     <none>
 * Callees:
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18000ED64 (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18000F68C (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHierarchy::GetAllAncestors(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  const char *v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+10h]
  int v15; // [rsp+80h] [rbp+18h]

  v15 = a3;
  v14 = a2;
  v3 = a2;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 144) == 1 )
  {
    v13 = a3;
    v4 = a1 + 80;
    try
    {
      v7 = ((__int64 (*)(void))std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at)();
      v6 = (_DWORD *)v11;
      while ( 1 )
      {
        v5 = *(_DWORD *)(v7 + 8);
        v13 = v5;
        if ( !v5 )
          break;
        if ( *((_DWORD **)&v11 + 1) == v6 )
        {
          std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
            &v10,
            v6,
            &v13);
          v6 = (_DWORD *)v11;
          v5 = v13;
        }
        else
        {
          *v6++ = v5;
          *(_QWORD *)&v11 = v6;
        }
        v13 = v5;
        v7 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v4, &v13);
      }
    }
    catch ( ... )
    {
      *(_QWORD *)&v11 = v10;
      LODWORD(v9) = v15;
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x14F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v9);
      v3 = v14;
      v6 = (_DWORD *)v11;
    }
    *v3 = v10;
    v3[1] = v6;
    v3[2] = *((_QWORD *)&v11 + 1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return v3;
}
