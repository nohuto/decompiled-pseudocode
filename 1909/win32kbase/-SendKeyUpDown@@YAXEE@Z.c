/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C0183480
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C0182E84 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C002E050 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     GetCurrentKbdTables @ 0x1C0183530 (GetCurrentKbdTables.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v3; // edi
  __int64 CurrentKbdTables; // rax
  _WORD v5[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  memset(v5, 0, sizeof(v5));
  v5[1] = v3 | 0x4000;
  if ( a2 )
    v5[1] = v3 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v5[0]) = InternalMapVirtualKeyEx(v3, 0LL, CurrentKbdTables);
  xxxProcessKeyEvent((unsigned int)v5, 0, 1, 0, 0LL, 0LL);
}
