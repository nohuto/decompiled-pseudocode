/*
 * XREFs of EngUnlockSurface @ 0x1C0021A50
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00FB800 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C00237F0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00A97DC (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  struct OBJECT *p_pvScan0; // rbp
  unsigned int hsurf; // esi
  struct OBJECT *v3; // rdi
  GdiHandleManager *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r14
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // r10d
  _QWORD *v12; // r11
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[32]; // [rsp+20h] [rbp-58h] BYREF
  struct OBJECT *v19; // [rsp+40h] [rbp-38h]

  if ( pso )
  {
    p_pvScan0 = (struct OBJECT *)&pso[-1].pvScan0;
    hsurf = (unsigned int)pso->hsurf;
    v3 = 0LL;
    v4 = gpHandleManager;
    v5 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000);
    v6 = *((_QWORD *)v4 + 2);
    v7 = v5;
    v8 = *(_DWORD *)(v6 + 2056);
    if ( v5 < v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    {
      v9 = ((v5 - v8) >> 16) + 1;
      if ( v5 < v8 )
        v9 = 0LL;
      if ( (_DWORD)v9 )
        v7 = ((1 - (_DWORD)v9) << 16) - v8 + v5;
      if ( GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v6 + 8 * v9 + 8), v7) )
        v10 = *v12 + 24LL * v11;
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 14) == 5 && *(_WORD *)(v10 + 12) == HIWORD(hsurf) )
        {
          v13 = GdiHandleManager::DecodeIndex(v4, (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000);
          v14 = *(_DWORD *)(v6 + 2056);
          v15 = v13;
          if ( v13 < v14 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
          {
            v16 = ((v13 - v14) >> 16) + 1;
            if ( v13 < v14 )
              v16 = 0LL;
            v17 = *(_QWORD *)(v6 + 8 * v16 + 8);
            if ( (_DWORD)v16 )
              v15 = ((1 - (_DWORD)v16) << 16) - v14 + (unsigned int)v15;
            if ( (unsigned int)v15 < *(_DWORD *)(v17 + 20) )
              v3 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8))
                                     + 16LL * (unsigned __int8)v15
                                     + 8);
          }
        }
      }
    }
    if ( p_pvScan0 == v3 )
    {
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v18);
      v19 = p_pvScan0;
      DEC_SHARE_REF_CNT(p_pvScan0);
      v19 = 0LL;
      SURFREF::~SURFREF((SURFREF *)v18);
    }
  }
}
