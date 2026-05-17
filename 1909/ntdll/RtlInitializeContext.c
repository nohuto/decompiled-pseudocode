/*
 * XREFs of RtlInitializeContext @ 0x1800F8C40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

unsigned __int64 __fastcall RtlInitializeContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _WORD *v8; // rbx
  unsigned __int64 result; // rax

  if ( (a5 & 0xF) != 0 )
    RtlRaiseStatus(3221225481LL);
  *(_QWORD *)(a2 + 120) = 0LL;
  v8 = (_WORD *)(a2 + 256);
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_DWORD *)(a2 + 68) = 512;
  *(_QWORD *)(a2 + 144) = 1LL;
  *(_QWORD *)(a2 + 152) = a5;
  *(_QWORD *)(a2 + 168) = 4LL;
  *(_QWORD *)(a2 + 176) = 5LL;
  *(_QWORD *)(a2 + 184) = 8LL;
  *(_QWORD *)(a2 + 200) = 10LL;
  *(_QWORD *)(a2 + 208) = 11LL;
  *(_QWORD *)(a2 + 216) = 12LL;
  *(_QWORD *)(a2 + 224) = 13LL;
  *(_QWORD *)(a2 + 232) = 14LL;
  *(_QWORD *)(a2 + 240) = 15LL;
  memset((void *)(a2 + 256), 0, 0x200uLL);
  *(_QWORD *)(a2 + 248) = a4;
  *v8 = 639;
  result = 0xF0E0D0C0A0908070uLL;
  *(_QWORD *)(a2 + 128) = a3;
  *(_QWORD *)(a2 + 192) = 0xF0E0D0C0A0908070uLL;
  *(_DWORD *)(a2 + 52) = 8064;
  *(_DWORD *)(a2 + 280) = 8064;
  *(_DWORD *)(a2 + 48) = 1048587;
  return result;
}
