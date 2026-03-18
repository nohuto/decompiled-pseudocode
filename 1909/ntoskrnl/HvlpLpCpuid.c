/*
 * XREFs of HvlpLpCpuid @ 0x140A39600
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140A3923C (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140A39484 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  PSLIST_ENTRY result; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  PHYSICAL_ADDRESS v15[4]; // [rsp+28h] [rbp-60h] BYREF
  PHYSICAL_ADDRESS v16[5]; // [rsp+48h] [rbp-40h] BYREF

  memset(v16, 0, 0x20uLL);
  memset(v15, 0, sizeof(v15));
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = (_DWORD)result;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = HvlpAcquireHypercallPage(v16, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage(v15, 2, 0LL, 16LL);
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallCodeVa();
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    HvlpReleaseHypercallPage((unsigned int *)v15);
    return HvlpReleaseHypercallPage((unsigned int *)v16);
  }
  return result;
}
