/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0210F60
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C021F2C0 (NtUserfnDDEINIT.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 Prop; // rax
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  TOKEN_TYPE v9; // eax
  void *v10; // rcx

  LOBYTE(a2) = 1;
  v2 = HMValidateHandleNoSecure(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    Prop = GetProp(v2, (unsigned __int16)atomDDEImp, 1LL);
    v5 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        v7 = (unsigned __int16)atomDDEImp;
        v8 = *(_QWORD *)(v3 + 120);
        if ( atomDDEImp == word_1C0317660 )
          *(_QWORD *)(*(_QWORD *)(v3 + 40) + 312LL) = 0LL;
        RealInternalRemoveProp(v8, v7, 1LL);
        if ( !*(_WORD *)(v5 + 90) )
        {
          v9 = SeTokenType(*(PACCESS_TOKEN *)(v5 + 32));
          v10 = *(void **)(v5 + 32);
          if ( v9 == TokenPrimary || v10 )
            ObfDereferenceObject(v10);
          Win32FreePool(v5);
        }
      }
    }
  }
}
