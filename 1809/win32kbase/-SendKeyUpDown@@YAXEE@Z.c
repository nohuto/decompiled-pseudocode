/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C01521F0
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C0151C68 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C002BAC0 (InternalMapVirtualKeyEx.c)
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     GetCurrentKbdTables @ 0x1C01522A0 (GetCurrentKbdTables.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v3; // edi
  __int64 CurrentKbdTables; // rax
  _DWORD v5[8]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  memset(v5, 0, sizeof(v5));
  HIWORD(v5[1]) = 0;
  *(_DWORD *)((char *)v5 + 2) = (unsigned __int16)v3 | 0x4000;
  if ( a2 )
    HIWORD(v5[0]) = v3 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v5[0]) = InternalMapVirtualKeyEx(v3, 0, CurrentKbdTables);
  xxxProcessKeyEvent((unsigned __int16 *)v5, 0LL, 1u, 0, 0LL);
}
