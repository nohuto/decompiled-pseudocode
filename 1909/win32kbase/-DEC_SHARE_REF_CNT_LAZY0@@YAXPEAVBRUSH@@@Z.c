/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001D460
 * Callers:
 *     GreDCSelectBrush @ 0x1C001AAE0 (GreDCSelectBrush.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C001ADA8 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001E190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDCSelectPen @ 0x1C007E2F0 (GreDCSelectPen.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C012781C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // esi
  int v3; // ebx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // r8
  unsigned int v8; // r10d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountEx((struct OBJECT *)a1) == 1 )
    {
      v2 = 0;
      v13 = 0LL;
      v14 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v13, v1, 16);
      v3 = v14;
      if ( v14 )
      {
        v4 = gpHandleManager;
        v5 = GdiHandleManager::DecodeIndex(gpHandleManager, *v13 & 0xFFFFFF);
        v6 = v5;
        v7 = *((_QWORD *)v4 + 2);
        v8 = *(_DWORD *)(v7 + 2056);
        if ( v5 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
          goto LABEL_20;
        if ( v5 >= v8 )
          v9 = ((v5 - v8) >> 16) + 1;
        else
          v9 = 0;
        v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
        if ( v9 )
          v6 = ((1 - v9) << 16) - v8 + v5;
        if ( v6 >= *(_DWORD *)(v10 + 20) )
LABEL_20:
          v11 = 0LL;
        else
          v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8LL * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
        v12 = *(_DWORD **)(v11 + 48);
        if ( v12 )
          v2 = *v12 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
        v3 = v14;
      }
      if ( v2 )
        bDeleteBrush(v1, 0);
      if ( v3 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
    }
  }
}
