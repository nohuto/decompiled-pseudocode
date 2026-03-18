/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00CB50C
 * Callers:
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C0017B08 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0017DE4 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v7; // edx
  int v8; // r15d
  char v10; // si
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // al
  __int64 result; // rax
  _DWORD *v17; // rdx
  int v18; // ecx
  __int64 v19; // r9
  _DWORD *v20; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  v24 = a2;
  v4 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a1 + 72);
  v8 = v4 & 2;
  if ( v7 == 1 )
  {
    v11 = 2;
LABEL_19:
    v10 = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 72) == 2 )
  {
    v11 = 16;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 72) == 3 )
  {
    v11 = 256;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 72) != 4 )
  {
    if ( *(_DWORD *)(a1 + 72) == 5 )
    {
      v10 = 3;
      v11 = 0;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(a1 + 72) != 6 )
      return 0LL;
    v11 = 3;
    v8 = 1;
    goto LABEL_19;
  }
  v10 = 2;
  v11 = 3;
  v8 = 1;
LABEL_7:
  HIDWORD(v21) = *(_DWORD *)(a1 + 32);
  LODWORD(v22) = *(_DWORD *)(a1 + 36);
  DWORD1(v22) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v22 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v21 = a1;
  BYTE10(v21) = v7;
  BYTE11(v21) = 4;
  WORD4(v21) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v12 = 3;
  if ( !v8 )
    v12 = *(_DWORD *)(a2 + 28);
  if ( v12 <= v11 )
    v11 = v12;
  v13 = AllocThreadBufferWithTag(4 * v11 + 24, 1668573255LL, 0LL);
  v23 = v13;
  v14 = v13;
  if ( !v13 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  *(_BYTE *)v13 = 0;
  *(_BYTE *)(v13 + 3) = 0;
  *(_QWORD *)(v13 + 16) = v13 + 24;
  *(_DWORD *)(v13 + 4) = 0;
  v15 = 0;
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    v15 = 4;
  *(_BYTE *)(v14 + 3) = v15;
  *(_BYTE *)(v14 + 2) = v10;
  if ( v8 )
  {
    v17 = *(_DWORD **)(v14 + 16);
    *(_BYTE *)(v14 + 1) = 0;
    *(_DWORD *)(v14 + 8) = 3;
    if ( (*(_DWORD *)(a2 + 24) & 2) != 0 )
    {
      *v17 = **(_DWORD **)(a2 + 112);
      v17[1] = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL);
      v18 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    }
    else
    {
      v17[1] = 65280;
      if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
      {
        *v17 = 16711680;
        v18 = 255;
      }
      else
      {
        *v17 = 255;
        v18 = 16711680;
      }
    }
    v17[2] = v18;
  }
  else
  {
    *(_BYTE *)(v14 + 1) = 1;
    *(_DWORD *)(v14 + 4) = 255;
    *(_DWORD *)(v14 + 8) = v11;
    if ( v11 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v24) && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        v20 = *(_DWORD **)(v19 + 16);
        *v20 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        v20[1] = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else
      {
        XEPALOBJ::ulGetEntries((XEPALOBJ *)&v24, 0, v11, *(struct tagPALETTEENTRY **)(v19 + 16), 0);
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v21;
  *(_OWORD *)(a3 + 16) = v22;
  *(_QWORD *)(a3 + 32) = v23;
  return result;
}
