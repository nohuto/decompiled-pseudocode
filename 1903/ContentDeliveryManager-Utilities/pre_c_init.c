/*
 * XREFs of pre_c_init @ 0x1800CA3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 pre_c_init()
{
  _QWORD *v0; // rax

  v0 = malloc(0x100uLL);
  _onexitbegin = v0;
  _onexitend = (__int64)v0;
  if ( !v0 )
    return 1LL;
  *v0 = 0LL;
  return 0LL;
}
