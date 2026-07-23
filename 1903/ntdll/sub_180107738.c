/*
 * XREFs of sub_180107738 @ 0x180107738
 * Callers:
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     sub_180049EE0 @ 0x180049EE0 (sub_180049EE0.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void *__fastcall sub_180107738(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // cl
  unsigned int v5; // eax
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v8; // [rsp+58h] [rbp-20h]

  v3 = 1;
  qword_180166580 = sub_180049EE0(a1, a2, a3);
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    v4 = 0;
    if ( (unsigned int)v8 > 1 )
    {
      do
        ++v4;
      while ( (unsigned int)v8 >> v4 > 1 );
    }
    v5 = -(1 << v4) & ((1LL << v4) + v8 - 1);
    if ( v5 > 0x40 )
      v5 = 64;
    v3 = v5;
  }
  qword_1801636A0[0] = v3;
  result = memset(&unk_180163CC0, 0, 0x30uLL);
  if ( (dword_180166554 & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)dword_180166554 >> 4) & 3);
    dword_180163CCC = ((unsigned int)dword_180166554 >> 4) & 3;
  }
  return result;
}
