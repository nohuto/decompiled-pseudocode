/*
 * XREFs of ?ivSendSettingsUpdateToContainer@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C0187A5C
 * Callers:
 *     ivBroadcastSettingsUpdateToAllContainers @ 0x1C0187C00 (ivBroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018D860 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C0188388 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DD60 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C018DE30 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@10KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

void __fastcall ivSendSettingsUpdateToContainer(const struct CONTAINER_ID *a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  struct _ETHREAD *CurrentThread; // r8
  int v5; // eax
  int v6; // edx
  int (*v7)(struct _IVSRContext *); // [rsp+38h] [rbp-50h]
  void *v8; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]

  CIVSerializer::CIVSerializer((CIVSerializer *)&v8, 0x18uLL);
  v2 = v10;
  if ( v10 )
  {
    v3 = v8;
    *(_DWORD *)v8 = v9 - 16;
    v3[1] = 1;
    *((_QWORD *)v3 + 1) = 7LL;
    *(_QWORD *)(v2 + 4) = gTouchPadParameters;
    *(_DWORD *)(v2 + 12) = DWORD2(gTouchPadParameters);
    *(_DWORD *)(v2 + 16) = qword_1C0213A18;
    *(_DWORD *)(v2 + 20) = WORD6(gTouchPadParameters) & 0x7FF | ((*(_BYTE *)(&qword_1C0213A18 + 1) & 0x7F) << 11);
    *(_DWORD *)v2 = *((_DWORD *)gpsi + 497);
    CurrentThread = KeGetCurrentThread();
    if ( *(_WORD *)a1 || *((_WORD *)a1 + 1) )
      v5 = ivrIVSend(v8, v9, CurrentThread, CurrentThread, gpHidInput, 2u, a1, v7);
    else
      v5 = ivrIVBroadcast(v8, v9, CurrentThread, CurrentThread, gpHidInput, 2u, a1, v7);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v6, 12, 13, (__int64)&WPP_bf142974e6cd37e959979a62310fe389_Traceguids, v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      (_DWORD)gBaseLog,
      v2,
      v10 + 12,
      v10 + 12,
      (__int64)&WPP_bf142974e6cd37e959979a62310fe389_Traceguids);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v8);
}
