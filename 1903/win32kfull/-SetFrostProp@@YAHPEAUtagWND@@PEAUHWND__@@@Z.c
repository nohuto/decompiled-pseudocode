/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F9328
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F9820 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5u);
  return v3;
}
