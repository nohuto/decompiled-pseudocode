/*
 * XREFs of ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C023DCC4
 * Callers:
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C023D8AC (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C023DD4C (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

void __fastcall CWindowGroup::_FreeWindow(CWindowGroup *this, struct CWindow **a2, __int64 a3)
{
  struct CWindow *v3; // rdi
  struct CWindow **v4; // rbx
  __int64 v5; // rax

  v3 = *a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(*((_QWORD *)v3 + 2), (__int64)a2, a3);
  if ( v5 )
    *(_DWORD *)(v5 + 308) = 0;
  Win32FreePool(v3);
  *v4 = 0LL;
}
