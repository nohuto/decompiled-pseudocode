/*
 * XREFs of CHidInput_CreateInstance @ 0x1C0005AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0006160 (--0CHidInput@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 */

CHidInput *CHidInput_CreateInstance()
{
  CHidInput *result; // rax

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  result = (CHidInput *)Win32AllocPool(1192LL, 1885947971LL);
  if ( result )
    result = CHidInput::CHidInput(result);
  if ( result )
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = result;
  return result;
}
