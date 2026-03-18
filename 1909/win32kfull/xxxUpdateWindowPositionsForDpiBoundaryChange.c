/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7E30
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  struct tagWND *v4; // rax
  struct tagWND *v5; // rdi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v4 = (struct tagWND *)HMValidateHandleNoSecure(v3[1], a2, a3);
      v5 = v4;
      if ( v4 && (*((_DWORD *)v3 + 7) || *((_DWORD *)v3 + 6) || (unsigned int)IsChildWindowDpiBoundary(v4)) )
        xxxSetWindowPos(v5, 0LL, *((unsigned int *)v3 + 4), *((unsigned int *)v3 + 5), 0, 0, 21);
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
  }
}
