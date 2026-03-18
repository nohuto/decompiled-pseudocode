/*
 * XREFs of PipProcessDevNodeTree @ 0x14070265C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015D540 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1402A1898 (PnpProcessRebalance.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140720024 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x140789BA8 (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x140875040 (PiProcessResourceRequirementsChanged.c)
 *     PiRestartDevice @ 0x1408752E8 (PiRestartDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140145938 (PoFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1401589B0 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x140176C8C (PiCollapseEnumRequests.c)
 *     McTemplateK0z @ 0x14029EB1C (McTemplateK0z.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406FB8EC (PiDevCfgLogDeviceStarted.c)
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x140701E28 (PnpProcessAssignResources.c)
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140702BFC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140702C8C (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140705EC0 (PipEnumerateCompleted.c)
 *     PipProcessStartPhase1 @ 0x140717F78 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x14071838C (PipProcessStartPhase2.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     IopAllocateUnicodeString @ 0x1407320B0 (IopAllocateUnicodeString.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073B07C (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessRestartPhase1 @ 0x14087D17C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14087D23C (PipProcessRestartPhase2.c)
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
  __int64 v9; // r8
  int v10; // edi
  int v11; // r13d
  unsigned __int16 *v12; // r14
  bool v13; // al
  char v14; // si
  unsigned __int8 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rbx
  int v19; // esi
  char v20; // al
  __int64 v21; // rdx
  int v22; // edi
  int v23; // eax
  __int64 v24; // r9
  int v25; // esi
  ULONG_PTR v26; // rax
  PVOID *v27; // rax
  int v29; // eax
  bool v30; // al
  int started; // eax
  int restarted; // eax
  int v33; // ebx
  _QWORD *v34; // rbx
  int v35; // eax
  __int64 v36; // rax
  char v37; // [rsp+40h] [rbp-38h]
  char v38; // [rsp+44h] [rbp-34h]
  unsigned int v39; // [rsp+48h] [rbp-30h]
  PVOID *v40; // [rsp+50h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF
  char v42; // [rsp+C0h] [rbp+48h] BYREF
  char v43; // [rsp+C8h] [rbp+50h]
  __int64 v44; // [rsp+D0h] [rbp+58h]
  int v45; // [rsp+D8h] [rbp+60h]

  v45 = a4;
  v44 = a3;
  v7 = a7;
  v8 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 0LL;
  DestinationString.Buffer = 0LL;
  v40 = (PVOID *)a1;
  v10 = a4;
  v11 = a2;
  v12 = (unsigned __int16 *)a1;
  if ( a2 )
  {
    if ( a4 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
    {
      v13 = PiCollapseEnumRequests(a2);
      v9 = 0LL;
      if ( v13 )
        v12 = (unsigned __int16 *)IopRootDeviceNode;
    }
  }
  v14 = 0;
  v39 = 0;
  v38 = 0;
  v15 = 0;
  v37 = 0;
  while ( 2 )
  {
    if ( v7 )
      goto LABEL_14;
    if ( (byte_14042BDBB & 8) != 0 )
      McTemplateK0z(a1, &KMPnPEvt_AssignResources_Start, 0LL, *((const wchar_t **)v12 + 6));
    v42 = 0;
    v37 = PnpProcessAssignResources((__int64)v12, a5, (__int64)&v42);
    if ( (byte_14042BDBB & 8) != 0 )
      McTemplateK0z(a1, &KMPnPEvt_AssignResources_Stop, v16, *((const wchar_t **)v12 + 6));
    v9 = 0LL;
    if ( v42 )
    {
      v35 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v11, v8, v10, 0, 0, 1);
      v17 = 1LL;
      if ( v35 == -1073741106 )
        v14 = 1;
      v9 = 0LL;
      v38 = v14;
    }
    else
    {
LABEL_14:
      v17 = 1LL;
    }
    v42 = 0;
    v18 = (ULONG_PTR)v12;
    v43 = 1;
    while ( 1 )
    {
      v19 = 1;
      if ( !v38 )
      {
        if ( *(_DWORD *)(v18 + 300) != 769 && (*(_DWORD *)(v18 + 396) & 0x6000) == 0 )
        {
          v20 = PnpCheckForActiveDependencies(v18, 2LL);
          v9 = 0LL;
          if ( v20 )
          {
            PipSetDevNodeProblem(v18, 51LL, 0LL);
            v9 = 0LL;
          }
          v17 = 1LL;
        }
        v21 = *(unsigned int *)(v18 + 396);
        if ( (v21 & 0x6000) != 0 )
          goto LABEL_43;
        if ( *(_DWORD *)(v18 + 300) == 769 )
        {
          if ( v10 == 3 && (v21 & 0x2000000) != 0 || v7 )
            goto LABEL_40;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v18, 1LL) )
          {
            PipSetDevNodeProblem(v18, 51LL, 0LL);
            goto LABEL_40;
          }
          v22 = PiProcessNewDeviceNode(v18);
          if ( v22 >= 0 )
            v19 = 0;
          goto LABEL_39;
        }
        if ( *(_DWORD *)(v18 + 300) == 770 )
        {
          if ( v7 )
            goto LABEL_40;
          v22 = PipCallDriverAddDevice(v18);
          if ( v22 >= 0 )
          {
            PoFxPrepareDevice(v18, 0);
            v19 = 0;
            v37 = 1;
          }
          goto LABEL_39;
        }
        if ( *(_DWORD *)(v18 + 300) != 772 )
        {
          switch ( *(_DWORD *)(v18 + 300) )
          {
            case 0x306:
              started = PipProcessStartPhase2(v18, v21, 0LL, 1LL);
              break;
            case 0x307:
              if ( (int)v21 < 0 )
              {
                v19 = 1;
                goto LABEL_40;
              }
              started = PipProcessStartPhase3(v18, v10 != 1, 0LL);
              break;
            case 0x308:
              if ( v10 == 1 && (unsigned __int16 *)v18 != v12 )
                goto LABEL_40;
              v19 = 2;
              if ( v7 || (v21 & 8) == 0 )
                goto LABEL_40;
              v22 = PipEnumerateDevice(v18, a6, v15);
              if ( v22 == 259 )
              {
                v15 = 1;
                v19 = 1;
                goto LABEL_40;
              }
              if ( v22 < 0 )
                goto LABEL_39;
              goto LABEL_35;
            case 0x30A:
              restarted = PipProcessRestartPhase1(v18, a6, v15, 1LL);
LABEL_87:
              v22 = restarted;
              if ( restarted == 259 )
              {
                v15 = 1;
                goto LABEL_40;
              }
              v19 = 0;
              goto LABEL_39;
            case 0x30B:
              started = PipProcessRestartPhase2(v18, v21, 0LL, 1LL);
              break;
            case 0x30D:
              if ( (*(_DWORD *)(v18 + 704) & 0x200) != 0 )
              {
                PoFxIdleDevice(*(_QWORD *)(v18 + 32));
                *(_DWORD *)(v18 + 704) &= ~0x200u;
              }
              v22 = PipEnumerateCompleted(v18, v21, v9, v17);
              v19 = 2;
              goto LABEL_39;
            default:
              goto LABEL_40;
          }
          v22 = started;
          if ( started >= 0 )
          {
LABEL_35:
            v19 = 0;
            goto LABEL_39;
          }
          v22 = -1073741106;
LABEL_39:
          if ( v22 == -1073741106 )
          {
            v9 = 0LL;
            goto LABEL_104;
          }
LABEL_40:
          a7 = 0;
          v23 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &a7, v17);
          v9 = 0LL;
          v22 = v23;
          if ( v23 != -1073741106 )
          {
            if ( v42 && !a7 )
            {
              v42 = 0;
              v22 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &a7, v24);
              LOBYTE(a1) = -(a7 != 0);
              v15 &= a1;
              v9 = 0LL;
            }
            if ( v22 != -1073741106 )
              goto LABEL_43;
          }
LABEL_104:
          if ( !v7 )
          {
            v10 = v45;
            goto LABEL_106;
          }
          v39 = v22;
LABEL_43:
          if ( v7 || (a1 = *(unsigned int *)(v18 + 704), (a1 & 1) == 0) )
          {
LABEL_45:
            if ( v15 && v19 && PnpAsyncOptions >= 0 )
              v19 = 1;
            v25 = v19 - 1;
            if ( v25 )
            {
              if ( v25 == 1 )
              {
                v26 = *(_QWORD *)(v18 + 8);
                if ( !v26 )
                  goto LABEL_47;
LABEL_49:
                v18 = v26;
              }
            }
            else
            {
              while ( 1 )
              {
LABEL_47:
                if ( (unsigned __int16 *)v18 == v12 )
                {
                  v42 = 1;
                  LOBYTE(a1) = -(v15 != 0);
                  v43 &= a1;
                  goto LABEL_50;
                }
                v26 = *(_QWORD *)v18;
                if ( *(_QWORD *)v18 )
                  goto LABEL_49;
                if ( v15 && PnpAsyncOptions > 0 )
                  break;
                if ( *(_QWORD *)(v18 + 16) )
                  v18 = *(_QWORD *)(v18 + 16);
              }
              v36 = *(_QWORD *)(v18 + 16);
              if ( v36 )
                v18 = *(_QWORD *)(v36 + 8);
              v42 = 1;
            }
LABEL_50:
            v27 = v40;
            v14 = v38;
            goto LABEL_51;
          }
          v29 = *(_DWORD *)(v18 + 300);
          if ( v29 >= 770 )
          {
            if ( v29 <= 775 )
            {
              v30 = (*(_DWORD *)(v18 + 396) & 0x6000) != 0;
              goto LABEL_79;
            }
            if ( v29 == 776 )
            {
LABEL_99:
              *(_DWORD *)(v18 + 704) = a1 & 0xFFFFFFFE;
              PiDevCfgLogDeviceStarted(v18);
              v9 = 0LL;
              goto LABEL_45;
            }
          }
          if ( (*(_DWORD *)(v18 + 396) & 0x2000) != 0 && *(_DWORD *)(v18 + 404) == 56 )
            goto LABEL_45;
          v30 = 1;
LABEL_79:
          if ( !v30 )
            goto LABEL_45;
          goto LABEL_99;
        }
        if ( v7 )
          goto LABEL_40;
        PoFxActivateDevice(*(_QWORD *)(v18 + 32));
        *(_DWORD *)(v18 + 704) |= 0x200u;
        restarted = PipProcessStartPhase1(v18);
        goto LABEL_87;
      }
LABEL_106:
      v14 = 0;
      v38 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &a7, 1LL);
      v15 = 0;
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v11, v44, v10, a5, a6, 1);
      v33 = IopAllocateUnicodeString(&DestinationString, v12[20]);
      if ( v33 < 0 )
      {
        ObfDereferenceObject(v40[4]);
        return (unsigned int)v33;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 20));
      ObfDereferenceObject(v40[4]);
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      v34 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      RtlFreeAnsiString(&DestinationString);
      v9 = 0LL;
      if ( !v34 )
        return 3221225473LL;
      v12 = *(unsigned __int16 **)(v34[39] + 40LL);
      v27 = (PVOID *)v12;
      v18 = (ULONG_PTR)v12;
      v40 = (PVOID *)v12;
LABEL_51:
      v10 = v45;
      if ( !v43 )
        break;
      v17 = 1LL;
    }
    v8 = v44;
    if ( v37 )
      continue;
    break;
  }
  if ( !v7 )
    ObfDereferenceObject(v27[4]);
  return v39;
}
