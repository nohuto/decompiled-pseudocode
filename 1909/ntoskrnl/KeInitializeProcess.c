/*
 * XREFs of KeInitializeProcess @ 0x1406855A8
 * Callers:
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x1400EA0B0 (KiSetIdealNodeProcessByGroup.c)
 *     KeSetGroupMaskProcess @ 0x1400EA214 (KeSetGroupMaskProcess.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslCreateSecureProcess @ 0x140851390 (VslCreateSecureProcess.c)
 */

__int64 __fastcall KeInitializeProcess(__int64 a1, char a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  int SecureProcess; // esi
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // cx

  *(_BYTE *)a1 = 3;
  *(_BYTE *)(a1 + 2) = -72;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  SecureProcess = 0;
  *(_BYTE *)(a1 + 448) = a2;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 1310740;
  memset((void *)(a1 + 280), 0, 0xA0uLL);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 440) |= 1u;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 1310721;
  memset((void *)(a1 + 88), 0, 0xA0uLL);
  v10 = *((_WORD *)a3 + 4);
  v11 = *a3;
  if ( *(_WORD *)(a1 + 80) <= v10 )
    *(_WORD *)(a1 + 80) = v10 + 1;
  *(_QWORD *)(a1 + 8LL * v10 + 88) |= v11;
  KeSetGroupMaskProcess(a1, 1 << *((_BYTE *)a3 + 8));
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  *(_QWORD *)(a1 + 256) = a1 + 248;
  *(_QWORD *)(a1 + 248) = a1 + 248;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_DWORD *)(a1 + 576) = 0;
  *(_BYTE *)(a1 + 449) = 6;
  KiSetIdealNodeProcessByGroup(v12, a4, *((_WORD *)a3 + 4));
  v13 = *(_WORD *)(a1 + 2LL * *((unsigned __int16 *)a3 + 4) + 532);
  *(_QWORD *)(a1 + 616) = a5;
  *(_WORD *)(a1 + 572) = v13;
  if ( (a6 & 2) != 0 )
  {
    SecureProcess = VslCreateSecureProcess(a1, 0LL, a1 + 728);
    if ( SecureProcess >= 0 )
      *(_QWORD *)(a1 + 728) |= 1uLL;
  }
  return (unsigned int)SecureProcess;
}
