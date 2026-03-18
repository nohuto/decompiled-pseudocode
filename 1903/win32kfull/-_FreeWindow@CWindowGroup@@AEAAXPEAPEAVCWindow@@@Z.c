/*
 * XREFs of ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C023E2E4
 * Callers:
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C023DECC (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C023E36C (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

void __fastcall CWindowGroup::_FreeWindow(CWindowGroup *this, struct CWindow **a2, __int64 a3, __int64 a4)
{
  struct CWindow *v4; // rdi
  struct CWindow **v5; // rbx
  __int64 v6; // rax

  v4 = *a2;
  v5 = a2;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(*((_QWORD *)v4 + 2), (__int64)a2, a3, a4);
  if ( v6 )
    *(_DWORD *)(v6 + 308) = 0;
  Win32FreePool(v4);
  *v5 = 0LL;
}
