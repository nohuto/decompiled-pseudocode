/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E2534
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01E3FD0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5u);
  return v3;
}
