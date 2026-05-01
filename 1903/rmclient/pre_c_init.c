/*
 * XREFs of pre_c_init @ 0x1000C470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int pre_c_init()
{
  _DWORD *v0; // eax

  v0 = _malloc(0x80u);
  __onexitbegin = v0;
  __onexitend = (int)v0;
  if ( !v0 )
    return 1;
  *v0 = 0;
  return 0;
}
