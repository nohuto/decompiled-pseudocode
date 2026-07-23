/*
 * XREFs of MiMapCfgBitMapSection @ 0x14067BD90
 * Callers:
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapViewOfSectionEx @ 0x1400F29B8 (MmMapViewOfSectionEx.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r10d
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp-58h]
  _QWORD v9[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-28h] BYREF
  __int64 v11; // [rsp+78h] [rbp-20h]
  __int64 v12; // [rsp+80h] [rbp-18h]
  char v13; // [rsp+A8h] [rbp+10h] BYREF

  v9[0] = 1LL;
  v9[1] = &v10;
  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 == qword_140439EC8 )
  {
    v5 = 0x100000;
    if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
      v6 = 0x7FFFFFFEFFFFLL;
    v11 = v6;
  }
  return MmMapViewOfSectionEx(a2, a1, a4, a3, a5, v5, 1, v9, v8, -2147483647, (__int64)&v13);
}
