/*
 * XREFs of SetDisplayAffinity @ 0x1C02031CC
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C01F5D60 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0202ECC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0203174 (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  int v5; // edi
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v7) )
  {
    if ( (_DWORD)v3 )
    {
      if ( !(unsigned int)RealInternalSetProp((char *)a1 + 120, (unsigned __int16)atomDispAffinity, v3, 5LL) )
        return v2;
    }
    else
    {
      RealInternalRemoveProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomDispAffinity, 1LL);
    }
    v2 = 1;
    v5 = v3 & 1;
    if ( (v7 & 1) != v5 )
    {
      v2 = ChangeWindowTreeProtection(a1, v5);
      if ( !v2 )
        RealInternalSetProp((char *)a1 + 120, (unsigned __int16)atomDispAffinity, v7, 5LL);
    }
  }
  return v2;
}
