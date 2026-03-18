/*
 * XREFs of DxgkDeviceIoctl @ 0x1C0040010
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000C3D8 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x1C003F9D8 (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0056394 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025E5E0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C025E730 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EB50 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0290D60 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 LowPart; // rsi
  void **UserBuffer; // r12
  __int64 Length; // rcx
  ULONG64 Parameters; // rdx
  ULONG Options; // r13d
  __int64 v10; // rax
  __int64 v11; // rbx
  DXGVIRTUALMACHINE **v12; // rsi
  DxgkCompositionObject *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 *v19; // rax
  __int128 v20; // xmm6
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // al
  int v36; // eax
  DXGVIRTUALMACHINE *v37; // r13
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  bool v46; // r8
  int Handle; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  void *v53[2]; // [rsp+48h] [rbp-70h] BYREF
  ULONG64 v54; // [rsp+58h] [rbp-60h]
  __int64 v55; // [rsp+60h] [rbp-58h]
  _OWORD v56[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+D0h] [rbp+18h]
  struct DXGPROCESS *v58; // [rsp+D8h] [rbp+20h] BYREF

  v57 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UserBuffer = (void **)a2->UserBuffer;
  v53[1] = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LODWORD(v58) = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (ULONG64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v54 = Parameters;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (_DWORD)LowPart != 2310147 )
  {
    v10 = WdLogNewEntry5_WdWarning(Length, Parameters, a3);
    *(_QWORD *)(v10 + 24) = LowPart;
    LODWORD(v11) = -1073741808;
    *(_QWORD *)(v10 + 32) = -1073741808LL;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_45;
  }
  v12 = 0LL;
  v55 = 0LL;
  v13 = 0LL;
  v53[0] = 0LL;
  v56[0] = 0uLL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 772LL;
    WdLogEvent5_WdWarning(v17);
    LODWORD(v11) = -1073741637;
    goto LABEL_45;
  }
  if ( Options != 16 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 779LL;
LABEL_7:
    WdLogEvent5_WdWarning(v18);
    LODWORD(v11) = -1073741306;
    goto LABEL_45;
  }
  if ( (_DWORD)v58 != 8 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 786LL;
    goto LABEL_7;
  }
  v19 = (__int128 *)v54;
  if ( v54 >= MmUserProbeAddress )
    v19 = (__int128 *)MmUserProbeAddress;
  v20 = *v19;
  v56[0] = *v19;
  ProbeForWrite(UserBuffer, 8uLL, 1u);
  v21 = CheckTokenForVMGroupMembership();
  v11 = v21;
  if ( v21 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v11;
    WdLogEvent5_WdError(v25);
  }
  if ( (int)v11 < 0 )
    goto LABEL_43;
  Current = DXGPROCESS::GetCurrent();
  v58 = Current;
  if ( Current )
  {
    LOBYTE(v28) = *((_BYTE *)Current + 299);
    if ( (v28 & 4) != 0 )
    {
      if ( (v28 & 8) != 0 )
        v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)Current + 54);
      else
        v12 = (DXGVIRTUALMACHINE **)Current;
      LODWORD(v11) = 0;
      goto LABEL_33;
    }
    v34 = WdLogNewEntry5_WdError(v28, v27, v29);
    v11 = -1073741811LL;
    goto LABEL_31;
  }
  v30 = DXGPROCESS::CreateDxgProcess(&v58, 0LL, 0LL, 1u, 0LL, 0LL);
  v11 = v30;
  if ( v30 < 0
    || ((v35 = *((_BYTE *)v58 + 299), (v35 & 8) == 0)
      ? (v12 = (DXGVIRTUALMACHINE **)((unsigned __int64)v58 & -(__int64)((v35 & 4) != 0)))
      : (v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)v58 + 54)),
        v36 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v12, 0LL, 0LL, 0LL, 0LL, 0, 0LL),
        v11 = v36,
        v36 < 0) )
  {
    v34 = WdLogNewEntry5_WdError(v32, v31, v33);
LABEL_31:
    *(_QWORD *)(v34 + 24) = v11;
    WdLogEvent5_WdError(v34);
    goto LABEL_32;
  }
  v37 = v12[54];
  v38 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v37, 0LL, 1u);
  v11 = v38;
  if ( v38 < 0 )
  {
    v42 = WdLogNewEntry5_WdError(v40, v39, v41);
    *(_QWORD *)(v42 + 24) = v11;
    WdLogEvent5_WdError(v42);
  }
  *(_OWORD *)((char *)v37 + 200) = v20;
LABEL_32:
  if ( (int)v11 >= 0 )
  {
LABEL_33:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v56, (struct _KTHREAD **)v12[54] + 8);
    v13 = DXGVIRTUALMACHINE::ReferenceVailObject(v12[54]);
    if ( !v13 )
    {
      LODWORD(v11) = -1073741275;
      v45 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v45 + 24) = -1073741275LL;
      *(_QWORD *)(v45 + 32) = 870LL;
      WdLogEvent5_WdAssertion(v45);
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v56);
    if ( (int)v11 >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(v13, 0xC0060000, v46, 1, v53);
      v11 = Handle;
      if ( Handle >= 0 )
      {
        v57 = 8;
      }
      else
      {
        v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = v11;
        WdLogEvent5_WdWarning(v51);
      }
      if ( (int)v11 >= 0 )
      {
        if ( (unsigned __int64)UserBuffer >= MmUserProbeAddress )
          UserBuffer = (void **)MmUserProbeAddress;
        *UserBuffer = v53[0];
      }
    }
  }
LABEL_43:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_45:
  a2->IoStatus.Information = v57;
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
