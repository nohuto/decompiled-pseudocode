/*
 * XREFs of ?IsPidInParentList@CProcess@@UEAA_NK@Z @ 0x18001A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CProcess::IsPidInParentList(CProcess *this, int a2)
{
  _DWORD *i; // rax

  for ( i = (_DWORD *)*((_QWORD *)this + 13); i != *((_DWORD **)this + 14) && *i != a2; ++i )
    ;
  return i != *((_DWORD **)this + 14);
}
