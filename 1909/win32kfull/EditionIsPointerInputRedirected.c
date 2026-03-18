/*
 * XREFs of EditionIsPointerInputRedirected @ 0x1C01F2DE0
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     IsPointerInputRedirected @ 0x1C01F2FFC (IsPointerInputRedirected.c)
 */

__int64 __fastcall EditionIsPointerInputRedirected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  __int128 v6; // xmm6
  __int128 v7; // xmm7
  __int128 v8; // xmm8
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  __int64 v13; // xmm0_8
  __int64 result; // rax
  _DWORD v15[44]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+F0h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = IsPointerInputRedirected(a1, *(_QWORD *)(grpdeskRitInput + 8LL), a2, &v16);
  v5 = INPUTDEST_FROM_PWND(v15, v16);
  v6 = *((_OWORD *)v5 + 4);
  v7 = *((_OWORD *)v5 + 5);
  v8 = *((_OWORD *)v5 + 6);
  v9 = *(_OWORD *)v5;
  v10 = *((_OWORD *)v5 + 1);
  v11 = *((_OWORD *)v5 + 2);
  v12 = *((_OWORD *)v5 + 3);
  v13 = *((_QWORD *)v5 + 14);
  result = v4;
  *(_OWORD *)a3 = v9;
  *(_OWORD *)(a3 + 16) = v10;
  *(_OWORD *)(a3 + 32) = v11;
  *(_OWORD *)(a3 + 48) = v12;
  *(_OWORD *)(a3 + 64) = v6;
  *(_OWORD *)(a3 + 80) = v7;
  *(_OWORD *)(a3 + 96) = v8;
  *(_QWORD *)(a3 + 112) = v13;
  return result;
}
