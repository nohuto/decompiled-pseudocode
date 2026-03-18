/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C01399C0
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0139B74 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  int v1; // r9d
  int v2; // r13d
  __int64 v3; // r14
  unsigned __int16 *v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // r9d
  unsigned int (*v7)(struct _XLATEOBJ *, unsigned int); // r15
  unsigned int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // esi
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r12d
  int v15; // edi
  unsigned int v16; // esi
  unsigned int v17; // edi
  int v18; // eax
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+80h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v26 = *((_DWORD *)a1 + 10) - 2 * v1;
  v22 = *((_DWORD *)a1 + 11) - 3 * v1;
  v7 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v8 = v5 & 3;
  v24 = v8;
  if ( v8 > v6 )
  {
    v8 = v6;
    v24 = v6;
  }
  v9 = v6 - v8;
  v10 = v9 >> 2;
  v11 = v9 & 3;
  v25 = v10;
  v23 = v11;
  while ( 1 )
  {
    v12 = v5;
    v13 = v8;
    if ( v8 )
    {
      do
      {
        v21 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, *v4);
        *(_BYTE *)v5 = v21;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v21);
        *(_BYTE *)(v5 + 2) = BYTE2(v21);
        v5 += 3LL;
        v12 = v5;
        --v13;
      }
      while ( v13 );
      v11 = v23;
    }
    v14 = v10;
    if ( v10 )
    {
      do
      {
        v15 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, *v4);
        v16 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, v4[1]);
        *(_DWORD *)v5 = v15 | (v16 << 24);
        v17 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, v4[2]);
        *(_DWORD *)(v5 + 4) = (v17 << 16) | (v16 >> 8);
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, v4[3]);
        v4 += 4;
        *(_DWORD *)(v5 + 8) = HIWORD(v17) | (v18 << 8);
        v5 += 12LL;
        v12 = v5;
        --v14;
      }
      while ( v14 );
      v11 = v23;
      v10 = v25;
    }
    v19 = v11;
    if ( v11 )
    {
      do
      {
        v20 = ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v3, *v4);
        *(_BYTE *)v5 = v20;
        ++v4;
        *(_BYTE *)(v5 + 1) = BYTE1(v20);
        *(_BYTE *)(v5 + 2) = BYTE2(v20);
        v5 += 3LL;
        v12 = v5;
        --v19;
      }
      while ( v19 );
      v11 = v23;
    }
    if ( !--v2 )
      break;
    v4 = (unsigned __int16 *)((char *)v4 + v26);
    v8 = v24;
    v5 = v12 + v22;
  }
}
