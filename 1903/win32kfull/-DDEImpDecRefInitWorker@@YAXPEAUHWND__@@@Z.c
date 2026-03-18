/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0228ED0
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C0237630 (NtUserfnDDEINIT.c)
 * Callees:
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 Prop; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  TOKEN_TYPE v11; // eax
  void *v12; // rcx

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = v4;
  if ( v4 )
  {
    Prop = GetProp(v4, (unsigned __int16)atomDDEImp, 1LL);
    v7 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        v9 = (unsigned __int16)atomDDEImp;
        v10 = *(_QWORD *)(v5 + 144);
        if ( atomDDEImp == word_1C032C66C )
          *(_QWORD *)(*(_QWORD *)(v5 + 40) + 312LL) = 0LL;
        RealInternalRemoveProp(v10, v9, 1LL);
        if ( !*(_WORD *)(v7 + 90) )
        {
          v11 = SeTokenType(*(PACCESS_TOKEN *)(v7 + 32));
          v12 = *(void **)(v7 + 32);
          if ( v11 == TokenPrimary || v12 )
            ObfDereferenceObject(v12);
          Win32FreePool(v7);
        }
      }
    }
  }
}
