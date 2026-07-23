/*
 * XREFs of NtAlpcQueryInformation @ 0x1406B1410
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1405B0B14 (AlpcpPortQueryServerSessionInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x1406B1640 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpWaitForPortReferences @ 0x1406B169C (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B1744 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerInfo @ 0x140886240 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x140913EA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _DWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebx
  char PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  PULONG v15; // r14
  PVOID v16; // rsi
  __int32 v17; // edi
  __int32 v18; // edi
  __int32 v19; // edi
  int ServerSessionInfo; // eax
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v10 = -1073741811;
    goto LABEL_35;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 && Length )
    {
      v12 = (unsigned __int64)PortInformation;
      if ( ((unsigned __int8)PortInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (unsigned __int64)PortInformation + Length - 1;
      if ( (unsigned __int64)PortInformation > v13
        || (PortInformation = (PVOID)0x7FFFFFFF0000LL, v13 >= 0x7FFFFFFF0000LL) )
      {
        ExRaiseAccessViolation();
      }
      v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v12 = *(_BYTE *)v12;
        v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v12 != v14 );
    }
    else
    {
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
    }
    v15 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        PortInformation = ReturnLength;
      *(_DWORD *)PortInformation = *(_DWORD *)PortInformation;
    }
  }
  else
  {
    v15 = ReturnLength;
  }
  v16 = 0LL;
  if ( !PortHandle
    || (v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL),
        v16 = v25,
        v10 >= 0) )
  {
    if ( PortInformationClass )
    {
      v17 = PortInformationClass - 3;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 7;
          if ( v19 )
          {
            if ( v19 != 1 )
            {
              v10 = -1073741811;
              goto LABEL_33;
            }
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo((__int64)v16, v6, Length, v15);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v16, (_DWORD)v6, Length, (_DWORD)v15, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((int)v16, (int)v6, Length, (int)v15, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v16, v6, PortInformation, v15, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v16, v6, Length, v15);
    }
    v10 = ServerSessionInfo;
LABEL_33:
    if ( v16 )
      ObfDereferenceObject(v16);
  }
LABEL_35:
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable++ == -1;
  if ( v22
    && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v21);
  }
  return v10;
}
