/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E630C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct _MOVESIZEDATA *a1)
{
  unsigned int v1; // r8d
  __int128 v3; // xmm0
  __int64 v4; // r9
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // eax

  v1 = *((_DWORD *)a1 + 49);
  v3 = *(_OWORD *)((char *)a1 + 136);
  v4 = *((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 26) = v4;
  *(_OWORD *)((char *)a1 + 24) = v3;
  v5 = *((_DWORD *)a1 + 56);
  if ( ((v1 ^ (v1 >> 5)) & 0x300) != 0 || *((_DWORD *)a1 + 60) != v5 )
    v6 = 0x80000;
  else
    v6 = 0;
  *((_DWORD *)a1 + 60) = v5;
  *((_QWORD *)a1 + 29) = v4;
  v7 = (((unsigned __int16)(v6 | v1) | 0x1000) ^ (unsigned __int16)((v6 | v1 & 0xFFF7FFFF | 0x1000) >> 5)) & 0x100 ^ (v6 | v1 & 0xFFF7FFFF | 0x1000);
  v8 = *((_DWORD *)a1 + 70);
  *((_DWORD *)a1 + 49) = (((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 5)) & 0x200 ^ v7) & 0xFFEFFFFF;
  *((_DWORD *)a1 + 70) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * v8)) & 2;
}
