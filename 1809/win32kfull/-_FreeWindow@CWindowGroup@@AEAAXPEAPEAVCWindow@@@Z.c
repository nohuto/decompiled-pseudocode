/*
 * XREFs of ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C0225E3C
 * Callers:
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C0225A24 (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0225EC4 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

void __fastcall CWindowGroup::_FreeWindow(CWindowGroup *this, struct CWindow **a2)
{
  struct CWindow *v2; // rdi
  struct CWindow **v3; // rbx
  __int64 v4; // rax

  v2 = *a2;
  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(*((_QWORD *)v2 + 2), (__int64)a2);
  if ( v4 )
    *(_DWORD *)(v4 + 292) = 0;
  Win32FreePool(v2);
  *v3 = 0LL;
}
