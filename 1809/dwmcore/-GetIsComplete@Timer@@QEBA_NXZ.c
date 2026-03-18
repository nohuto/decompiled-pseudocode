/*
 * XREFs of ?GetIsComplete@Timer@@QEBA_NXZ @ 0x180054480
 * Callers:
 *     ?IsComplete@KeyframeSequence@@QEBA_NXZ @ 0x1800EF828 (-IsComplete@KeyframeSequence@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Timer::GetIsComplete(Timer *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( *((_BYTE *)this + 16) )
  {
    if ( v1 <= *(_DWORD *)this || v1 > *((_DWORD *)this + 1) )
      return 1;
  }
  else if ( v1 < *(_DWORD *)this || v1 >= *((_DWORD *)this + 1) )
  {
    return 1;
  }
  return result;
}
