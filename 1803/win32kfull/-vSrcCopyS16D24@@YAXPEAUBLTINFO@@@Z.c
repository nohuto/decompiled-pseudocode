/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0117400
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C01176C8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  int v1; // r9d
  __int64 v2; // r12
  int v3; // r13d
  unsigned __int16 *v4; // rsi
  __int64 v5; // r14
  unsigned int (*v6)(struct _XLATEOBJ *, unsigned int); // rbp
  unsigned int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  unsigned int v10; // eax
  unsigned int v11; // r9d
  __int64 (__fastcall *v12)(struct _XLATEOBJ *, unsigned int); // r8
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // r15d
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+90h] [rbp+18h]
  unsigned int v33; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(_QWORD *)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v31 = *((_DWORD *)a1 + 10) - 2 * v1;
  v32 = *((_DWORD *)a1 + 11) - 3 * v1;
  v6 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v10 = v5 & 3;
  v33 = v10;
  if ( v10 > v7 )
  {
    v10 = v7;
    v33 = v7;
  }
  v11 = v7 - v10;
  v12 = iXlate555ToBGR;
  v13 = v11 >> 2;
  v14 = v11 & 3;
  v29 = v13;
  v30 = v14;
  while ( 1 )
  {
    v15 = v5;
    v16 = v10;
    if ( v10 )
    {
      do
      {
        v28 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int)))v6)(
                v2,
                *v4,
                v12);
        *(_BYTE *)v5 = v28;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v28);
        *(_BYTE *)(v5 + 2) = BYTE2(v28);
        v5 += 3LL;
        v15 = v5;
        --v16;
      }
      while ( v16 );
      v14 = v30;
      v12 = iXlate555ToBGR;
      v8 = v31;
      v9 = v32;
    }
    v17 = v13;
    if ( v13 )
    {
      do
      {
        v18 = *v4;
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v19 = ((unsigned int)v18 >> 2) & 7 | (2
                                              * (v18 & 0x380 | (4
                                                              * (v18 & 0x1F | (2
                                                                             * (v18 & 0x7000 | (4
                                                                                              * (v18 & 0x3E0 | (8 * (v18 & 0x7C00))))))))));
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v2,
                  v18,
                  iXlate555ToBGR,
                  v14);
          v12 = iXlate555ToBGR;
        }
        v20 = v4[1];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v21 = ((unsigned int)v20 >> 2) & 7 | (2
                                              * (v20 & 0x380 | (4
                                                              * (v20 & 0x1F | (2
                                                                             * (v20 & 0x7000 | (4
                                                                                              * (v20 & 0x3E0 | (8 * (v20 & 0x7C00))))))))));
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v2,
                  v20,
                  iXlate555ToBGR,
                  v14);
          v12 = iXlate555ToBGR;
        }
        *(_DWORD *)v5 = v19 | (v21 << 24);
        v22 = v4[2];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v23 = ((unsigned int)v22 >> 2) & 7 | (2
                                              * (v22 & 0x380 | (4
                                                              * (v22 & 0x1F | (2
                                                                             * (v22 & 0x7000 | (4
                                                                                              * (v22 & 0x3E0 | (8 * (v22 & 0x7C00))))))))));
        }
        else
        {
          v23 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v2,
                  v22,
                  iXlate555ToBGR,
                  v14);
          v12 = iXlate555ToBGR;
        }
        *(_DWORD *)(v5 + 4) = (v23 << 16) | (v21 >> 8);
        v24 = v4[3];
        if ( (char *)v6 == (char *)iXlate555ToBGR )
        {
          v25 = ((unsigned int)v24 >> 2) & 7 | (2
                                              * (v24 & 0x380 | (4
                                                              * (v24 & 0x1F | (2
                                                                             * (v24 & 0x7000 | (4
                                                                                              * (v24 & 0x3E0 | (8 * (v24 & 0x7C00))))))))));
        }
        else
        {
          v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int), __int64))v6)(
                  v2,
                  v24,
                  iXlate555ToBGR,
                  v14);
          v12 = iXlate555ToBGR;
        }
        v4 += 4;
        *(_DWORD *)(v5 + 8) = HIWORD(v23) | (v25 << 8);
        v5 += 12LL;
        v15 = v5;
        --v17;
      }
      while ( v17 );
      v14 = v30;
      v13 = v29;
      v8 = v31;
      v9 = v32;
    }
    v26 = v14;
    if ( (_DWORD)v14 )
    {
      do
      {
        v27 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(struct _XLATEOBJ *, unsigned int)))v6)(
                v2,
                *v4,
                v12);
        *(_BYTE *)v5 = v27;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v27);
        *(_BYTE *)(v5 + 2) = BYTE2(v27);
        v5 += 3LL;
        v15 = v5;
        --v26;
      }
      while ( v26 );
      v14 = v30;
      v12 = iXlate555ToBGR;
      v8 = v31;
      v9 = v32;
    }
    if ( !--v3 )
      break;
    v4 = (unsigned __int16 *)((char *)v4 + v8);
    v10 = v33;
    v5 = v15 + v9;
  }
}
