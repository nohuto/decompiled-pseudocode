/*
 * XREFs of sub_18004C9D8 @ 0x18004C9D8
 * Callers:
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004EFA4 @ 0x18004EFA4 (sub_18004EFA4.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 */

volatile signed __int64 *__fastcall sub_18004C9D8(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int16 v6; // r15
  __int128 v7; // xmm0
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // r10d
  unsigned __int64 v14; // r11
  int v15; // ebx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h] BYREF
  __int128 v25; // [rsp+70h] [rbp+7h] BYREF
  __int128 v26; // [rsp+80h] [rbp+17h] BYREF
  __int128 v27; // [rsp+90h] [rbp+27h] BYREF
  void *v28; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v21 = 4096LL;
  v6 = 1;
  v7 = *a3;
  v8 = 64LL;
  v9 = (unsigned __int64)(((unsigned int)dword_180163534 >> 10) & 1) << 6;
  v23 = *a3;
  if ( a2 <= 0x40 )
    v8 = a2;
  v22 = v7;
  v10 = v9 + 9 * (v8 + 15) - (((_BYTE)v8 - 1) & 7);
  v11 = v10
      + (unsigned int)v8 * (v9 + 64)
      - (((_BYTE)v10 - 1) & 0x3F)
      + ((unsigned __int64)(((unsigned int)dword_180163534 >> 10) & 1) << 6);
  v29 = 129 * v11 + 10175 - ((129 * (_WORD)v11 + 10174) & 0xFFF) + 4095;
  v12 = *(_QWORD *)sub_18004CC7C(&v23);
  if ( !v12
    || (dword_18016273C & 8) != 0
    || (v13 & 0x40000000) != 0
    || BYTE2(v22)
    || v14 >= *(unsigned int *)(v12 + 464) )
  {
    v5 = BYTE1(v22) < 2u ? 0x1000000 : 0;
    v25 = v7;
    v15 = (v13 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)sub_1800479C8(&v28, &v29, 0LL, v5 | 0x2000u, v15, &v25) >= 0 )
    {
      v26 = *a3;
      if ( (int)sub_1800479C8(&v28, &v21, 0LL, v5 | 0x1000u, v15, &v26) >= 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v16 = 2147353472LL;
        if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v4 = v21;
          sub_18010313C(v28, v28, v21, 11LL);
        }
        else
        {
          v4 = v21;
        }
        v17 = (volatile signed __int64 *)v28;
        v6 = 0;
        v28 = 0LL;
        goto LABEL_11;
      }
    }
    v17 = 0LL;
  }
  else
  {
    v22 = v7;
    v20 = sub_18004CF00(v14, 4096LL, 1LL, &v22);
    v17 = (volatile signed __int64 *)v20;
    if ( v20 )
    {
      v24 = *a3;
      sub_18004EFA4(v20, v20 + 4096, v29 - 4096, (unsigned int)&v24, 0);
LABEL_11:
      memset((void *)v17, 0, 0x800uLL);
      *((_QWORD *)v17 + 29) = v17 + 256;
      *((_QWORD *)v17 + 30) = (char *)v17 + v4;
      v18 = v29;
      *((_WORD *)v17 + 15) &= ~1u;
      *((_WORD *)v17 + 15) |= v6;
      *((_QWORD *)v17 + 31) = (char *)v17 + v18;
      _InterlockedExchangeAdd64(v17 + 16, v29 >> 12);
      _InterlockedExchangeAdd64(v17 + 17, v21 >> 12);
    }
  }
  if ( v28 )
  {
    v27 = *a3;
    sub_180048170((unsigned __int64 *)&v28, &v29, v5 | 0x8000, &v27);
  }
  return v17;
}
