/*
 * XREFs of DynamicLock_Create @ 0x1C00417E0
 * Callers:
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C001E7D4 (RootHub_InitializeReadModifyWriteLock.c)
 *     Command_Create @ 0x1C0057170 (Command_Create.c)
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall DynamicLock_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF

  memset(v14, 0, sizeof(v14));
  LODWORD(v14[0]) = 56;
  v14[6] = off_1C004F1A8;
  v14[3] = 0x100000001LL;
  v14[4] = a1;
  if ( a3 != 1 )
  {
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 2520))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v14,
            &v13);
    v9 = v11;
    if ( v11 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 1u, 0xBu, (__int64)&WPP_f2d06ae1ec9232459c24f634839e0b96_Traceguids, v11);
      return v9;
    }
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v13,
            off_1C004F1A8);
    *(_DWORD *)v10 = a3;
    *(_QWORD *)(v10 + 8) = v13;
LABEL_8:
    *a4 = v10;
    return v9;
  }
  v8 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 2496))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v14,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v15,
            off_1C004F1A8);
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = v15;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_d(a2, 2u, 1u, 0xAu, (__int64)&WPP_f2d06ae1ec9232459c24f634839e0b96_Traceguids, v8);
  return v9;
}
