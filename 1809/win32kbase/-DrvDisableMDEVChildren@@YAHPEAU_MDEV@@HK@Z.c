/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00A2988
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0055E78 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C00A26D0 (DrvDisableMDEV.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0093EF0 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(HSEMAPHORE **a1, int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  __int64 *v14; // rdi

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
        v11 = DrvDisableDisplay(a1[5 * v10 + 4], 0LL, v9);
        if ( !v11 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff((__int64)a1[5 * v10 + 4], 0LL, a3);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *((_DWORD *)a1 + 5) );
    if ( v11 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v10 )
    {
      v14 = (__int64 *)(a1 + 4);
      do
      {
        if ( (_DWORD)v4 )
        {
          LOBYTE(v7) = 1;
          DrvDxgkDisplayOnOff(*v14, v7, a3);
          while ( !(unsigned int)DrvEnableDisplay((HDEV)*v14) )
            ;
        }
        v14 += 5;
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
