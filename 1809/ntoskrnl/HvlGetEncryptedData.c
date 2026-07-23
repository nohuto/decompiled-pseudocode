/*
 * XREFs of HvlGetEncryptedData @ 0x140277C50
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140277DBC (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140277F88 (HvlpGetEncryptedDataFromSecureKernel.c)
 */

__int64 __fastcall HvlGetEncryptedData(__int64 a1, int a2, int a3, _DWORD *a4, _QWORD *a5)
{
  if ( !a3 || (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  if ( VslVsmEnabled )
    return HvlpGetEncryptedDataFromSecureKernel(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  if ( (HvlpFlags & 2) != 0 )
    return HvlpGetEncryptedDataFromHypervisor(a1);
  *a4 = 0;
  *a5 = 0LL;
  return 3221226021LL;
}
