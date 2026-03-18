/*
 * XREFs of HUBHTX_ResetPortUsingControlTransfer @ 0x1C00040F8
 * Callers:
 *     HUBPSM20_InitiatingResetPort @ 0x1C000FFA0 (HUBPSM20_InitiatingResetPort.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_ResetPortUsingControlTransfer(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+28h] [rbp-30h]

  *(_DWORD *)(a1 + 8) = 3061;
  v2 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 3;
  *(_WORD *)(a1 + 170) = 4;
  *(_BYTE *)(a1 + 168) = v2 | 0x23;
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      4u,
      4u,
      0x2Eu,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
      v4);
  }
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2272LL));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x2Fu,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        v5);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
