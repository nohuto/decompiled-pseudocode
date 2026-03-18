/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x1C00348E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00385D4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int16 v3; // cx
  int v4; // edx
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(__int64, _QWORD); // rax
  __int64 v7; // rcx
  char v9; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v3 = 76;
    LOBYTE(v4) = *(_BYTE *)(v2 + 135);
LABEL_6:
    v5 = -1073741823;
    goto LABEL_7;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 61);
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    v3 = 78;
    goto LABEL_6;
  }
  v5 = 0;
  v3 = 77;
LABEL_7:
  v4 = (unsigned __int8)v4;
  v9 = v4;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
    v4,
    12,
    v3,
    (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
    v9,
    *(_QWORD *)v2);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD))(v2 + 552);
  v7 = *(_QWORD *)(v2 + 560);
  *(_QWORD *)(v2 + 552) = 0LL;
  *(_QWORD *)(v2 + 560) = 0LL;
  return v6(v7, v5);
}
