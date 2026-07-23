/*
 * XREFs of KeSetIdealProcessorThread @ 0x14015CE80
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 * Callees:
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CED0 (KeSetIdealProcessorThreadByNumber.c)
 */

UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  unsigned __int16 Group; // ax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  UCHAR v5; // [rsp+32h] [rbp+Ah]
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF
  UCHAR v7; // [rsp+3Ah] [rbp+12h]
  char v8; // [rsp+3Bh] [rbp+13h]

  if ( Thread == KeGetCurrentThread() )
    Group = Thread->Affinity.Group;
  else
    Group = Thread->UserAffinity.Group;
  v7 = Processor;
  v6 = Group;
  v8 = 0;
  KeSetIdealProcessorThreadByNumber(Thread, &v6, &v4);
  return v5;
}
