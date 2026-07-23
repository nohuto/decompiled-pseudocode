/*
 * XREFs of MiInitializeEnclave @ 0x14085B4A0
 * Callers:
 *     NtInitializeEnclave @ 0x14085BF40 (NtInitializeEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     KeInitializeEnclave @ 0x140844D34 (KeInitializeEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x14085B920 (MiReturnReservedEnclavePages.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14088F43C (PsInitializeVsmEnclave.c)
 */

__int64 __fastcall MiInitializeEnclave(unsigned __int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  int v11; // esi
  int v12; // eax
  volatile signed __int64 *v13; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  int v15; // [rsp+20h] [rbp-28h]
  unsigned int v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v7 = MiObtainReferencedVadEx(a1, 0, (int *)v16);
  v9 = v7;
  if ( !v7 )
    return v16[0];
  if ( (*(_DWORD *)(v7 + 48) & 0x20000) != 0 )
  {
    v12 = *(_DWORD *)(v7 + 64);
    if ( (v12 & 2) != 0 )
    {
      v11 = -1073740528;
    }
    else
    {
      if ( (v12 & 1) != 0 )
      {
        if ( a3 == 4096 )
        {
          v11 = KeInitializeEnclave(
                  (__int64)(*(_QWORD *)(v9 + 80) << 25) >> 16,
                  (__int64)a2,
                  v8,
                  (__int64)(a2 + 512),
                  v15,
                  a4);
          if ( v11 >= 0 )
          {
            MiReturnReservedEnclavePages(v9, -1LL);
            *(_DWORD *)(v9 + 64) |= 2u;
            v11 = 0;
          }
          goto LABEL_17;
        }
      }
      else if ( a3 == 8 && *a2 == 8 )
      {
        v13 = *(volatile signed __int64 **)(v9 + 72);
        if ( _InterlockedIncrement64(v13 + 2) <= 1 )
          __fastfail(0xEu);
        CurrentThread = KeGetCurrentThread();
        MiUnlockVad((__int64)CurrentThread, v9);
        v11 = PsInitializeVsmEnclave(v13, (unsigned int)a2[1]);
        PsDereferenceVsmEnclave((PVOID)v13);
        MiLockVad((__int64)CurrentThread, v9);
        goto LABEL_17;
      }
      v11 = -1073741820;
    }
  }
  else
  {
    v11 = -1073741800;
  }
LABEL_17:
  MiUnlockAndDereferenceVad((char *)v9);
  return (unsigned int)v11;
}
