/*
 * XREFs of CHidInput_Destroy @ 0x1C0005EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0007550 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

void *CHidInput_Destroy()
{
  void *result; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    result = CHidInput::`scalar deleting destructor'(*(CHidInput **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 1u);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  }
  return result;
}
