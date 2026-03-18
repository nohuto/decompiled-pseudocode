/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C0102D70
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C0086AC8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2, int a3)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*a1,
           a2,
           a3);
}
