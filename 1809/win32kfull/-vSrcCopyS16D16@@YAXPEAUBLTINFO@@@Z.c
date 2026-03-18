/*
 * XREFs of ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02AC440
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0139B74 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D16(XLATE **a1)
{
  XLATE *v1; // rbp
  int v2; // r12d
  int v3; // r14d
  _WORD *v4; // rdi
  _WORD *v5; // rbx
  __int64 v6; // rax
  int v7; // r9d
  int v8; // r13d
  int v9; // edx
  int v10; // r8d
  int v11; // r8d
  unsigned __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  __int64 (__fastcall *v20)(struct _XLATEOBJ *, unsigned int); // r15
  int v21; // esi
  int v22; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)((char *)a1[1] + 2 * *((_DWORD *)a1 + 12));
  v5 = (_WORD *)((char *)a1[2] + 2 * *((_DWORD *)a1 + 14));
  v6 = *((_QWORD *)*a1 + 6);
  v7 = *((_DWORD *)a1 + 11) - 2 * v2;
  v8 = *((_DWORD *)a1 + 10) - 2 * v2;
  v22 = v7;
  v9 = *(_DWORD *)(*((_QWORD *)*a1 + 5) + 24LL);
  if ( (v9 & 0x200000) != 0 && (*(_DWORD *)(v6 + 24) & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v10 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v10 = v2 - 1;
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      v11 = v10 - 2;
      if ( v11 >= 0 )
      {
        v12 = (unsigned __int64)(unsigned int)(v11 + 2) >> 1;
        do
        {
          v13 = *(_DWORD *)v4 & 0x1F001F;
          v14 = (2 * (*(_DWORD *)v4 & 0xFFE07FE0)) | (*(_DWORD *)v4 >> 4) & 0x200020;
          v4 += 2;
          *(_DWORD *)v5 = v13 | v14;
          v5 += 2;
          --v12;
        }
        while ( v12 );
        v7 = v22;
      }
      if ( (v11 & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else if ( (v9 & 0x400000) != 0 && (*(_DWORD *)(v6 + 24) & 0x200000) != 0 )
  {
    while ( 1 )
    {
      v15 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v15 = v2 - 1;
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      v16 = v15 - 2;
      if ( v16 >= 0 )
      {
        v17 = (unsigned __int64)(unsigned int)(v16 + 2) >> 1;
        do
        {
          v18 = *(_DWORD *)v4 & 0x1F001F;
          v19 = (*(_DWORD *)v4 >> 1) & 0x7FE07FE0;
          v4 += 2;
          *(_DWORD *)v5 = v18 | v19;
          v5 += 2;
          --v17;
        }
        while ( v17 );
      }
      if ( (v16 & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else
  {
    v20 = XLATE::pfnXlateBetweenBitfields(v1);
    while ( 1 )
    {
      v21 = v2;
      do
      {
        *v5++ = v20((struct _XLATEOBJ *)v1, (unsigned __int16)*v4++);
        --v21;
      }
      while ( v21 );
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v22);
    }
  }
}
