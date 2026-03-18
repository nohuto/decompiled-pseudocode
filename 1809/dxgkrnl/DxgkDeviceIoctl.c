/*
 * XREFs of DxgkDeviceIoctl @ 0x1C0039D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x1C003973C (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C004F240 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0229C30 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0229D80 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A2E4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C025AA7C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
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
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // al
  int v30; // eax
  DXGVIRTUALMACHINE *v31; // r13
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  bool v37; // r8
  int Handle; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  void *v44[2]; // [rsp+48h] [rbp-70h] BYREF
  ULONG64 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  _OWORD v47[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+D0h] [rbp+18h]
  struct DXGPROCESS *v49; // [rsp+D8h] [rbp+20h] BYREF

  v48 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  UserBuffer = (void **)a2->UserBuffer;
  v44[1] = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LODWORD(v49) = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (ULONG64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v45 = Parameters;
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
  v46 = 0LL;
  v13 = 0LL;
  v44[0] = 0LL;
  v47[0] = 0uLL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 779LL;
    WdLogEvent5_WdWarning(v17);
    LODWORD(v11) = -1073741637;
    goto LABEL_45;
  }
  if ( Options != 16 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 786LL;
LABEL_7:
    WdLogEvent5_WdWarning(v18);
    LODWORD(v11) = -1073741306;
    goto LABEL_45;
  }
  if ( (_DWORD)v49 != 8 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = 793LL;
    goto LABEL_7;
  }
  v19 = (__int128 *)v45;
  if ( v45 >= MmUserProbeAddress )
    v19 = (__int128 *)MmUserProbeAddress;
  v20 = *v19;
  v47[0] = *v19;
  ProbeForWrite(UserBuffer, 8uLL, 1u);
  v21 = CheckTokenForVMGroupMembership();
  v11 = v21;
  if ( v21 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = v11;
    WdLogEvent5_WdError(v23);
  }
  if ( (int)v11 < 0 )
    goto LABEL_43;
  Current = DXGPROCESS::GetCurrent();
  v49 = Current;
  if ( Current )
  {
    LOBYTE(v25) = *((_BYTE *)Current + 323);
    if ( (v25 & 4) != 0 )
    {
      if ( (v25 & 8) != 0 )
        v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)Current + 57);
      else
        v12 = (DXGVIRTUALMACHINE **)Current;
      LODWORD(v11) = 0;
      goto LABEL_33;
    }
    v28 = WdLogNewEntry5_WdError(v25);
    v11 = -1073741811LL;
    goto LABEL_31;
  }
  v26 = DXGPROCESS::CreateDxgProcess(&v49, 0LL, 0LL, 1u, 0LL, 0LL);
  v11 = v26;
  if ( v26 < 0
    || ((v29 = *((_BYTE *)v49 + 323), (v29 & 8) == 0)
      ? (v12 = (DXGVIRTUALMACHINE **)((unsigned __int64)v49 & -(__int64)((v29 & 4) != 0)))
      : (v12 = (DXGVIRTUALMACHINE **)*((_QWORD *)v49 + 57)),
        v30 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v12, 0LL, 0LL, 0LL, 0LL, 0, 0LL),
        v11 = v30,
        v30 < 0) )
  {
    v28 = WdLogNewEntry5_WdError(v27);
LABEL_31:
    *(_QWORD *)(v28 + 24) = v11;
    WdLogEvent5_WdError(v28);
    goto LABEL_32;
  }
  v31 = v12[57];
  v32 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v31, 0LL, 1u);
  v11 = v32;
  if ( v32 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v34 + 24) = v11;
    WdLogEvent5_WdError(v34);
  }
  *(_OWORD *)((char *)v31 + 200) = v20;
LABEL_32:
  if ( (int)v11 >= 0 )
  {
LABEL_33:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v47, (struct _KTHREAD **)v12[57] + 8);
    v13 = DXGVIRTUALMACHINE::ReferenceVailObject(v12[57]);
    if ( !v13 )
    {
      LODWORD(v11) = -1073741275;
      v36 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v36 + 24) = -1073741275LL;
      *(_QWORD *)(v36 + 32) = 877LL;
      WdLogEvent5_WdAssertion(v36);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
    if ( (int)v11 >= 0 )
    {
      Handle = DxgkCompositionObject::CreateHandle(v13, 0xC0060000, v37, 1, v44);
      v11 = Handle;
      if ( Handle >= 0 )
      {
        v48 = 8;
      }
      else
      {
        v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v42 + 24) = v11;
        WdLogEvent5_WdWarning(v42);
      }
      if ( (int)v11 >= 0 )
      {
        if ( (unsigned __int64)UserBuffer >= MmUserProbeAddress )
          UserBuffer = (void **)MmUserProbeAddress;
        *UserBuffer = v44[0];
      }
    }
  }
LABEL_43:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_45:
  a2->IoStatus.Information = v48;
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
