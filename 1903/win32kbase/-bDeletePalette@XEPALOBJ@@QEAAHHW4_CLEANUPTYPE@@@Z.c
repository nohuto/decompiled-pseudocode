/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0058678
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     bDeletePalette @ 0x1C0058600 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF1E8 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C007ACE0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgFree @ 0x1C00B35F0 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00BE02C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2, int a3)
{
  struct PALETTE *v3; // r9
  unsigned int v7; // edi
  unsigned __int8 *v8; // rcx
  struct HOBJ__ *v9; // rcx
  struct PALETTE *v11; // rcx
  struct PALETTE *v12; // rcx
  struct _SLIST_ENTRY *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(struct PALETTE **)a1;
  v7 = 1;
  if ( *(struct PALETTE **)a1 == ppalDefault || !v3 || v3 == ppalMono )
    return v7;
  v8 = (unsigned __int8 *)*((_QWORD *)v3 + 13);
  if ( v8 )
  {
    if ( v8 != gpRGBXlate )
    {
      Win32FreePool((__int64)v8);
      v3 = *(struct PALETTE **)a1;
    }
    *((_QWORD *)v3 + 13) = 0LL;
    v3 = *(struct PALETTE **)a1;
  }
  if ( (*((_DWORD *)v3 + 6) & 0x100) != 0 )
  {
    if ( *((_DWORD *)v3 + 14) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( !a2 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x1000000) != 0 )
    return 0LL;
  v9 = **(struct HOBJ__ ***)a1;
  if ( a3 == 3 )
  {
    if ( !HmgRemoveObjectImpl(v9, 0, 1, 2u, 8, 0LL) )
      return 0LL;
    goto LABEL_18;
  }
  if ( HmgRemoveObject(v9, 0, 1, 0, 8, 0LL) )
  {
    if ( a3 == 2 )
    {
LABEL_23:
      FreePaletteMemory(*(struct _SLIST_ENTRY **)a1);
      goto LABEL_34;
    }
LABEL_18:
    v11 = *(struct PALETTE **)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *((_QWORD *)v11 + 6) )
    {
      v13 = (struct _SLIST_ENTRY *)*((_QWORD *)v11 + 6);
      XEPALOBJ::vUnrefPalette(&v13);
      v11 = *(struct PALETTE **)a1;
    }
    if ( v11 != *((struct PALETTE **)v11 + 15) )
    {
      v13 = (struct _SLIST_ENTRY *)*((_QWORD *)v11 + 15);
      XEPALOBJ::vUnrefPalette(&v13);
    }
    goto LABEL_23;
  }
  if ( a3 != 2 && (*(_WORD *)(*(_QWORD *)a1 + 14LL) & 0x4000) != 0 )
    return v7;
  if ( !a2 )
    return 0;
  if ( a3 != 2 )
  {
    v12 = *(struct PALETTE **)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 && *((_QWORD *)v12 + 6) )
    {
      v13 = (struct _SLIST_ENTRY *)*((_QWORD *)v12 + 6);
      XEPALOBJ::vUnrefPalette(&v13);
      v12 = *(struct PALETTE **)a1;
    }
    if ( v12 != *((struct PALETTE **)v12 + 15) )
    {
      v13 = (struct _SLIST_ENTRY *)*((_QWORD *)v12 + 15);
      XEPALOBJ::vUnrefPalette(&v13);
    }
  }
  HmgFree(**(_QWORD **)a1);
LABEL_34:
  *(_QWORD *)a1 = 0LL;
  return v7;
}
