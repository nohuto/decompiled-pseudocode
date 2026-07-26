/*
 * XREFs of ndisMInvokeShutdown @ 0x1C009AF18
 * Callers:
 *     ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1C009CC70 (-ndisBugcheckHandler@@YAXPEAXK@Z.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013B1C4 (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeShutdown(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 result; // rax
  int v6; // edx
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = a2;
  if ( a2 != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      253,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v7);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 232))(*(_QWORD *)(a1 + 24), v3);
  if ( v3 != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    return WPP_RECORDER_SF_qD(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v6,
             1,
             254,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             a1,
             v3);
  }
  return result;
}
