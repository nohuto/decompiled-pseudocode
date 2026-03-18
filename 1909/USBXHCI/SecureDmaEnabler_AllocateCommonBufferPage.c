/*
 * XREFs of SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C006ABC8
 * Callers:
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00024E0 (CommonBuffer_AcquireSecureBuffer.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C006B084 (SecureDmaEnabler_MapMemory.c)
 */

__int64 __fastcall SecureDmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int16 v10; // cx
  __int64 v11; // r8
  __int64 v13; // [rsp+28h] [rbp-58h]
  _QWORD v14[3]; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  void *v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF

  v14[0] = 56LL;
  v20 = 0LL;
  v14[2] = 0LL;
  v15 = 1;
  v16 = 1;
  v19 = off_1C0056450;
  v18 = a2 + 120;
  v17 = *a1;
  v14[1] = SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01023 + 1536))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v14,
         *(&WPP_MAIN_CB.AlignmentRequirement + 1),
         1229146200LL,
         4096LL,
         &v20,
         &v21);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72),
        2u,
        0x12u,
        0x14u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v13);
    }
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v20,
         off_1C0056450);
  *(_QWORD *)(v8 + 16) = v20;
  *(_QWORD *)(v8 + 24) = a1;
  v9 = v21;
  v10 = v21;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_WORD *)(v8 + 42) = 0;
  *(_DWORD *)(v8 + 72) = 4096;
  *(_WORD *)(v8 + 40) = 8 * (((unsigned __int16)((v10 & 0xFFF) + 0x1FFF) >> 12) + 6);
  *(_QWORD *)(v8 + 64) = v9 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v8 + 76) = v9 & 0xFFF;
  MmBuildMdlForNonPagedPool((PMDL)(v8 + 32));
  v7 = SecureDmaEnabler_MapMemory(a1, v8 + 32, v11, v8 + 88);
  if ( v7 >= 0 )
  {
    *(_QWORD *)v8 = v21;
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(v8 + 88);
    *a3 = v8;
    if ( a4 )
      *a4 = v8 + 120;
LABEL_7:
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  if ( v20 )
    (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return (unsigned int)v7;
}
