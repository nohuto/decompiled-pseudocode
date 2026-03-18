/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001FD50
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  DC *v14; // rdx
  int v15; // ecx
  __m128i v16; // xmm0
  int v17; // ecx
  int v18; // eax
  __int128 v19; // xmm0
  unsigned int v20; // ebx
  __int64 v21; // rsi
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  DC *v30; // rdx
  __int128 v31; // [rsp+20h] [rbp-38h]

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
  v6 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    v10 = 0LL;
  }
  else
  {
    v7 = ((v4 - v6) >> 16) + 1;
    if ( v4 < v6 )
      v7 = 0LL;
    v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
    if ( (_DWORD)v7 )
      v9 = v4 + ((1 - (_DWORD)v7) << 16) - v6;
    else
      v9 = v4;
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                   + 16LL * (unsigned __int8)v9
                   + 8) )
    {
      v10 = *(_QWORD *)v8 + 24LL * v9;
    }
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v5,
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v11 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v11 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    goto LABEL_65;
  v12 = ((v4 - v11) >> 16) + 1;
  if ( v4 < v11 )
    v12 = 0LL;
  v13 = *(_QWORD *)(v5 + 8 * v12 + 8);
  if ( (_DWORD)v12 )
    v4 += ((1 - (_DWORD)v12) << 16) - v11;
  if ( v4 >= *(_DWORD *)(v13 + 20) )
LABEL_65:
    v14 = 0LL;
  else
    v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8);
  if ( v14 != this )
    v10 = 0LL;
  if ( (*(_BYTE *)(v10 + 15) & 4) != 0 )
  {
    if ( !a2 )
      goto LABEL_53;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
      v15 = 1;
    }
    else
    {
      v15 = 3;
      if ( *((_DWORD *)a2 + 20) <= 0xA0u )
        v15 = 2;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = v15;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
LABEL_53:
      v19 = xmmword_1C01DD068;
    }
    else
    {
      v17 = *((_DWORD *)this + 258);
      v31 = *(_OWORD *)((char *)a2 + 88);
      v16 = (__m128i)v31;
      DWORD2(v31) -= v17;
      LODWORD(v31) = _mm_cvtsi128_si32(v16) - v17;
      v18 = *((_DWORD *)this + 259);
      DWORD1(v31) -= v18;
      HIDWORD(v31) -= v18;
      v19 = v31;
    }
    *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = v19;
    v20 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
    if ( v20 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*(_DWORD *)this,
                                    1)
             + 13) == HIWORD(v20) )
          v20 = (unsigned __int16)v20;
      }
      else
      {
        v20 = (unsigned __int16)*(_DWORD *)this;
      }
    }
    v21 = *((_QWORD *)gpHandleManager + 2);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( v20 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      v26 = 0LL;
    }
    else
    {
      v23 = ((v20 - v22) >> 16) + 1;
      if ( v20 < v22 )
        v23 = 0LL;
      v24 = *(_QWORD *)(v21 + 8 * v23 + 8);
      if ( (_DWORD)v23 )
        v25 = v20 + ((1 - (_DWORD)v23) << 16) - v22;
      else
        v25 = v20;
      v26 = 0LL;
      if ( v25 < *(_DWORD *)(v24 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                     + 16LL * (unsigned __int8)v25
                     + 8) )
      {
        v26 = *(_QWORD *)v24 + 24LL * v25;
      }
    }
    if ( v20 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v20,
                                    1)
             + 13) == HIWORD(v20) )
          v20 = (unsigned __int16)v20;
      }
      else
      {
        v20 = (unsigned __int16)v20;
      }
    }
    v27 = *(_DWORD *)(v21 + 2056);
    if ( v20 >= v27 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
      goto LABEL_54;
    v28 = ((v20 - v27) >> 16) + 1;
    if ( v20 < v27 )
      v28 = 0LL;
    v29 = *(_QWORD *)(v21 + 8 * v28 + 8);
    if ( (_DWORD)v28 )
      v20 += ((1 - (_DWORD)v28) << 16) - v27;
    if ( v20 >= *(_DWORD *)(v29 + 20) )
LABEL_54:
      v30 = 0LL;
    else
      v30 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                   + 16LL * (unsigned __int8)v20
                   + 8);
    if ( v30 != this )
      v26 = 0LL;
    *(_BYTE *)(v26 + 15) &= ~4u;
  }
}
