/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00447C8
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C0040ED0 (DrvDisableMDEV.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00A6EB0 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B6E70 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  __int64 v14; // rbp
  HDEV *v15; // rdi

  v4 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdTrace(v6);
  v10 = 0LL;
  v11 = 1;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      if ( (_DWORD)v4 )
      {
        v14 = 56LL * (unsigned int)v10;
        v11 = DrvDisableDisplay(*(HSEMAPHORE **)((char *)a1 + v14 + 40), 0LL, v9);
        if ( !v11 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v14 + 40), 0LL, a3);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *((_DWORD *)a1 + 5) );
    if ( v11 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v10 )
    {
      v15 = (HDEV *)((char *)a1 + 40);
      do
      {
        if ( (_DWORD)v4 )
        {
          LOBYTE(v7) = 1;
          DrvDxgkDisplayOnOff(*v15, v7, a3);
          while ( !(unsigned int)DrvEnableDisplay(*v15) )
            ;
        }
        v15 += 7;
        --v10;
      }
      while ( v10 );
    }
  }
LABEL_5:
  v12 = WdLogNewEntry5_WdTrace(v8);
  *(_QWORD *)(v12 + 24) = v11;
  WdLogEvent5_WdTrace(v12);
  return (unsigned int)v11;
}
