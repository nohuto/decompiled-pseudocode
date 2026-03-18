/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000EAD0 (NtGdiCreateRectRgn.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C001A124 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C001B1E4 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C001B258 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001B7A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001CAA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00502F8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C006C4E4 (-vCleanupRegions@@YAXK@Z.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C0070980 (HmgIsObjectOwnedByW32Pid.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C009E5D4 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C0120B00 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C012F460 (GreIntersectVisRect.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  GdiHandleEntryDirectory *v5; // r15
  struct OBJECT *v6; // rbp
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = 0LL;
  v7 = *((_DWORD *)v5 + 514);
  if ( v4 >= v7 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
  {
    v11 = 0LL;
  }
  else
  {
    v8 = ((v4 - v7) >> 16) + 1;
    if ( v4 < v7 )
      v8 = 0LL;
    v9 = *((_QWORD *)v5 + v8 + 1);
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
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v4, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v12 = *((_DWORD *)v5 + 514);
  if ( v4 < v12 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
  {
    v13 = ((v4 - v12) >> 16) + 1;
    if ( v4 < v12 )
      v13 = 0LL;
    v14 = *((_QWORD *)v5 + v13 + 1);
    if ( (_DWORD)v13 )
      v4 += ((1 - (_DWORD)v13) << 16) - v12;
    if ( v4 < *(_DWORD *)(v14 + 20) )
      v6 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                             + 16LL * (unsigned __int8)v4
                             + 8);
  }
  if ( v6 == a2 )
    return (struct _ENTRY *)v11;
  else
    return 0LL;
}
