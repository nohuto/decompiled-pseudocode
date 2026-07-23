/*
 * XREFs of PipProcessDevNodeTree @ 0x1406E77FC
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015F400 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x14028BA04 (PnpProcessRebalance.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x1406FD654 (PiProcessReenumeration.c)
 *     PiRestartDevice @ 0x140763C84 (PiRestartDevice.c)
 *     PiProcessStartSystemDevices @ 0x1407641F8 (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x14083B62C (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14015A18C (PoFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14015A65C (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x14016C670 (PiCollapseEnumRequests.c)
 *     McTemplateK0z @ 0x140191DA4 (McTemplateK0z.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406E7D90 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x1406E7E20 (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x1406E95EC (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase1 @ 0x1406ECF50 (PipProcessStartPhase1.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406F4938 (PiDevCfgLogDeviceStarted.c)
 *     PipProcessStartPhase2 @ 0x1406FE8C4 (PipProcessStartPhase2.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140710510 (PnpSynchronizeDeviceEventQueue.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     PipProcessRestartPhase1 @ 0x1408429C0 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x140842A80 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  char v7; // r15
  int v8; // ebx
  int v9; // edi
  int v10; // r13d
  ULONG_PTR v11; // r14
  char v12; // si
  unsigned __int8 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  int v17; // esi
  __int64 v18; // rdx
  int v19; // edi
  int v20; // esi
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rax
  int v24; // eax
  bool v25; // al
  int restarted; // eax
  int started; // eax
  int v28; // ebx
  _QWORD *v29; // rbx
  int v30; // eax
  __int64 v31; // rax
  char v32; // [rsp+40h] [rbp-38h]
  char v33; // [rsp+44h] [rbp-34h]
  unsigned int v34; // [rsp+48h] [rbp-30h]
  ULONG_PTR v35; // [rsp+50h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF
  char v37; // [rsp+C0h] [rbp+48h] BYREF
  char v38; // [rsp+C8h] [rbp+50h]
  __int64 v39; // [rsp+D0h] [rbp+58h]
  int v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v7 = a7;
  v8 = a3;
  v35 = a1;
  v9 = a4;
  v10 = a2;
  v11 = a1;
  if ( a2 && a4 != 1 && !*(_BYTE *)(a2 + 28) && !a7 && PiCollapseEnumRequests(a2) )
    v11 = IopRootDeviceNode;
  v12 = 0;
  v34 = 0;
  v33 = 0;
  v13 = 0;
  v32 = 0;
  while ( 2 )
  {
    if ( v7 )
      goto LABEL_14;
    if ( (byte_140406847 & 8) != 0 )
      McTemplateK0z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *(const wchar_t **)(v11 + 48));
    LOBYTE(a2) = a5;
    v37 = 0;
    v32 = PnpProcessAssignResources(v11, a2, &v37);
    if ( (byte_140406847 & 8) != 0 )
      McTemplateK0z(a1, &KMPnPEvt_AssignResources_Stop, v14, *(const wchar_t **)(v11 + 48));
    if ( v37 )
    {
      v30 = PipProcessDevNodeTree(IopRootDeviceNode, v10, v8, v9, 0, 0, 1);
      v15 = 1LL;
      if ( v30 == -1073741106 )
        v12 = 1;
      v33 = v12;
    }
    else
    {
LABEL_14:
      v15 = 1LL;
    }
    v37 = 0;
    v16 = v11;
    v38 = 1;
    while ( 1 )
    {
      v17 = 1;
      if ( !v33 )
      {
        if ( *(_DWORD *)(v16 + 300) != 769 && (*(_DWORD *)(v16 + 396) & 0x6000) == 0 )
        {
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v16, 2LL, 0LL, 1LL) )
            PipSetDevNodeProblem(v16, 51LL, 0LL);
          v15 = 1LL;
        }
        v18 = *(unsigned int *)(v16 + 396);
        if ( (v18 & 0x6000) != 0 )
          goto LABEL_43;
        switch ( *(_DWORD *)(v16 + 300) )
        {
          case 0x301:
            if ( v9 == 3 && (v18 & 0x2000000) != 0 || v7 )
              goto LABEL_40;
            if ( (unsigned __int8)PnpCheckForActiveDependencies(v16, 1LL, 0LL, 1LL) )
            {
              PipSetDevNodeProblem(v16, 51LL, 0LL);
              goto LABEL_40;
            }
            v19 = PiProcessNewDeviceNode(v16);
            if ( v19 >= 0 )
              v17 = 0;
            goto LABEL_39;
          case 0x302:
            if ( v7 )
              goto LABEL_40;
            v19 = PipCallDriverAddDevice(v16, v39, 0LL, 1LL);
            if ( v19 >= 0 )
            {
              PoFxPrepareDevice(v16, 0);
              v17 = 0;
              v32 = 1;
            }
LABEL_39:
            if ( v19 == -1073741106 )
              goto LABEL_102;
            goto LABEL_40;
          case 0x304:
            if ( v7 )
              goto LABEL_40;
            PoFxActivateDevice(*(_QWORD *)(v16 + 32));
            *(_DWORD *)(v16 + 704) |= 0x200u;
            started = PipProcessStartPhase1(v16);
            break;
          case 0x306:
            restarted = PipProcessStartPhase2(v16, v18, 0LL, 1LL);
            goto LABEL_82;
          case 0x307:
            if ( (int)v18 < 0 )
            {
              v17 = 1;
              goto LABEL_40;
            }
            restarted = PipProcessStartPhase3(v16, v9 != 1);
            goto LABEL_82;
          case 0x308:
            if ( v9 != 1 || v16 == v11 )
            {
              v17 = 2;
              if ( !v7 && (v18 & 8) != 0 )
              {
                v19 = PipEnumerateDevice(v16, a6, v13, 1LL);
                if ( v19 != 259 )
                {
                  if ( v19 < 0 )
                    goto LABEL_39;
                  goto LABEL_35;
                }
                v13 = 1;
                v17 = 1;
              }
            }
LABEL_40:
            a7 = 0;
            v19 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &a7, v15);
            if ( v19 != -1073741106 )
            {
              if ( v37 && !a7 )
              {
                v37 = 0;
                v19 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &a7, v15);
                LOBYTE(a1) = -(a7 != 0);
                v13 &= a1;
              }
              if ( v19 != -1073741106 )
                goto LABEL_43;
            }
LABEL_102:
            if ( !v7 )
            {
              v9 = v40;
              goto LABEL_104;
            }
            v34 = v19;
LABEL_43:
            a2 = 1LL;
            if ( v7 || (a1 = *(unsigned int *)(v16 + 704), (a1 & 1) == 0) )
            {
LABEL_45:
              if ( v13 && v17 && PnpAsyncOptions >= 0 )
                v17 = 1;
              v20 = v17 - 1;
              if ( v20 )
              {
                if ( v20 == 1 )
                {
                  v21 = *(_QWORD *)(v16 + 8);
                  if ( !v21 )
                    goto LABEL_49;
LABEL_51:
                  v16 = v21;
                }
              }
              else
              {
                while ( 1 )
                {
LABEL_49:
                  if ( v16 == v11 )
                  {
                    v37 = 1;
                    LOBYTE(a1) = -(v13 != 0);
                    v38 &= a1;
                    goto LABEL_52;
                  }
                  v21 = *(_QWORD *)v16;
                  if ( *(_QWORD *)v16 )
                    goto LABEL_51;
                  if ( v13 && PnpAsyncOptions > 0 )
                    break;
                  if ( *(_QWORD *)(v16 + 16) )
                    v16 = *(_QWORD *)(v16 + 16);
                }
                v31 = *(_QWORD *)(v16 + 16);
                if ( v31 )
                  v16 = *(_QWORD *)(v31 + 8);
                v37 = 1;
              }
LABEL_52:
              v22 = v35;
              v12 = v33;
              goto LABEL_53;
            }
            v24 = *(_DWORD *)(v16 + 300);
            if ( v24 >= 770 )
            {
              if ( v24 <= 775 )
              {
                v25 = (*(_DWORD *)(v16 + 396) & 0x6000) != 0;
                goto LABEL_77;
              }
              if ( v24 == 776 )
              {
LABEL_98:
                *(_DWORD *)(v16 + 704) = a1 & 0xFFFFFFFE;
                PiDevCfgLogDeviceStarted(v16, 1LL, 0LL, v15);
                a2 = 1LL;
                goto LABEL_45;
              }
            }
            if ( (*(_DWORD *)(v16 + 396) & 0x2000) != 0 && *(_DWORD *)(v16 + 404) == 56 )
              goto LABEL_45;
            v25 = 1;
LABEL_77:
            if ( !v25 )
              goto LABEL_45;
            goto LABEL_98;
          case 0x30A:
            started = PipProcessRestartPhase1(v16, a6, v13, 1LL);
            break;
          case 0x30B:
            restarted = PipProcessRestartPhase2(v16, v18, 0LL, 1LL);
LABEL_82:
            v19 = restarted;
            if ( restarted >= 0 )
            {
LABEL_35:
              v17 = 0;
              goto LABEL_39;
            }
            v19 = -1073741106;
            goto LABEL_39;
          case 0x30D:
            if ( (*(_DWORD *)(v16 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v16 + 32));
              *(_DWORD *)(v16 + 704) &= ~0x200u;
            }
            v19 = PipEnumerateCompleted((_QWORD *)v16);
            v17 = 2;
            goto LABEL_39;
          default:
            goto LABEL_40;
        }
        v19 = started;
        if ( started == 259 )
        {
          v13 = 1;
          goto LABEL_40;
        }
        v17 = 0;
        goto LABEL_39;
      }
LABEL_104:
      v12 = 0;
      v33 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &a7, 1LL);
      v13 = 0;
      PipProcessDevNodeTree(IopRootDeviceNode, v10, v39, v9, a5, a6, 1);
      v28 = IopAllocateUnicodeString(&DestinationString, *(unsigned __int16 *)(v11 + 40));
      if ( v28 < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(v35 + 32));
        return (unsigned int)v28;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 40));
      ObfDereferenceObject(*(PVOID *)(v35 + 32));
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      v29 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      RtlFreeAnsiString(&DestinationString);
      if ( !v29 )
        return 3221225473LL;
      v11 = *(_QWORD *)(v29[39] + 40LL);
      v22 = v11;
      v16 = v11;
      v35 = v11;
LABEL_53:
      v9 = v40;
      if ( !v38 )
        break;
      v15 = 1LL;
    }
    v8 = v39;
    if ( v32 )
      continue;
    break;
  }
  if ( !v7 )
    ObfDereferenceObject(*(PVOID *)(v22 + 32));
  return v34;
}
