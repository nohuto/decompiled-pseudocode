/*
 * XREFs of DmaEnabler_AllocateCommonBufferPage @ 0x1C00468C4
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall DmaEnabler_AllocateCommonBufferPage(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edi
  _QWORD *v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+44h] [rbp-3Ch]
  int v15; // [rsp+54h] [rbp-2Ch]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  void *v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A8h] [rbp+28h] BYREF
  int v23; // [rsp+ACh] [rbp+2Ch]

  v15 = 0;
  v18 = 0LL;
  v23 = 0;
  v16 = 1;
  v17 = 1;
  v20 = off_1C0056040;
  v7 = a2 + 24;
  v13 = 56;
  v8 = *a1;
  v19 = v7;
  v14 = 0LL;
  v22 = 8;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, int *, int *, __int64 *))(WdfFunctions_01023 + 3064))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v8,
         4096LL,
         &v22,
         &v13,
         &v21);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WPP_MAIN_CB.Dpc.ProcessorHistory,
                      v21,
                      off_1C0056040);
    v10[2] = v21;
    *v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 176))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v21);
    v10[1] = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 184))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v21);
    *a4 = v10 + 3;
    *a3 = v10;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72),
      3u,
      0x12u,
      0xCu,
      (__int64)&WPP_ea1d73149a9b3e3169abee4329003fe0_Traceguids,
      v12);
  }
  return (unsigned int)v9;
}
