/*
 * XREFs of HvlGetCoverageData @ 0x140270B14
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1408D76EC (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFCB0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140101FA0 (MmBuildMdlForNonPagedPool.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r14
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  _BYTE v11[24]; // [rsp+30h] [rbp-918h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+70h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+100h] [rbp-848h] BYREF

  v3 = (__int16)a3;
  v5 = 0;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v12, 1LL, v14, 1032LL);
    HvlpAcquireHypercallPage(v11, 2LL, v13, 72LL);
    *v9 = (a1 != 0) + 1;
    v9[1] = v8;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvcallCodeVa();
    HvlpReleaseHypercallPage(v11);
    HvlpReleaseHypercallPage(v12);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
