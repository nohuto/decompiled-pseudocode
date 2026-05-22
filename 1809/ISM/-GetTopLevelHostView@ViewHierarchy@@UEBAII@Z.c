/*
 * XREFs of ?GetTopLevelHostView@ViewHierarchy@@UEBAII@Z @ 0x18000E840
 * Callers:
 *     <none>
 * Callees:
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18000ED64 (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

__int64 __fastcall ViewHierarchy::GetTopLevelHostView(ViewHierarchy *this, unsigned int a2)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  char *v4; // rcx
  char v5; // al
  unsigned int v6; // esi
  __int64 i; // rax
  const char *v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h]

  v12 = a2;
  v2 = a2;
  v11 = a2;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 36) == 1) && a2 )
  {
    v3 = (char *)this + 80;
    v4 = (char *)this + 80;
    try
    {
      v6 = *(_DWORD *)(std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v4, &v11) + 8);
      for ( i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v3, &v11);
            ;
            i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v3, &v11) )
      {
        v5 = *(_BYTE *)(i + 12);
        if ( !v6 || v5 )
          break;
        v2 = v6;
        v11 = v6;
        v6 = *(_DWORD *)(std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v3, &v11) + 8);
      }
    }
    catch ( ... )
    {
      v11 = 0;
      LODWORD(v9) = v12;
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x171,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v9);
      return v11;
    }
  }
  return v2;
}
