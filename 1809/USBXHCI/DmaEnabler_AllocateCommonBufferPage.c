/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x1C0041044
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C00422A4 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-58h]
  _QWORD v14[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  memset(v14, 0, 0x38uLL);
  v8 = *a1;
  v14[3] = 0x100000001LL;
  v14[6] = off_1C004F040;
  v14[5] = a2 + 24;
  LODWORD(v14[0]) = 56;
  v16 = 8LL;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01023 + 3064))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v8,
         4096LL,
         &v16,
         v14,
         &v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v15,
                      off_1C004F040);
    v11[2] = v15;
    *v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 176))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v15);
    v11[1] = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 184))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v15);
    *a4 = v11 + 3;
    *a3 = v11;
  }
  else
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72),
      3u,
      0x12u,
      0xCu,
      (__int64)&WPP_ea1d73149a9b3e3169abee4329003fe0_Traceguids,
      v13);
  }
  return v10;
}
