/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C01057A0
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C008AEA8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2, int a3)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*a1,
           a2,
           a3);
}
