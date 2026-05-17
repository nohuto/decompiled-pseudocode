/*
 * XREFs of sub_180050E08 @ 0x180050E08
 * Callers:
 *     sub_180050C8C @ 0x180050C8C (sub_180050C8C.c)
 *     sub_180050D98 @ 0x180050D98 (sub_180050D98.c)
 * Callees:
 *     sub_18004308C @ 0x18004308C (sub_18004308C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180050E08(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v12; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v7 = *(unsigned __int8 *)(a2 + 45);
  v8 = 0;
  v9 = 0;
  if ( *(_BYTE *)(a2 + 45) )
  {
    do
    {
      v10 = sub_18004308C(a2, v8, &v12);
      if ( v10 == -1 )
        break;
      v9 += v12;
      v8 = v12 + v10;
    }
    while ( v8 < v7 );
    if ( v9 && (dword_180163534 & 0x20) != 0 )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24),
        -(__int64)((unsigned __int64)(unsigned int)(v9 << *(_BYTE *)(a2 + 44)) >> 12));
  }
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 16)))(
           *(_QWORD *)a1,
           a2,
           *(unsigned __int8 *)(a2 + 45) << *(_BYTE *)(a2 + 44),
           a4 & 1);
}
