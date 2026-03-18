/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01D3384
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  v1 = a1;
  v2 = gptiCurrent;
  v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v6;
  for ( v6[1] = 0LL; v1; v1 = (__int64 *)*v1 )
  {
    LOBYTE(v2) = 1;
    v3 = (struct tagWND *)HMValidateHandleNoSecure(v1[1], v2);
    v4 = v3;
    if ( v3 && (*((_DWORD *)v1 + 7) || *((_DWORD *)v1 + 6) || (unsigned int)IsChildWindowDpiBoundary(v3)) )
    {
      ThreadLockExchange((__int64)v4, (__int64)v6);
      xxxSetWindowPos(v4, 0LL, *((unsigned int *)v1 + 4), *((unsigned int *)v1 + 5), 0, 0, 21);
    }
  }
  return ThreadUnlock1(a1, v2);
}
