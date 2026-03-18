/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01B03C8
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  struct tagWND *v3; // rax
  struct tagWND *v4; // rdi

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (struct tagWND *)HMValidateHandleNoSecure(v2[1], a2);
      v4 = v3;
      if ( v3 && (*((_DWORD *)v2 + 7) || *((_DWORD *)v2 + 6) || (unsigned int)IsChildWindowDpiBoundary(v3)) )
        xxxSetWindowPos(v4, 0LL, *((unsigned int *)v2 + 4), *((unsigned int *)v2 + 5), 0, 0, 21);
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
}
