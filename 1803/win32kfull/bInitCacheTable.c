/*
 * XREFs of bInitCacheTable @ 0x1C0259D90
 * Callers:
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C004F654 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00566C8 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall bInitCacheTable(int a1, int a2, __int64 a3, int *a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // r13d
  __int64 v9; // rdx
  unsigned int v10; // r13d
  int v11; // r12d
  unsigned int v12; // r14d
  int v13; // r15d
  int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx

  v7 = a2 + 200;
  v9 = qword_1C0326C58;
  v10 = a1 + v7;
  v11 = 768 * a1;
  v12 = 0;
  v13 = a2 << 11;
  v16 = v13 + 768 * a1 + ((28 * v10 + 323) & 0xFFFFFFF8);
  if ( *(_QWORD *)qword_1C0326C58 )
  {
    vUnmapFontCacheFile();
    v9 = qword_1C0326C58;
  }
  v17 = *(void **)(v9 + 96);
  if ( v17 )
  {
    ZwClose(v17);
    v9 = qword_1C0326C58;
    *(_QWORD *)(qword_1C0326C58 + 96) = 0LL;
  }
  if ( (unsigned int)bMapFileRetainHandle((unsigned __int16 *)v17, (struct _FILEVIEW *)(v9 + 48), v16, a4) )
  {
    v18 = qword_1C0326C58;
    v19 = *(_QWORD *)(qword_1C0326C58 + 56);
    *(_QWORD *)qword_1C0326C58 = v19;
    memset((void *)(v19 + 72), 255, 0xF4uLL);
    memset((void *)(*(_QWORD *)v18 + 316LL), 0, 28LL * v10);
    *(_DWORD *)(*(_QWORD *)v18 + 12LL) = a7;
    *(_DWORD *)(*(_QWORD *)v18 + 16LL) = v10;
    *(_DWORD *)(*(_QWORD *)v18 + 20LL) = 0;
    **(_DWORD **)v18 = 0;
    *(_QWORD *)(*(_QWORD *)v18 + 56LL) = a3;
    *(_QWORD *)(*(_QWORD *)v18 + 64LL) = a4;
    *(_QWORD *)(*(_QWORD *)v18 + 40LL) = a5;
    *(_QWORD *)(*(_QWORD *)v18 + 48LL) = a6;
    *(_DWORD *)(*(_QWORD *)v18 + 24LL) = v16;
    *(_QWORD *)(*(_QWORD *)v18 + 28LL) = (unsigned int)(v11 + v13);
    *(_DWORD *)(*(_QWORD *)v18 + 36LL) = 0;
    return 1;
  }
  return v12;
}
