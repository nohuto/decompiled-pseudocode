/*
 * XREFs of LZNT1CompressChunk @ 0x18007A430
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x18007A340 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  __int64 v7; // r11
  char *v8; // rbx
  char *v9; // r13
  char v11; // cl
  _DWORD *v12; // rdx
  unsigned __int64 v14; // rdi
  char *v15; // rsi
  char *v16; // r14
  int v17; // r9d
  unsigned __int8 v18; // r12
  unsigned int *v19; // r10
  _WORD *v20; // r8
  int v21; // eax
  char v22; // al
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  __int16 v27; // dx
  int v28; // eax
  unsigned int v29; // edi
  _BYTE *v30; // [rsp+20h] [rbp-58h]
  unsigned int *v31; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+88h] [rbp+10h]
  char v34; // [rsp+90h] [rbp+18h]
  char *v35; // [rsp+98h] [rbp+20h]

  v7 = a7;
  v8 = (char *)a4 + 3;
  v9 = (char *)a5;
  v11 = 0;
  v12 = &LZNT1Formats;
  v33 = 0;
  v14 = a3;
  v30 = &LZNT1Formats;
  *(_QWORD *)a7 = a2;
  *(_DWORD *)(a7 + 16) = 4098;
  v15 = a2;
  v16 = (char *)(a4 + 1);
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    v14 = (unsigned __int64)(a2 + 4096);
  *(_QWORD *)(a7 + 8) = v14;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v9 = (char *)a4 + 4095;
  LOBYTE(v17) = 0;
  v18 = 0;
  v34 = 0;
  if ( (unsigned __int64)a2 >= v14 )
  {
LABEL_16:
    if ( v16 >= v9 )
      LODWORD(v8) = (_DWORD)v8 - 1;
    else
      *v16 = v18;
    v25 = (_DWORD)v8 - (_DWORD)a4;
    *a6 = v25;
    *a4 = (v25 - 3) & 0xFFF | 0xB000;
    return v33 != 0 ? 0 : 0x117;
  }
  v19 = (unsigned int *)&unk_18011D51C;
  v20 = a4 + 2;
  v31 = (unsigned int *)&unk_18011D51C;
  v35 = (char *)(a4 + 2);
  v16 = (char *)(a4 + 1);
  do
  {
    if ( &a2[*v19] < v15 )
    {
      do
      {
        v28 = v12[7];
        v12 += 5;
        *(_DWORD *)(v7 + 16) = v28;
        v31 = v12 + 3;
      }
      while ( &a2[v12[3]] < v15 );
      v11 = v33;
      v30 = v12;
    }
    if ( (unsigned __int64)(v15 + 3) > v14 )
      goto LABEL_11;
    v21 = a1(v15, v7);
    v20 = v35;
    if ( !v21 )
    {
      v11 = v33;
      LOBYTE(v17) = v34;
      v7 = a7;
LABEL_11:
      if ( v8 >= v9 )
        break;
      v22 = *v15;
      *v8 = *v15;
      v11 |= v22;
      ++v8;
      ++v15;
      v33 = v11;
      v23 = v18 & ~(1 << v17);
      v24 = 1LL;
      goto LABEL_13;
    }
    if ( v35 >= v9 )
      break;
    v7 = a7;
    LOBYTE(v17) = v34;
    v27 = (v21 - 3) | (((_WORD)v15 - *(_WORD *)(a7 + 24) - 1) << v30[16]);
    v11 = v33;
    v15 += v21;
    *(_WORD *)v8 = v27;
    v8 += 2;
    v24 = 2LL;
    v23 = v18 | (1 << v34);
LABEL_13:
    v20 = (_WORD *)((char *)v20 + v24);
    v18 = v23;
    v35 = (char *)v20;
    v17 = ((_BYTE)v17 + 1) & 7;
    v34 = v17;
    if ( !v17 )
    {
      v18 = v23;
      if ( (unsigned __int64)v15 >= v14 )
        goto LABEL_16;
      *v16 = v23;
      v18 = 0;
      v16 = v8++;
      v20 = (_WORD *)((char *)v20 + 1);
      v35 = (char *)v20;
    }
    v12 = v30;
    v19 = v31;
  }
  while ( (unsigned __int64)v15 < v14 );
  if ( (unsigned __int64)v15 >= v14 )
    goto LABEL_16;
  v29 = v14 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v29 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v29);
  *a6 = v29 + 2;
  *a4 = (v29 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
