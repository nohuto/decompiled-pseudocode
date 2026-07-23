/*
 * XREFs of ViKeWaitForMultipleObjectsCommon @ 0x14093C230
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x14093B6F0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x14093B7D0 (VerifierKeWaitForMultipleObjectsNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViKeInjectStatusAlerted @ 0x14093BE4C (ViKeInjectStatusAlerted.c)
 *     ViKeWaitSanityChecks @ 0x14093C3CC (ViKeWaitSanityChecks.c)
 */

__int64 __fastcall ViKeWaitForMultipleObjectsCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v10; // ebp
  unsigned int v12; // edi
  unsigned __int8 WaitIrql; // r11
  int v15; // [rsp+20h] [rbp-48h]
  unsigned __int8 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v10 = a3;
  v12 = a1;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  LOBYTE(a3) = a5;
  v16 = WaitIrql;
  ViKeWaitSanityChecks(a1, a2, a3, a7, (*((_DWORD *)&CurrentThread->0 + 1) >> 6) & 1, v16);
  if ( ViKeInjectStatusAlerted(a6) )
    return 257LL;
  LOBYTE(v17) = a6;
  LOBYTE(v15) = a5;
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, int, int, __int64, __int64))pXdvKeWaitForMultipleObjects)(
           v12,
           a2,
           v10,
           a4,
           v15,
           v17,
           a7,
           a8);
}
