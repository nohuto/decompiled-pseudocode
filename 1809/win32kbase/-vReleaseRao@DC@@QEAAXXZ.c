/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0108BB8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  unsigned int v1; // eax
  GdiHandleManager *v3; // r13
  unsigned int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // ebp
  unsigned int v10; // ecx
  __int64 v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rax
  DC *v19; // rdx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v5 = *((_QWORD *)v3 + 2);
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 2056);
  v8 = v7;
  v9 = *(unsigned __int16 *)(v5 + 2);
  if ( v4 >= v7 + ((v9 + 0xFFFF) << 16) )
  {
    v13 = 0LL;
  }
  else
  {
    if ( v4 >= v7 )
    {
      v10 = ((v4 - v7) >> 16) + 1;
    }
    else
    {
      LOWORD(v9) = *(_WORD *)(v5 + 2);
      v10 = 0;
    }
    v11 = *(_QWORD *)(v5 + 8LL * v10 + 8);
    if ( v10 )
      v12 = v4 + ((1 - v10) << 16) - v7;
    else
      v12 = v4;
    v13 = 0LL;
    if ( v12 >= *(_DWORD *)(v11 + 20) )
      v14 = 0LL;
    else
      v14 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                      + 16LL * (unsigned __int8)v12
                      + 8);
    if ( v14 )
      v13 = *(_QWORD *)v11 + 24LL * v12;
  }
  v15 = GdiHandleManager::DecodeIndex(v3, v4);
  v16 = v15;
  if ( v15 >= v8 + (((unsigned __int16)v9 + 0xFFFF) << 16) )
    goto LABEL_20;
  if ( v15 >= v8 )
    v17 = ((v15 - v8) >> 16) + 1;
  else
    v17 = 0;
  v18 = *(_QWORD *)(v5 + 8LL * v17 + 8);
  if ( v17 )
    v16 = ((1 - v17) << 16) - v8 + (unsigned int)v16;
  if ( (unsigned int)v16 >= *(_DWORD *)(v18 + 20) )
LABEL_20:
    v19 = 0LL;
  else
    v19 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  if ( v19 == this )
    v6 = v13;
  *(_BYTE *)(v6 + 15) |= 4u;
}
