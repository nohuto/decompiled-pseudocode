/*
 * XREFs of SetDisplayAffinity @ 0x1C02444BC
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C0235380 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02441B8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0244468 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v10) )
  {
    v6 = (unsigned __int16)atomDispAffinity;
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v3, 5u) )
        return v2;
    }
    else
    {
      v7 = *((_QWORD *)a1 + 18);
      if ( atomDispAffinity == word_1C032A65C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v7, v6, 1LL, v5);
    }
    v2 = 1;
    v8 = v3 & 1;
    if ( (v10 & 1) != v8 )
    {
      v2 = ChangeWindowTreeProtection(a1, v8);
      if ( !v2 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v10, 5u);
    }
  }
  return v2;
}
