/*
 * XREFs of HmgSafeNextObjt @ 0x1C0049980
 * Callers:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0049830 (bDynamicProcessAllDriverRealizations.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00CB700 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z @ 0x1C00CCDCC (-DrvBackoutRedirectionDeviceBitmap@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00D09A8 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  unsigned int v3; // ebx
  GdiHandleManager *v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx

  v3 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | (a1 >> 8) & 0xFF0000) >> 16 )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)a1;
    }
  }
  v4 = gpHandleManager;
  v5 = *(_DWORD *)gpHandleManager;
  while ( ++v3 < v5 )
  {
    v6 = *((_QWORD *)v4 + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    if ( v3 < v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      v8 = ((v3 - v7) >> 16) + 1;
      if ( v3 < v7 )
        v8 = 0LL;
      v9 = *(_QWORD *)(v6 + 8 * v8 + 8);
      if ( (_DWORD)v8 )
        v10 = v3 + ((1 - (_DWORD)v8) << 16) - v7;
      else
        v10 = v3;
      v11 = 0LL;
      if ( v10 < *(_DWORD *)(v9 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                     + 16LL * (unsigned __int8)v10
                     + 8) )
      {
        v11 = *(_QWORD *)v9 + 24LL * v10;
      }
      if ( v11 )
      {
        if ( !v3 )
          return 0LL;
        if ( *(_BYTE *)(v11 + 14) == a2 )
        {
          v12 = v3;
          if ( v3 >= 0x10000 )
          {
            if ( v5 > 0x10000 )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v4 + 2),
                                          (unsigned __int16)v3,
                                          1)
                   + 13) == HIWORD(v3) )
                v12 = (unsigned __int16)v3;
            }
            else
            {
              v12 = (unsigned __int16)v3;
            }
          }
          v13 = *((_QWORD *)v4 + 2);
          v14 = *(_DWORD *)(v13 + 2056);
          if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
            return 0LL;
          v15 = ((v12 - v14) >> 16) + 1;
          if ( v12 < v14 )
            v15 = 0LL;
          v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
          if ( (_DWORD)v15 )
            v12 += ((1 - (_DWORD)v15) << 16) - v14;
          if ( v12 >= *(_DWORD *)(v16 + 20) )
            v17 = 0LL;
          else
            v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                            + 16LL * (unsigned __int8)v12
                            + 8);
          if ( !v17
            || (*(_BYTE *)(v11 + 15) & 0x40) == 0
            || *(_WORD *)(v17 + 12) && *(struct _KTHREAD **)(v17 + 16) == KeGetCurrentThread() )
          {
            return v17;
          }
        }
      }
    }
  }
  return 0LL;
}
