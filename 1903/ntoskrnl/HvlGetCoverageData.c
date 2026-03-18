/*
 * XREFs of HvlGetCoverageData @ 0x140284914
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14091495C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA170 (MmBuildMdlForNonPagedPool.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  bool v6; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v8; // r14
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rbx
  _QWORD v12[4]; // [rsp+30h] [rbp-918h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-8F8h] BYREF
  _BYTE v14[144]; // [rsp+70h] [rbp-8D8h] BYREF
  _BYTE v15[2064]; // [rsp+100h] [rbp-848h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  v6 = 0;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v8 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v9 = (v8->ByteCount + (unsigned __int64)((unsigned __int16)a3 & 0xFFF) + 4095) >> 12;
    v10 = (_DWORD *)HvlpAcquireHypercallPage(v13, 1LL, v15, 1032LL);
    HvlpAcquireHypercallPage(v12, 2LL, v14, 72LL);
    *v10 = (a1 != 0) + 1;
    v10[1] = v9;
    memmove(v10 + 2, &v8[1], 8LL * (unsigned int)v9);
    LOWORD(v10) = HvcallCodeVa();
    HvlpReleaseHypercallPage(v12);
    HvlpReleaseHypercallPage(v13);
    v6 = (_WORD)v10 == 0;
    IoFreeMdl(v8);
  }
  return v6;
}
