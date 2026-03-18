/*
 * XREFs of SetDisplayAffinity @ 0x1C022BBCC
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C021D770 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C022B8B4 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C022BB78 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    ComposeWindowIfNeeded((__int64)a1, 1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v9) )
  {
    v5 = (unsigned __int16)atomDispAffinity;
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v3, 5u) )
        return v2;
    }
    else
    {
      v6 = *((_QWORD *)a1 + 15);
      if ( atomDispAffinity == word_1C0317660 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v6, v5, 1LL);
    }
    v2 = 1;
    v7 = v3 & 1;
    if ( (v9 & 1) != v7 )
    {
      v2 = ChangeWindowTreeProtection(a1, v7);
      if ( !v2 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v9, 5u);
    }
  }
  return v2;
}
