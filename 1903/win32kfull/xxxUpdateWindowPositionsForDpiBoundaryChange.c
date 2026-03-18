/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7FB0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  struct tagWND *v5; // rax
  struct tagWND *v6; // rdi

  if ( a1 )
  {
    v4 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v5 = (struct tagWND *)HMValidateHandleNoSecure(v4[1], a2, a3, a4);
      v6 = v5;
      if ( v5 && (*((_DWORD *)v4 + 7) || *((_DWORD *)v4 + 6) || (unsigned int)IsChildWindowDpiBoundary(v5)) )
        xxxSetWindowPos(v6, 0LL, *((unsigned int *)v4 + 4), *((unsigned int *)v4 + 5), 0, 0, 21);
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
  }
}
