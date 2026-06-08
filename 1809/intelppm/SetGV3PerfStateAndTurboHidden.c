/*
 * XREFs of SetGV3PerfStateAndTurboHidden @ 0x1C0004120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetGV3PerfStateAndTurboHidden(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // edi
  BOOL v6; // eax
  BOOL v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h]

  v5 = a1;
  LODWORD(v9) = a3;
  v6 = a5 && !BYTE4(WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  v7 = v6;
  HIDWORD(v9) = v6;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))qword_1C001A678)(
              a1,
              409LL,
              0xFFFFFFFEFFFF0000uLL,
              v9) < 0 )
  {
    HIDWORD(v9) = v7 & 0xFFFFFFFE;
    ((void (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_1C001A678)(
      v5,
      409LL,
      0xFFFFFFFEFFFF0000uLL,
      v9);
  }
  return 0LL;
}
