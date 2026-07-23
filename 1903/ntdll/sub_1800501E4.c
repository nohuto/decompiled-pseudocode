/*
 * XREFs of sub_1800501E4 @ 0x1800501E4
 * Callers:
 *     sub_18004E828 @ 0x18004E828 (sub_18004E828.c)
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 * Callees:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 *     sub_18010B5E4 @ 0x18010B5E4 (sub_18010B5E4.c)
 */

char __fastcall sub_1800501E4(__int64 a1, PVOID a2, int a3)
{
  ULONG_PTR v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdx
  _WORD *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r14
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v15; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 13) & 7;
  v5 = ~*(_DWORD *)a1;
  BaseAddress = a2;
  v6 = (unsigned int)(v5 + 1);
  RegionSize = v6;
  if ( !(_BYTE)v4 )
  {
LABEL_2:
    if ( a2 )
    {
      v12 = *(_OWORD *)(a1 + 40);
      LOBYTE(v4) = sub_180048170(&BaseAddress, &RegionSize, 0x8000, &v12);
    }
    return v4;
  }
  if ( v6 >= 0x200000 )
    goto LABEL_9;
  if ( a3 > 0 )
    sub_180047844(a1, (__int64)a2, 0, (unsigned int)v6 >> 12, -a3, 0x4000, 0);
  v4 = sub_18010B5E4(a1, a2, &RegionSize);
  BaseAddress = (PVOID)v4;
  a2 = (PVOID)v4;
  if ( v4 )
  {
LABEL_9:
    sub_1800506F0(a2, v6, &v15, 0LL);
    v8 = v15;
    v9 = 0;
    v4 = RegionSize >> 21;
    v10 = (unsigned __int64)&v15[RegionSize >> 21];
    if ( (unsigned __int64)v15 < v10 )
    {
      do
      {
        LOWORD(v4) = *v8;
        if ( (*v8 & 0x7FF) != 0 )
          LOBYTE(v4) = sub_180047844(a1, (__int64)BaseAddress, v9, 512, -(v4 & 0x7FF), 0x4000, 0);
        ++v8;
        v9 += 512;
      }
      while ( (unsigned __int64)v8 < v10 );
    }
    a2 = BaseAddress;
    goto LABEL_2;
  }
  return v4;
}
