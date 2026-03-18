/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C006892C
 * Callers:
 *     GreGetRealizationInfo @ 0x1C0164FD8 (GreGetRealizationInfo.c)
 * Callees:
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C004E9F8 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO2 *a2)
{
  unsigned int v4; // r11d
  __int64 v5; // rdx
  int v6; // eax
  char v7; // al
  int v8; // ebp
  _DWORD *v10; // rsi
  __int16 v11; // bx
  unsigned __int16 v12; // dx
  unsigned int v13; // r8d
  __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r10
  __int64 *v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  __int16 v21; // ax
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx

  v4 = 1;
  v5 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 48LL);
  if ( (v6 & 2) != 0 )
    v7 = 1;
  else
    v7 = ((v6 & 4) == 0) | 2;
  *((_BYTE *)a2 + 4) = v7;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v5 + 140);
  *((_WORD *)a2 + 3) = 0;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 16 )
  {
    v10 = *(_DWORD **)this;
    v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v18 = (__int64 *)(*((_QWORD *)v10 + 16) + 216LL + 8LL * v12);
      do
      {
        v19 = *v18--;
        v20 = *(_DWORD *)(v19 + 12);
        v21 = v11 - 1;
        if ( (v20 & 0x100) == 0 )
          v21 = v11;
        v11 = v21;
        --v12;
      }
      while ( v12 );
    }
    v13 = v10[3];
    v14 = (v13 >> 13) & 1 | 2;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v10 + 16) + 36LL);
    *((_WORD *)a2 + 10) = v11 - 1;
    if ( (v13 & 0x4000) == 0 )
      v14 = (v13 >> 13) & 1;
    *((_WORD *)a2 + 11) = v14;
    if ( v8 != 24 )
    {
      if ( IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)) )
      {
        v22 = v15 + *(unsigned int *)(v15 + 204);
        v23 = v16;
        for ( v17[7] = *(_DWORD *)(v22 + 4); v23 < *(_DWORD *)(v22 + 4); v17[v24 + 8] = *(_DWORD *)(v22 + 4 * v24 + 8) )
        {
          v24 = v23;
          v23 += v4;
        }
        v25 = v16;
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 208LL);
        v17[25] = *(_DWORD *)(v26 + 4);
        if ( *(_DWORD *)(v26 + 4) > (unsigned int)v16 )
        {
          do
          {
            v27 = v25;
            v25 += v4;
            v28 = 5 * v27;
            *(_OWORD *)&v17[2 * v28 + 26] = *(_OWORD *)(v26 + 40 * v27 + 8);
            *(_OWORD *)&v17[2 * v28 + 30] = *(_OWORD *)(v26 + 40 * v27 + 24);
            *(_QWORD *)&v17[2 * v28 + 34] = *(_QWORD *)(v26 + 40 * v27 + 40);
          }
          while ( v25 < *(_DWORD *)(v26 + 4) );
        }
        for ( v17[186] = *(_DWORD *)(v22 + 72); (unsigned int)v16 < *(_DWORD *)(v22 + 4); v16 = v4 + (unsigned int)v16 )
          v17[v16 + 187] = *(_DWORD *)(v22 + 4 * v16 + 76);
      }
      else
      {
        v17[7] = v16;
        v17[25] = v16;
        v17[186] = v16;
      }
    }
  }
  return v4;
}
