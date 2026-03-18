/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C00629C8
 * Callers:
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C000230C (CommonBuffer_AcquireSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C00422A4 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0062E40 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPage(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int16 v12; // cx
  __int64 v13; // r8
  __int64 v15; // [rsp+28h] [rbp-58h]
  _QWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h] BYREF

  v17 = 0LL;
  memset(v16, 0, 0x38uLL);
  v16[3] = 0x100000001LL;
  v16[6] = off_1C004F428;
  v16[5] = a2 + 120;
  v16[4] = *a1;
  v16[1] = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  LODWORD(v16[0]) = 56;
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01023 + 1536))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v16,
         *(&WPP_MAIN_CB.AlignmentRequirement + 1),
         1229146200LL,
         4096LL,
         &v17,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0x12u,
      0x14u,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v15);
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v17,
          off_1C004F428);
  *(_QWORD *)(v10 + 16) = v17;
  *(_QWORD *)(v10 + 24) = a1;
  v11 = v18;
  v12 = v18;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_WORD *)(v10 + 42) = 0;
  *(_DWORD *)(v10 + 72) = 4096;
  *(_WORD *)(v10 + 40) = 8 * (((unsigned __int16)((v12 & 0xFFF) + 0x1FFF) >> 12) + 6);
  *(_QWORD *)(v10 + 64) = v11 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v10 + 76) = v11 & 0xFFF;
  MmBuildMdlForNonPagedPool((PMDL)(v10 + 32));
  v9 = SecureDmaEnabler_MapMemory(a1, v10 + 32, v13, v10 + 88);
  if ( v9 >= 0 )
  {
    *(_QWORD *)v10 = v18;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v10 + 88);
    *a3 = v10;
    if ( a4 )
      *a4 = v10 + 120;
LABEL_6:
    if ( v9 >= 0 )
      return (unsigned int)v9;
  }
  if ( v17 )
    (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return (unsigned int)v9;
}
