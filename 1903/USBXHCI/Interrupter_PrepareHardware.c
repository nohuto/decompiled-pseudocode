/*
 * XREFs of Interrupter_PrepareHardware @ 0x1C00667BC
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001F318 (Interrupter_SetSecondaryInterrupterCount.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C001F748 (WPP_RECORDER_SF_Dd.c)
 *     Interrupter_CmResList_GetInterrupterCountAndType @ 0x1C00658D0 (Interrupter_CmResList_GetInterrupterCountAndType.c)
 *     Interrupter_CreateInterrupter @ 0x1C0065AE8 (Interrupter_CreateInterrupter.c)
 *     Interrupter_PopulateInterrupterLookupTable @ 0x1C0066694 (Interrupter_PopulateInterrupterLookupTable.c)
 *     Interrupter_PrepareInterrupter @ 0x1C0066D14 (Interrupter_PrepareInterrupter.c)
 */

__int64 __fastcall Interrupter_PrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v4; // r15
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // r13d
  bool v15; // cc
  PVOID PoolWithTag; // rax
  __int64 v17; // rdx
  unsigned __int16 v18; // r9
  _QWORD *v19; // rcx
  unsigned int v20; // ebp
  unsigned int i; // r14d
  _BYTE *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // rbp
  unsigned __int16 v29; // r9
  __int64 v30; // r14
  int v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  unsigned int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v35 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_DWORD *)(a1 + 16);
  Interrupter_CmResList_GetInterrupterCountAndType(a1, a2, &v34, (int *)(a1 + 16));
  v7 = v34;
  if ( !v34 )
  {
    v8 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v9 = v34 + 16;
LABEL_4:
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 2u, 9u, v9, (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
    return v8;
  }
  if ( *(_DWORD *)(v3 + 628) == 1 )
  {
    v10 = *(_QWORD *)(v3 + 88);
    v11 = (*(_DWORD *)(v10 + 80) >> 8) & 0x7FF;
    if ( v11 < 2 )
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      v9 = 17;
      goto LABEL_4;
    }
    if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      v9 = 18;
      goto LABEL_4;
    }
    v12 = *(_DWORD *)(a1 + 64);
    if ( v12 == -1 )
    {
      if ( g_ReservedMessageForOffloadMode == -1 )
        g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 80LL) >> 8) & 0x7FF) - 1;
      v10 = *(_QWORD *)(v3 + 88);
    }
    else if ( v12 >= v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v3 + 72),
          2u,
          9u,
          0x13u,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
          *(_DWORD *)(a1 + 64),
          (*(_DWORD *)(v10 + 80) >> 8) & 0x7FF);
      *(_DWORD *)(v3 + 628) = 0;
      return (unsigned int)-1073741823;
    }
    if ( g_ReservedMessageForOffloadMode >= ((*(_DWORD *)(v10 + 80) >> 8) & 0x7FFu) )
      g_ReservedMessageForOffloadMode = ((*(_DWORD *)(*(_QWORD *)(v3 + 88) + 80LL) >> 8) & 0x7FF) - 1;
    v13 = g_ReservedMessageForOffloadMode;
    v14 = 1;
    v7 = v34;
    v15 = v34 <= g_ReservedMessageForOffloadMode;
    *(_DWORD *)(a1 + 64) = g_ReservedMessageForOffloadMode;
    if ( !v15 )
      v13 = v7;
  }
  else
  {
    v13 = v34 - 1;
    v14 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  (unsigned int)(8 * v13 + 8),
                  0x49434858u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v9 = 20;
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 80) = v13 + 1;
  memset(PoolWithTag, 0, (unsigned int)(8 * v13 + 8));
  LOBYTE(v17) = *v4 != 0;
  v8 = Interrupter_PrepareInterrupter(*(_QWORD *)(a1 + 40), v17);
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v18 = 21;
    goto LABEL_66;
  }
  v19 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v14 + 1;
  *v19 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(v3 + 336) & 0x1000LL) != 0 )
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
  v20 = 0;
  if ( *(_DWORD *)(a1 + 20) && v7 > 1 && *v4 == 2 )
  {
    for ( i = 0;
          i < (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2432))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                a3);
          ++i )
    {
      v22 = (_BYTE *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       a3,
                       i);
      if ( *v22 == 2 && (v22[2] & 3) == 3 )
      {
        if ( v20 )
        {
          if ( v20 == *(_DWORD *)(a1 + 64) )
          {
            Debug_FreAssertMsg(
              (__int64)"Message number reserved for software offload mode is visible to Windows",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
              493);
          }
          else
          {
            v23 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    a3,
                    i);
            v24 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2440))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    v35,
                    i);
            v8 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, v20, v24, v23, &v36, 0LL);
            if ( (v8 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v8;
              v29 = 22;
LABEL_58:
              WPP_RECORDER_SF_Dd(*(_QWORD *)(v3 + 72), v25, v26, v29, v32);
              return v8;
            }
            v27 = v36;
            LOBYTE(v25) = 1;
            v8 = Interrupter_PrepareInterrupter(v36, v25);
            if ( (v8 & 0x80000000) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v8;
              v29 = 23;
              goto LABEL_58;
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v20) = v27;
          }
          ++v20;
        }
        else
        {
          v20 = 1;
        }
      }
    }
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 20);
  }
  if ( v14 != 1 )
  {
LABEL_63:
    v8 = Interrupter_PopulateInterrupterLookupTable(a1);
    if ( (v8 & 0x80000000) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    v18 = 26;
LABEL_66:
    LODWORD(v33) = v8;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), 2u, 9u, v18, (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids, v33);
    return v8;
  }
  v28 = *(unsigned int *)(a1 + 64);
  v8 = Interrupter_CreateInterrupter(*(_QWORD *)a1, v3, *(_DWORD *)(a1 + 64), 0LL, 0LL, &v36, 0LL);
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = 24;
      goto LABEL_58;
    }
    return v8;
  }
  v30 = v36;
  LOBYTE(v25) = 1;
  v8 = Interrupter_PrepareInterrupter(v36, v25);
  if ( (v8 & 0x80000000) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v28) = v30;
    *(_QWORD *)(a1 + 72) = v30;
    goto LABEL_63;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 25;
    goto LABEL_58;
  }
  return v8;
}
