/*
 * XREFs of MiCreateEnclave @ 0x14085AD08
 * Callers:
 *     NtCreateEnclave @ 0x14085BB20 (NtCreateEnclave.c)
 * Callees:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x14085ADF0 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x14085B008 (MiCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  int EnclaveVad; // eax
  char *v12; // rbx
  int v13; // edi
  PVOID v14; // rdx
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
  v12 = (char *)P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    v14 = P[0];
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( a6 == 16 )
    {
      *((_QWORD *)v12 + 11) = v12 + 80;
      *((_QWORD *)v12 + 10) = v12 + 80;
      VsmEnclave = MiCreateVsmEnclave(a1, v14, a7, a8);
    }
    else
    {
      VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v14, a5, a7, a9);
    }
    v13 = VsmEnclave;
  }
  if ( v12 )
  {
    if ( v13 >= 0 )
      MiUnlockAndDereferenceVad(v12);
    else
      MiDeleteVad((unsigned int *)v12, 0LL, 0);
  }
  return (unsigned int)v13;
}
