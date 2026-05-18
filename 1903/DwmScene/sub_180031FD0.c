/*
 * XREFs of sub_180031FD0 @ 0x180031FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031FD0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rax
  bool v5; // zf
  _BYTE *v6; // rax

  v4 = std::streambuf::gptr(a1);
  if ( !v4
    || v4 <= **(_QWORD **)(a1 + 24)
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(v4 - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  v5 = a2 == -1;
  if ( a2 != -1 )
  {
    v6 = (_BYTE *)std::streambuf::gptr(a1);
    v5 = a2 == -1;
    *v6 = a2;
  }
  if ( v5 )
    return 0;
  return a2;
}
