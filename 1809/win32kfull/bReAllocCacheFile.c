/*
 * XREFs of bReAllocCacheFile @ 0x1C026D4B4
 * Callers:
 *     EngFntCacheAllocInternal @ 0x1C026D5FC (EngFntCacheAllocInternal.c)
 * Callees:
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C27F8 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vUnmapFontCacheFile @ 0x1C00C3788 (vUnmapFontCacheFile.c)
 */

__int64 __fastcall bReAllocCacheFile(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  int *v3; // r9
  const unsigned __int16 *v5; // rcx
  int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // ebp
  int v9; // r14d
  const unsigned __int16 *v10; // rcx
  int *v11; // r9
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax

  v1 = qword_1C0317308;
  v2 = 0;
  v3 = (int *)a1;
  if ( (*(_DWORD *)(qword_1C0317308 + 16) & 4) != 0 )
    return 0LL;
  v5 = (const unsigned __int16 *)(unsigned int)(*(_DWORD *)(qword_1C0317308 + 32) - *(_DWORD *)(qword_1C0317308 + 40));
  v6 = *(_DWORD *)(*(_QWORD *)qword_1C0317308 + 24LL);
  v7 = (((_DWORD)v5 + (_DWORD)v3 + 7) & 0xFFFFFFF8) + 0x2000;
  v8 = *(_DWORD *)(qword_1C0317308 + 24) - *(_QWORD *)qword_1C0317308;
  v9 = v7 + v6;
  if ( *(_QWORD *)qword_1C0317308 )
  {
    vUnmapFontCacheFile();
    v1 = qword_1C0317308;
  }
  if ( (unsigned int)bMapFileRetainHandle(v5, (struct _FILEVIEW *)(v1 + 48), v9, v3) )
  {
    v12 = qword_1C0317308;
    v2 = 1;
    v13 = *(_QWORD *)(qword_1C0317308 + 56);
    *(_QWORD *)qword_1C0317308 = v13;
    *(_DWORD *)(v13 + 24) = v9;
    *(_DWORD *)(*(_QWORD *)v12 + 32LL) += v7;
    v14 = *(_QWORD *)v12;
    v15 = *(_QWORD *)v12 + v8;
    v16 = v15 + (unsigned int)(*(_DWORD *)(v12 + 32) - *(_DWORD *)(v12 + 24));
    *(_QWORD *)(v12 + 24) = v15;
    *(_QWORD *)(v12 + 32) = v16;
    *(_QWORD *)(v12 + 40) = v15 + *(unsigned int *)(v14 + 32) + *(unsigned int *)(v14 + 28);
  }
  else
  {
    v17 = (unsigned int)bMapFileRetainHandle(v10, (struct _FILEVIEW *)(qword_1C0317308 + 48), v6, v11);
    v18 = qword_1C0317308;
    if ( v17 )
    {
      v19 = *(_QWORD *)(qword_1C0317308 + 56);
      *(_DWORD *)(qword_1C0317308 + 16) |= 6u;
      *(_QWORD *)v18 = v19;
      *(_DWORD *)(v18 + 20) = 1;
    }
    else
    {
      *(_DWORD *)(qword_1C0317308 + 16) |= 1u;
    }
  }
  return v2;
}
