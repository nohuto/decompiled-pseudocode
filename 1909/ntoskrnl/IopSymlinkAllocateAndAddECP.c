/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x1406CDB50
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406CD944 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 * Callees:
 *     IoClearIrpExtraCreateParameter @ 0x140298140 (IoClearIrpExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140603980 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1406198B0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140619930 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x140619DE0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140619E40 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140698800 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IoSetIrpExtraCreateParameter @ 0x1406BE480 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  int v4; // ebx
  char v6; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v8; // rbx
  PECP_LIST EcpList; // [rsp+58h] [rbp+10h] BYREF

  *EcpContext = 0LL;
  EcpList = 0LL;
  v4 = a3;
  v6 = 0;
  IoGetIrpExtraCreateParameter(Irp, &EcpList);
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 v4 + 32,
                                 0,
                                 IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    v8 = EcpList;
    if ( EcpList )
      goto LABEL_3;
    ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
    if ( ParameterFromLookasideList >= 0 )
    {
      v8 = EcpList;
      IoSetIrpExtraCreateParameter(Irp, EcpList);
      v6 = 1;
LABEL_3:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(v8, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_8;
    }
  }
  v8 = EcpList;
LABEL_8:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v6 )
  {
    FsRtlFreeExtraCreateParameterList(v8);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
