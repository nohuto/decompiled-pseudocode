/*
 * XREFs of HwpInterruptService @ 0x1C0006890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     CpcNativeInterruptOccurred @ 0x1C00089D8 (CpcNativeInterruptOccurred.c)
 */

char __fastcall HwpInterruptService(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  unsigned __int64 v4; // rax
  char v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+18h]

  if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
  {
    v4 = __readmsr(0x777u);
    v3 = v4;
    LODWORD(v4) = v4 & 0xFFFFFFFE;
    v5 = v3 & 1;
    v9 = v4;
    if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    {
      a3 = (unsigned int)v4 >> 3;
      LOBYTE(a3) = (v4 & 8) != 0;
      LODWORD(v9) = v4 & 0xFFFFFFF7;
    }
    else
    {
      LOBYTE(a3) = 0;
    }
    v6 = HIDWORD(v9);
    __writemsr(0x777u, v9);
    if ( v5 || (_BYTE)a3 )
    {
      LODWORD(v4) = KeGetPcr()->Prcb.Number;
      LOBYTE(v6) = v5;
      CpcNativeInterruptOccurred(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v4), v6, a3);
    }
  }
  if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    v7 = __readmsr(0x1B1u);
    if ( (v7 & 0x4000000) != 0 )
      ((void (__fastcall *)(__int64))qword_1C001B678)(433LL);
  }
  return 1;
}
