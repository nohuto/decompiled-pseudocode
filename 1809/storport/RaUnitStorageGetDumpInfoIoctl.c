/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C0037D68 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C0037E30 (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x1C0049D50 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00728F0 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0073BB8 (RaidAdapterPopulateMiniportDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1C00757B8 (RaidUnitCreateDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID *v3; // rbx
  char v4; // r13
  PVOID v5; // r12
  char v6; // r15
  PVOID *v7; // r8
  __int64 *v8; // rsi
  unsigned int v10; // edi
  __int64 Parameters; // r14
  int v12; // eax
  int DumpInfo; // eax
  __int64 v14; // rcx
  int v15; // eax
  PVOID *v16; // r9
  PVOID **v17; // r8
  PVOID *v18; // rax
  PVOID *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r11
  _QWORD *v22; // r10
  __int64 v23; // r9
  _QWORD *v24; // r10
  _QWORD *v25; // rdx
  int v26; // r10d
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  char *v30; // r8
  PVOID v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  PVOID *v35; // [rsp+40h] [rbp-28h] BYREF
  PVOID *v36; // [rsp+48h] [rbp-20h] BYREF
  PVOID v37[3]; // [rsp+50h] [rbp-18h] BYREF
  char v38; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  char v40; // [rsp+C0h] [rbp+58h] BYREF
  char v41; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = 0;
  v5 = 0LL;
  v38 = 0;
  v6 = 0;
  v37[0] = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v8 = a1;
  v41 = 0;
  LOBYTE(a1) = 0;
  v36 = 0LL;
  v40 = 0;
  if ( a2->RequestorMode )
  {
    v10 = -1073741790;
    return RaidCompleteRequestEx(Irp, 0, v10);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
  {
    v10 = -1073741789;
    return RaidCompleteRequestEx(Irp, 0, v10);
  }
  Parameters = (__int64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( *(_DWORD *)Parameters != 72 )
  {
    v10 = -1073741811;
    return RaidCompleteRequestEx(Irp, 0, v10);
  }
  v12 = *(_DWORD *)(Parameters + 8);
  if ( v12 && v12 < 16 )
  {
    if ( v12 != 1 )
    {
      v26 = *(_DWORD *)(Parameters + 4);
      if ( v26 == 1 )
        v3 = (PVOID *)v8[405];
      else
        v3 = (PVOID *)v8[406];
      v35 = v3;
      if ( v3 )
        goto LABEL_66;
      v27 = 0LL;
      v28 = *(_QWORD **)(Parameters + 24);
      if ( v28 != (_QWORD *)(Parameters + 24) )
      {
        while ( 1 )
        {
          v3 = (PVOID *)(v28 - 1);
          v29 = v28[2];
          v27 = v28 - 1;
          v35 = (PVOID *)(v28 - 1);
          v30 = (char *)(v29 - v8[247]);
          if ( !v30 )
            v30 = (char *)v3[4] - v8[248];
          if ( !v30 )
            break;
          v28 = (_QWORD *)*v28;
          v3 = 0LL;
          v35 = 0LL;
          if ( v28 == (_QWORD *)(Parameters + 24) )
            goto LABEL_43;
        }
        if ( v26 == 1 )
          v8[405] = (__int64)v3;
        else
          v8[406] = (__int64)v3;
        v31 = v3[7];
        v32 = v8[3];
        if ( *(_DWORD *)(Parameters + 4) == 1 )
          *(_QWORD *)(v32 + 5800) = v31;
        else
          *(_QWORD *)(v32 + 5808) = v31;
      }
      if ( v27 )
      {
LABEL_66:
        v33 = (__int64)v3[7];
        if ( v33 )
        {
          v10 = RaidAdapterPopulateMiniportDumpInfo((__int64)a2, v8[3], v33, Parameters);
          return RaidCompleteRequestEx(Irp, 0, v10);
        }
      }
LABEL_43:
      v10 = -1073741811;
      goto LABEL_61;
    }
    DumpInfo = RaidUnitCreateDumpInfo((_DWORD)a1, (_DWORD)v8, Parameters, (unsigned int)&v35, (__int64)&v41);
    v6 = v41;
    v10 = DumpInfo;
    if ( DumpInfo < 0 )
    {
      if ( v41 != 1 )
      {
        v3 = v35;
        goto LABEL_60;
      }
    }
    else if ( v41 != 1 )
    {
      v15 = RaidAdapterCreateDumpInfo(v14, v8[3], Parameters, v37, &v38, &v36, &v40);
      LOBYTE(a1) = v40;
      v10 = v15;
      if ( v15 < 0 )
      {
        v4 = v38;
        v5 = v37[0];
        v3 = v35;
        v7 = v36;
      }
      else
      {
        v16 = v36;
        if ( !v40 )
        {
          v17 = *(PVOID ***)(Parameters + 64);
          v18 = v36 + 1;
          if ( *v17 != (PVOID *)(Parameters + 56) )
            goto LABEL_22;
          *v18 = (PVOID)(Parameters + 56);
          v16[2] = v17;
          *v17 = v18;
          *(_QWORD *)(Parameters + 64) = v18;
        }
        v19 = v35;
        v7 = 0LL;
        v4 = v38;
        v20 = v37[0];
        v36 = 0LL;
        v35[8] = v16;
        if ( !v4 )
        {
          v21 = *(_QWORD **)(Parameters + 48);
          v22 = v20 + 1;
          if ( *v21 != Parameters + 40 )
            goto LABEL_22;
          *v22 = Parameters + 40;
          v20[2] = v21;
          *v21 = v22;
          *(_QWORD *)(Parameters + 48) = v22;
          v23 = v8[3];
          if ( *(_DWORD *)(Parameters + 4) == 1 )
            *(_QWORD *)(v23 + 5800) = v20;
          else
            *(_QWORD *)(v23 + 5808) = v20;
        }
        v19[7] = v20;
        v24 = *(_QWORD **)(Parameters + 32);
        v25 = v19 + 1;
        v5 = 0LL;
        v37[0] = 0LL;
        if ( *v24 != Parameters + 24 )
LABEL_22:
          __fastfail(3u);
        *v25 = Parameters + 24;
        v19[2] = v24;
        *v24 = v25;
        *(_QWORD *)(Parameters + 32) = v25;
        if ( *(_DWORD *)(Parameters + 4) == 1 )
          v8[405] = (__int64)v19;
        else
          v8[406] = (__int64)v19;
        *(_QWORD *)(Parameters + 16) = v19;
        v35 = 0LL;
      }
      goto LABEL_54;
    }
    if ( *(_DWORD *)(Parameters + 4) == 1 )
      v8[405] = (__int64)v35;
    else
      v8[406] = (__int64)v35;
    v35 = 0LL;
    goto LABEL_60;
  }
  v10 = -1073741811;
LABEL_54:
  if ( !(_BYTE)a1 && v7 )
    RaidAdapterFreeDriverInfo(&v36);
  if ( !v4 && v5 )
    RaidAdapterFreeDumpInfo(v37);
LABEL_60:
  if ( v6 )
    return RaidCompleteRequestEx(Irp, 0, v10);
LABEL_61:
  if ( v3 )
    RaidUnitFreeDumpInfo(&v35);
  return RaidCompleteRequestEx(Irp, 0, v10);
}
