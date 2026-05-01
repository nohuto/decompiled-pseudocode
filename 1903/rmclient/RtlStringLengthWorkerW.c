/*
 * XREFs of RtlStringLengthWorkerW @ 0x10006230
 * Callers:
 *     ?HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006100 (-HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlStringLengthWorkerW(_WORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi

  v2 = 254;
  v3 = 0;
  while ( *this )
  {
    ++this;
    if ( !--v2 )
    {
      v3 = -1073741811;
      break;
    }
  }
  if ( a2 )
  {
    if ( v3 < 0 )
      *a2 = 0;
    else
      *a2 = 254 - v2;
  }
  return v3;
}
