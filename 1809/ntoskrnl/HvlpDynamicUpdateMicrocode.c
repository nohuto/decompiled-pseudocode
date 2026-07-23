/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x140818CF0
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140818C60 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403226F0 (HvcallFastExtended.c)
 *     HvcallInitInputControl @ 0x140322724 (HvcallInitInputControl.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x1408189A4 (HvlpLogMicrocodeUpdateStatus.c)
 */

__int64 __fastcall HvlpDynamicUpdateMicrocode(void *a1, ULONG a2)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rdi
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // ebx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  void *v14; // [rsp+40h] [rbp-38h] BYREF
  ULONG v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]

  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v5 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v13);
  LODWORD(v13) = v13 | 0x10000;
  v16 = 0;
  v15 = a2;
  v8 = v7 + 17;
  v14 = a1;
  while ( 1 )
  {
    v10 = HvcallFastExtended(v13, (__int64)&v14, v8, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v10) )
      break;
    v9 = HvlpHandleInsufficientMemory(v11, v11, v12);
    if ( v9 < 0 )
      goto LABEL_7;
  }
  v9 = HvlpHvToNtStatus(v11);
LABEL_7:
  IoFreeMdl(v5);
  if ( v9 >= 0 )
    HvlpLogMicrocodeUpdateStatus();
  return (unsigned int)v9;
}
