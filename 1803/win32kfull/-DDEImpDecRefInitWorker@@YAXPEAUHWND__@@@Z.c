/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01EB010
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01F76C0 (NtUserfnDDEINIT.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 Prop; // rax
  __int64 v5; // rbx
  TOKEN_TYPE v7; // eax
  void *v8; // rcx

  LOBYTE(a2) = 1;
  v2 = HMValidateHandleNoSecure(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    Prop = RealGetProp(*(_QWORD *)(v2 + 120), (unsigned __int16)atomDDEImp, 1LL);
    v5 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        RealInternalRemoveProp(*(_QWORD *)(v3 + 120), (unsigned __int16)atomDDEImp, 1LL);
        if ( !*(_WORD *)(v5 + 90) )
        {
          v7 = SeTokenType(*(PACCESS_TOKEN *)(v5 + 32));
          v8 = *(void **)(v5 + 32);
          if ( v7 == TokenPrimary || v8 )
            ObfDereferenceObject(v8);
          Win32FreePool(v5);
        }
      }
    }
  }
}
