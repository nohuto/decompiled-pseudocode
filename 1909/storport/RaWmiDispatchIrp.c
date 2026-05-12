/*
 * XREFs of RaWmiDispatchIrp @ 0x1C006F784
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1C006F700 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007168 (RaidAcquireAdapterRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidCompleteWmiIrp @ 0x1C001FA64 (RaidCompleteWmiIrp.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C001FB70 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_D @ 0x1C0038C58 (WPP_SF_D.c)
 *     RaWmiIrpRegisterRequest @ 0x1C006F8F8 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0075B10 (RaWmiIrpNormalRequest.c)
 */

__int64 __fastcall RaWmiDispatchIrp(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  int *v8; // rdx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi
  int v13; // eax
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  unsigned int v16; // r8d
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int LowPart; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+34h] [rbp-24h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  v19 = 0;
  v5 = 0LL;
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_6419fef45b0a382a4b32bdec8e3ae805_Traceguids,
      CurrentStackLocation->MinorFunction);
  }
  v8 = *(int **)(a1 + 64);
  v9 = *v8;
  if ( !*v8 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v10 = RaidAcquireAdapterRemoveLock(v5);
LABEL_7:
    if ( v10 < 0 )
    {
      v16 = v10;
      return RaidCompleteRequestEx(a2, 0, v16);
    }
    goto LABEL_8;
  }
  if ( v9 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    LOBYTE(a3) = 1;
    v10 = RaUnitAcquireRemoveLock(v4, (__int64)a2, a3);
    goto LABEL_7;
  }
LABEL_8:
  LOBYTE(v8) = CurrentStackLocation->MinorFunction;
  v17[0] = CurrentStackLocation->Parameters.Create.SecurityContext;
  v17[1] = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (unsigned __int8)v8 <= 7u )
    goto LABEL_31;
  if ( (_BYTE)v8 == 8 )
  {
    v13 = RaWmiIrpRegisterRequest(a1, v17);
LABEL_16:
    a2->IoStatus.Status = v13;
    v14 = v13;
    if ( v13 >= 0 )
      v15 = LowPart;
    else
      v15 = 0LL;
    a2->IoStatus.Information = v15;
    if ( v9 )
    {
      if ( v9 == 1 )
        RaUnitReleaseRemoveLock(v4);
    }
    else
    {
      RaidReleaseAdapterRemoveLock(v5);
    }
    v16 = v14;
    return RaidCompleteRequestEx(a2, 0, v16);
  }
  if ( (_BYTE)v8 == 9 )
  {
LABEL_31:
    v13 = RaWmiIrpNormalRequest(a1, v8, v17);
    goto LABEL_16;
  }
  v11 = RaidCompleteWmiIrp(a1, a2);
  if ( v9 )
  {
    if ( v9 == 1 )
      RaUnitReleaseRemoveLock(v4);
  }
  else
  {
    RaidReleaseAdapterRemoveLock(v5);
  }
  return v11;
}
