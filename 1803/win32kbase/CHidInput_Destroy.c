/*
 * XREFs of CHidInput_Destroy @ 0x1C0127EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0126D10 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

CHidInput *CHidInput_Destroy()
{
  CHidInput *result; // rax

  if ( gpHidInput )
  {
    result = CHidInput::`scalar deleting destructor'(gpHidInput, 1);
    gpHidInput = 0LL;
  }
  return result;
}
