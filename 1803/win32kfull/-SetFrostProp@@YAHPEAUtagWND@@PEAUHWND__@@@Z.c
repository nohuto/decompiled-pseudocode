/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01BFA14
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01BFEE0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, HWND a2)
{
  char *v2; // rdi
  unsigned int v4; // ebx

  v2 = (char *)a1 + 120;
  v4 = 0;
  if ( !RealGetProp(*((_QWORD *)a1 + 15), *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return (unsigned int)RealInternalSetProp(v2, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5LL);
  return v4;
}
