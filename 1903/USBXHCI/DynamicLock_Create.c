/*
 * XREFs of DynamicLock_Create @ 0x1C004702C
 * Callers:
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C00222D0 (RootHub_InitializeReadModifyWriteLock.c)
 *     Command_Create @ 0x1C005E170 (Command_Create.c)
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall DynamicLock_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+3Ch] [rbp-34h]
  int v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  __int64 v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  void *v20; // [rsp+68h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF

  v15 = 0;
  v19 = 0LL;
  v20 = off_1C00561D0;
  v18 = a1;
  v13 = 56;
  v16 = 1;
  v17 = 1;
  v14 = 0LL;
  if ( a3 != 1 )
  {
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 2520))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           &v13,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      v9 = 11;
      goto LABEL_5;
    }
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v12,
            off_1C00561D0);
    *(_DWORD *)v10 = a3;
    *(_QWORD *)(v10 + 8) = v12;
LABEL_11:
    *a4 = v10;
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 2496))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         &v13,
         &v21);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v21,
            off_1C00561D0);
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = v21;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 10;
LABEL_5:
    WPP_RECORDER_SF_d(a2, 2u, 1u, v9, (__int64)&WPP_f2d06ae1ec9232459c24f634839e0b96_Traceguids, v7);
  }
  return v8;
}
