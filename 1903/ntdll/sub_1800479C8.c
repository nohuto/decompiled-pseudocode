/*
 * XREFs of sub_1800479C8 @ 0x1800479C8
 * Callers:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 *     sub_180050520 @ 0x180050520 (sub_180050520.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 * Callees:
 *     sub_180047BA0 @ 0x180047BA0 (sub_180047BA0.c)
 *     sub_18004DDEC @ 0x18004DDEC (sub_18004DDEC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1801073CC @ 0x1801073CC (sub_1801073CC.c)
 */

__int64 __fastcall sub_1800479C8(void **a1, _QWORD *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v7; // edi
  __int128 v8; // xmm0
  __int64 v10; // r8
  int v11; // r9d
  size_t v12; // r8
  int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD v18[3]; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+6Ch] [rbp+3h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh] BYREF
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]

  v21 = 0x100000001000LL;
  v7 = a4 & 0xFEFFFFFF;
  v22 = 0x200000;
  v8 = *a6;
  v23 = 0x40000000;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = *((unsigned int *)&v21 + BYTE1(v8));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    v21 = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v8) >= 2u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        memset(*a1, 0, v12);
      goto LABEL_9;
    }
    if ( v11 && (v8 & 8) != 0 )
      v7 |= 0x40000u;
    v13 = sub_180047BA0((_DWORD)a1, (unsigned int)&v21, 0, v7, a5);
    if ( v13 >= 0 )
    {
      *a2 = v21;
LABEL_9:
      v13 = 0;
    }
  }
  else
  {
    v19 = 0;
    if ( BYTE3(v8) )
      v18[0] = BYTE3(v8) - 1;
    else
      v18[0] = -1;
    v18[1] = BYTE1(v8);
    v18[2] = BYTE2(v8);
    if ( (v8 & 8) != 0 )
      v19 = 1;
    v15 = *a2;
    v20 = *((_QWORD *)&v8 + 1);
    v21 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = sub_18004DDEC(&unk_180166AA8, &v21, a3, v18);
    if ( v16 )
    {
      *a2 = v21;
      *a1 = (void *)v16;
      goto LABEL_9;
    }
    v13 = -1073741670;
  }
  if ( (byte_180166058 & 8) != 0 )
    sub_1801073CC(v7, *a2, *a1, (unsigned int)v13);
  return (unsigned int)v13;
}
