/*
 * XREFs of FreeHook @ 0x1C0054FC0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0054F14 (zzzUnhookWindowsHookEx.c)
 *     FreeThreadsWindowHooks @ 0x1C00DEEF0 (FreeThreadsWindowHooks.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0053B88 (RemoveHmodDependency.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C0055030 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00550BC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall FreeHook(struct tagHOOK *a1)
{
  int v1; // eax
  struct tagTHREADINFO *v3; // rcx
  __int64 result; // rax
  int v5; // ecx

  v1 = *((_DWORD *)a1 + 16);
  if ( (v1 & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 16) = v1 | 0x80;
    v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 9);
    if ( !v3 )
      v3 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    CheckWHFBits(v3, *((_DWORD *)a1 + 12));
  }
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    UnlinkHook(a1);
    v5 = *((_DWORD *)a1 + 17);
    if ( v5 >= 0 )
      RemoveHmodDependency(v5);
    return HMFreeObject(a1);
  }
  return result;
}
