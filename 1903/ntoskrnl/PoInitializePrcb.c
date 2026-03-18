/*
 * XREFs of PoInitializePrcb @ 0x1405A1F70
 * Callers:
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x14018B908 (PpmHvUseNativeAlgorithms.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 23808;
  memset(DeferredContext + 23808, 0, 0x200uLL);
  v1[240] = 1;
  *((_QWORD *)v1 + 28) = PpmWmiDispatch;
  v1[208] = 2;
  *((_DWORD *)v1 + 107) = 100;
  *((_DWORD *)v1 + 106) = 100;
  v1[419] = 100;
  KeInitializeDpc((PRKDPC)(v1 + 272), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  if ( !*((_QWORD *)v1 + 41) )
    *((_WORD *)v1 + 137) = *((_DWORD *)DeferredContext + 9) + 1280;
  v1[273] = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    *((_DWORD *)v1 + 54) = 0;
  }
  else
  {
    result = -(HvlpFlags & 2);
    *((_DWORD *)v1 + 54) = ((HvlpFlags & 2) != 0) + 1;
  }
  return result;
}
