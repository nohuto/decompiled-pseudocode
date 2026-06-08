/*
 * XREFs of ReadGenAddrHidden @ 0x1C0008338
 * Callers:
 *     ReadGenAddrMaybeHidden @ 0x1C00083A4 (ReadGenAddrMaybeHidden.c)
 *     SetPerfStateIOHidden @ 0x1C000E6D0 (SetPerfStateIOHidden.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddr @ 0x1C00082E0 (ReadGenAddr.c)
 *     ReadIoMemRawHidden @ 0x1C00084E0 (ReadIoMemRawHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(__int64 a1, char *a2)
{
  char v4; // al
  unsigned __int64 IoMemRawHidden; // rax
  unsigned __int64 v6; // rdx
  char v7; // cl
  unsigned __int8 v8; // cl

  if ( !a2 )
    return 0LL;
  v4 = *a2;
  if ( !*a2 || v4 == 10 || v4 == 126 )
    return ReadGenAddr((__int64)a2);
  IoMemRawHidden = ReadIoMemRawHidden();
  v6 = IoMemRawHidden;
  if ( IoMemRawHidden )
  {
    v7 = a2[2];
    if ( v7 )
      v6 = IoMemRawHidden >> v7;
    v8 = a2[1];
    if ( v8 < 0x40u )
      v6 &= (1LL << v8) - 1;
  }
  return v6;
}
