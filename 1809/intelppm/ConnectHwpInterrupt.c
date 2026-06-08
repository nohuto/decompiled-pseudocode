/*
 * XREFs of ConnectHwpInterrupt @ 0x1C00067F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     IsHgsInterruptSupported @ 0x1C00030D0 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0003138 (IsHwpNativeInterruptSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006DF0 (IsHwpHighestInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  bool v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-10h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h]
  unsigned __int64 v13; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 && (*(_DWORD *)(v1 + 4) & 0x1000) != 0 )
  {
    BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpNativeInterruptSupported();
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpHighestInterruptSupported();
    v3 = IsHgsInterruptSupported() && qword_1C001A660 && (unsigned __int8)qword_1C001A660();
    HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v3;
    if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
    {
      v4 = __readmsr(0x773u);
      v11 = v4;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v4) = v4 & 0xFFFFFFFC;
        LODWORD(v11) = v4;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v11) = v4 & 0xFFFFFFFB;
      __writemsr(0x773u, v11);
      v5 = __readmsr(0x777u);
      v12 = v5;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v5) = v5 & 0xFFFFFFFA;
        LODWORD(v12) = v5;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v12) = v5 & 0xFFFFFFF7;
      v2 = HIDWORD(v12);
      __writemsr(0x777u, v12);
    }
    if ( v3 )
    {
      v13 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v2 = HIDWORD(v13);
      __writemsr(0x1B2u, v13);
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v2);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        v8 = __readmsr(0x1B1u);
        if ( (v8 & 0x4000000) != 0 )
          ((void (__fastcall *)(__int64))qword_1C001A668)(433LL);
      }
      return 0;
    }
    else
    {
      v10 = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_2cc0ebb196b73355e081a3b02792ff5e_Traceguids,
        v10);
    }
  }
  else
  {
    v7 = -1073741637;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xDu,
      (__int64)&WPP_2cc0ebb196b73355e081a3b02792ff5e_Traceguids);
  }
  return v7;
}
