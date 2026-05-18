/*
 * XREFs of sub_18007F920 @ 0x18007F920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007F920(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v4; // rax
  bool v5; // zf
  unsigned __int16 *v6; // rax

  v4 = std::wstreambuf::gptr(a1);
  if ( !v4
    || v4 <= **(_QWORD **)(a1 + 24)
    || a2 != 0xFFFF && a2 != *(_WORD *)(v4 - 2) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFLL;
  }
  std::wstreambuf::gbump(a1, 0xFFFFFFFFLL);
  v5 = a2 == 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    v6 = (unsigned __int16 *)std::wstreambuf::gptr(a1);
    v5 = a2 == 0xFFFF;
    *v6 = a2;
  }
  if ( v5 )
    return 0;
  return a2;
}
