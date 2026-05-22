/*
 * XREFs of ?GetTopLevelHostView@ViewHierarchy@@UEBAII@Z @ 0x180059740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ @ 0x18005987C (-IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ.c)
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x180059E48 (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

__int64 __fastcall ViewHierarchy::GetTopLevelHostView(ViewHierarchy *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  char *v5; // rdi
  char v6; // al
  unsigned int v7; // esi
  __int64 i; // rax
  const char *v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v13 = a2;
  v2 = a2;
  v12 = a2;
  if ( ViewHierarchy::IsConnectedToNavServer((ViewHierarchy *)((char *)this - 16)) && v4 )
  {
    v5 = (char *)this + 80;
    try
    {
      v7 = *(_DWORD *)(std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v5, &v12) + 8);
      for ( i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v5, &v12);
            ;
            i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v5, &v12) )
      {
        v6 = *(_BYTE *)(i + 12);
        if ( !v7 || v6 )
          break;
        v2 = v7;
        v12 = v7;
        v7 = *(_DWORD *)(std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v5, &v12) + 8);
      }
    }
    catch ( ... )
    {
      v12 = 0;
      LODWORD(v10) = v13;
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x1A3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v10);
      return v12;
    }
  }
  return v2;
}
