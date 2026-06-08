/*
 * XREFs of RegisterSubspace @ 0x1C002D974
 * Callers:
 *     RegisterSubspaceForGenAddr @ 0x1C002DB2C (RegisterSubspaceForGenAddr.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall RegisterSubspace(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v3; // rbx
  _DWORD *PoolWithTag; // rax
  int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)qword_1C001A8B0;
  if ( qword_1C001A8B0 )
  {
LABEL_10:
    v8 = 0;
    *a3 = v3;
    v3 = 0LL;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x98uLL);
  v3[8] = a2;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _DWORD *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v9,
         &GUID_PCC_INTERFACE_STANDARD,
         v3,
         128,
         1,
         0LL);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)(v3[17] - 1) <= 0x26 )
    {
      LODWORD(v13) = 40;
      LODWORD(v12) = v3[17];
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0xAu,
        (__int64)&WPP_2c93596d227b365fe96486fd941e48d7_Traceguids,
        v12,
        v13);
      v8 = -1073741823;
      goto LABEL_11;
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _DWORD *))(WdfFunctions_01015 + 2520))(
            WdfDriverGlobals,
            0LL,
            v3 + 32);
    v8 = v10;
    if ( v10 < 0 )
    {
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0xBu,
        (__int64)&WPP_2c93596d227b365fe96486fd941e48d7_Traceguids,
        v12);
      goto LABEL_11;
    }
    qword_1C001A8B0 = (__int64)v3;
    goto LABEL_10;
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v8;
}
