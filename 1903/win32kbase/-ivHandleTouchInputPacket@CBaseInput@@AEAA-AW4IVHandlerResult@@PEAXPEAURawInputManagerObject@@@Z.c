/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D5F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C006CA5C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     WPP_RECORDER_SF_s @ 0x1C0135B98 (WPP_RECORDER_SF_s.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C0150090 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01534D4 (rimProcessCompleteFrame.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01895D4 (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     FindRimDevByName @ 0x1C018DF7C (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C018E214 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 RimDevByName; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  struct RIMCOMPLETEFRAME *v9; // r13
  __int64 v10; // r8
  struct RIMCOMPLETEFRAME *v11; // rbx
  CBaseInput *v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]
  struct RIMCOMPLETEFRAME *v20; // [rsp+A8h] [rbp+38h] BYREF
  char v21; // [rsp+B8h] [rbp+48h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gBaseLog,
      a2,
      12,
      35,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
      (__int64)"IV_PACKET_TYPE_TOUCH_INPUT");
  v16 = 0LL;
  v17 = 0LL;
  v5 = 1;
  v18 = 0LL;
  v19 = 1;
  v15 = a2;
  if ( (int)IVDeSerializeIVTouchInputPacket((struct _IVTouchInputPacket *)a2, (struct CIVSerializer *)v14) >= 0 )
  {
    if ( *(_DWORD *)(a2 + 112) )
    {
      v20 = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &v20);
      v11 = v20;
      if ( v20 )
      {
        v12 = gpHidInput;
        *((_QWORD *)gpHidInput + 161) = v20;
        CRIMBase::SensorDoWorkAndWait((__int64)v12, 14LL, v10);
        Win32FreePool((__int64)v11);
      }
    }
    else
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v21, 1, 0);
      RIMLockExclusive(a3 + 104);
      if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
      {
        *(_QWORD *)(a3 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v21);
        v5 = 2;
      }
      else
      {
        RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
        *(_QWORD *)(a3 + 112) = 0LL;
        v7 = RimDevByName;
        ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
        KeLeaveCriticalRegion();
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 16);
          v20 = 0LL;
          rimGetCompleteFrameFromIVCompleteFrame(a2, v8, &v20);
          v9 = v20;
          if ( v20 )
          {
            RIMLockExclusive(a3 + 104);
            RIMLockExclusive(a3 + 568);
            *((_QWORD *)v9 + 4) = *(_QWORD *)(v7 + 16);
            rimProcessCompleteFrame((HANDLE *)a3, (struct RIMDEV *)v7, v9);
            *(_QWORD *)(a3 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 568, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(a3 + 112) = 0LL;
            ExReleasePushLockExclusiveEx(a3 + 104, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 12, 36, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
          v5 = 0;
        }
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v21);
      }
    }
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v14);
  return v5;
}
