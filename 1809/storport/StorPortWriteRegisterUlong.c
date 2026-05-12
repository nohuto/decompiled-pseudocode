/*
 * XREFs of StorPortWriteRegisterUlong @ 0x1C003F680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortWriteRegisterUlong(__int64 a1, _DWORD *a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a2 = a3;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
