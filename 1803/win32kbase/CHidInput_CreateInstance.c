/*
 * XREFs of CHidInput_CreateInstance @ 0x1C0127E60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0126C08 (--0CHidInput@@IEAA@XZ.c)
 */

CHidInput *CHidInput_CreateInstance()
{
  CHidInput *result; // rax

  gpHidInput = 0LL;
  result = (CHidInput *)Win32AllocPool(1144LL, 0x70694843u);
  if ( result )
    result = CHidInput::CHidInput(result);
  if ( result )
    gpHidInput = result;
  return result;
}
