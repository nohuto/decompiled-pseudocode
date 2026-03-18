/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00271A0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // r12d
  unsigned int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // edx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // r8
  DC *v16; // rdx
  int v17; // ecx
  __m128i v18; // xmm1
  int v19; // ecx
  int v20; // eax
  __m128i v21; // xmm0
  GdiHandleManager *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // r14
  unsigned int v25; // ebx
  int v26; // r12d
  unsigned int v27; // ebp
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  DC *v33; // rdx
  struct _ENTRY *Entry; // rax
  int v35; // ecx
  __m128i v36; // [rsp+20h] [rbp-48h]
  GdiHandleManager *v37; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)this,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v5 = *((_QWORD *)gpHandleManager + 2);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v7 + ((v6 + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    v8 = ((v4 - v7) >> 16) + 1;
    if ( v4 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v10 = v4 + ((1 - (_DWORD)v8) << 16) - v7;
    else
      v10 = v4;
    v11 = 0LL;
    if ( v10 < *(_DWORD *)(v9 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                   + 16LL * (unsigned __int8)v10
                   + 8) )
    {
      v11 = *(_QWORD *)v9 + 24LL * v10;
    }
    LOWORD(v6) = *(_WORD *)(v5 + 2);
  }
  v12 = *(_DWORD *)(v5 + 2056);
  if ( v4 < 0x10000 )
    goto LABEL_14;
  if ( *(_DWORD *)gpHandleManager <= 0x10000u )
  {
    v4 = (unsigned __int16)v4;
LABEL_14:
    v13 = v6;
    goto LABEL_15;
  }
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, (unsigned __int16)v4, 1);
  v12 = v7;
  v35 = *((unsigned __int8 *)Entry + 13);
  v13 = v6;
  if ( v35 == HIWORD(v4) )
    v4 = (unsigned __int16)v4;
LABEL_15:
  if ( v4 >= v12 + ((v13 + 0xFFFF) << 16) )
    goto LABEL_62;
  v14 = ((v4 - v12) >> 16) + 1;
  if ( v4 < v12 )
    v14 = 0LL;
  v15 = *(_QWORD *)(v5 + 8 * v14 + 8);
  if ( (_DWORD)v14 )
    v4 += ((1 - (_DWORD)v14) << 16) - v12;
  if ( v4 >= *(_DWORD *)(v15 + 20) )
LABEL_62:
    v16 = 0LL;
  else
    v16 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8);
  if ( v16 != this )
    v11 = 0LL;
  if ( (*(_BYTE *)(v11 + 15) & 4) != 0 )
  {
    if ( !a2 )
      goto LABEL_64;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 3;
      if ( *((_DWORD *)a2 + 20) <= 0xA0u )
        v17 = 2;
    }
    *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v17;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
LABEL_64:
      v21 = (__m128i)rclEmpty;
    }
    else
    {
      v19 = *((_DWORD *)this + 360);
      v36 = *(__m128i *)((char *)a2 + 88);
      v18 = v36;
      v36.m128i_i32[2] -= v19;
      v36.m128i_i32[0] = _mm_cvtsi128_si32(v18) - v19;
      v20 = *((_DWORD *)this + 361);
      v36.m128i_i32[1] -= v20;
      v36.m128i_i32[3] -= v20;
      v21 = v36;
    }
    *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v21;
    v22 = gpHandleManager;
    v37 = gpHandleManager;
    v23 = GdiHandleManager::DecodeIndex(
            gpHandleManager,
            (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000);
    v24 = *((_QWORD *)v22 + 2);
    v25 = v23;
    v26 = *(unsigned __int16 *)(v24 + 2);
    v27 = *(_DWORD *)(v24 + 2056);
    if ( v23 >= v27 + ((v26 + 0xFFFF) << 16) )
    {
      v30 = 0LL;
    }
    else
    {
      v28 = ((v23 - v27) >> 16) + 1;
      if ( v23 < v27 )
        v28 = 0LL;
      v29 = *(_QWORD *)(v24 + 8 * v28 + 8);
      if ( (_DWORD)v28 )
        v23 += ((1 - (_DWORD)v28) << 16) - v27;
      v30 = 0LL;
      if ( v23 < *(_DWORD *)(v29 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                     + 16LL * (unsigned __int8)v23
                     + 8) )
      {
        v30 = *(_QWORD *)v29 + 24LL * v23;
      }
      LOWORD(v26) = *(_WORD *)(v24 + 2);
    }
    if ( v25 >= 0x10000 )
    {
      if ( *(_DWORD *)v37 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    (GdiHandleEntryDirectory *)v24,
                                    (unsigned __int16)v25,
                                    1)
             + 13) == HIWORD(v25) )
          v25 = (unsigned __int16)v25;
      }
      else
      {
        v25 = (unsigned __int16)v25;
      }
    }
    if ( v25 >= v27 + (((unsigned __int16)v26 + 0xFFFF) << 16) )
      goto LABEL_52;
    v31 = ((v25 - v27) >> 16) + 1;
    if ( v25 < v27 )
      v31 = 0LL;
    v32 = *(_QWORD *)(v24 + 8 * v31 + 8);
    if ( (_DWORD)v31 )
      v25 += ((1 - (_DWORD)v31) << 16) - v27;
    if ( v25 >= *(_DWORD *)(v32 + 20) )
LABEL_52:
      v33 = 0LL;
    else
      v33 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                   + 16LL * (unsigned __int8)v25
                   + 8);
    if ( v33 != this )
      v30 = 0LL;
    *(_BYTE *)(v30 + 15) &= ~4u;
  }
}
