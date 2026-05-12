/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C0016EF0 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     RaidMachineRequireIoPortResource @ 0x1C00254D0 (RaidMachineRequireIoPortResource.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0036554 (McTemplateK0pd.c)
 *     WPP_SF_qD @ 0x1C003BAD4 (WPP_SF_qD.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rsi
  unsigned int v6; // r14d
  _DWORD *v7; // rdx
  _DWORD *v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  _DWORD *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  _DWORD *v20; // [rsp+38h] [rbp-50h]
  GUID v21; // [rsp+40h] [rbp-48h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v4 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 >= 0 )
  {
    Information = (_DWORD *)a2->IoStatus.Information;
    if ( Information )
    {
      *(_DWORD *)(a1 + 776) = Information[2];
      *(_DWORD *)(a1 + 780) = Information[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 184LL) & 0x200) != 0 && !RaidMachineRequireIoPortResource() )
      {
        v6 = 0;
        v7 = Information + 8;
        v8 = Information + 8;
        if ( Information[7] )
        {
          while ( 1 )
          {
            v9 = 0;
            v10 = v7[1];
            *(_WORD *)v8 = *(_WORD *)v7;
            *((_WORD *)v8 + 1) = *((_WORD *)v7 + 1);
            if ( v10 )
              break;
LABEL_13:
            v8[1] = v9;
            if ( v10 )
              v14 = &v7[8 * v10 - 8];
            else
              v14 = v7;
            v7 = v14 + 10;
            if ( v9 )
              v15 = &v8[8 * v9 - 8];
            else
              v15 = v8;
            ++v6;
            v8 = v15 + 10;
            if ( v6 >= Information[7] )
              goto LABEL_18;
          }
          v11 = v7 + 2;
          v12 = v10;
          while ( 1 )
          {
            if ( *((_BYTE *)v11 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v11 & 8) == 0 )
              break;
LABEL_12:
            v11 += 8;
            if ( !--v12 )
              goto LABEL_13;
          }
          *((_BYTE *)v11 + 1) = 0;
LABEL_11:
          v13 = 8LL * v9++;
          *(_OWORD *)&v8[v13 + 2] = *(_OWORD *)v11;
          *(_OWORD *)&v8[v13 + 6] = *((_OWORD *)v11 + 1);
          goto LABEL_12;
        }
      }
LABEL_18:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 184LL) & 0x100) != 0 )
      {
        if ( (unsigned int)RaidIsAdapterControlSupported(a1, 13) )
        {
          v19 = 0x1000000001LL;
          v20 = Information;
          v4 = RaCallMiniportAdapterControl(a1 + 312);
          if ( v4 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_qD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x1Du,
                (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids,
                a1,
                v4);
            }
            v4 = 0;
          }
        }
      }
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v21.Data1 = 0LL;
    *(_QWORD *)v21.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v21);
    if ( (byte_1C00617E2 & 0x20) != 0 )
    {
      LODWORD(v18) = a2->IoStatus.Status;
      McTemplateK0pd(v16, &EventPnpRequestComplete, &v21, a2, v18);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids,
      a1,
      a2,
      v4,
      v19,
      v20);
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
