/*
 * XREFs of StorPortNotification @ 0x1C00052A0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C0078440 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001FA4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaidAdapterRequestComplete @ 0x1C00057F0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C0035D58 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0035E60 (RaidAdapterRequestTimerDeferred.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     McTemplateK0pq @ 0x1C003ADF4 (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C003AE68 (McTemplateK0pqq.c)
 *     McTemplateK0pqquuuqpp @ 0x1C003B030 (McTemplateK0pqquuuqpp.c)
 *     RaidpLinkDown @ 0x1C003B930 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C003B998 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C003BBBC (StorAsyncNotificationDeferred.c)
 *     StorPortPause @ 0x1C003C960 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C003E3F0 (StorpGetExtendedTable.c)
 *     StorpMarkDeviceFailed @ 0x1C003EE08 (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x1C0043320 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0048DD4 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004B924 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004BC1C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, _QWORD **a2, ...)
{
  int v2; // ebx
  __int64 v4; // rsi
  va_list v5; // rdx
  PKDPC v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rdx
  _QWORD *v10; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  _DWORD *v12; // rbx
  _DWORD *v13; // rbx
  int v14; // r9d
  PKDEFERRED_ROUTINE v15; // r10
  __int64 v16; // rcx
  PKDPC v17; // rdi
  __int64 v18; // rbx
  struct _KTIMER *v19; // rcx
  int v20; // r9d
  PKDPC v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  PKDEFERRED_ROUTINE v25; // rdi
  PKDEFERRED_ROUTINE v26; // rbp
  _DWORD *v27; // r10
  __int64 v28; // r11
  unsigned int v29; // r9d
  int v30; // r14d
  _DWORD *v31; // rdi
  unsigned __int8 v32; // r15
  unsigned __int8 v33; // r12
  unsigned __int8 v34; // r13
  int v35; // ecx
  int v36; // r8d
  unsigned int v37; // ebx
  __int64 v38; // rdx
  char v39; // bp
  char v40; // r14
  PKDPC v41; // rdi
  char v42; // r15
  PSLIST_ENTRY v43; // rax
  struct _SLIST_ENTRY *v44; // rbx
  void *v45; // rcx
  struct _KDPC *v46; // rbx
  KDPC_IMPORTANCE v47; // edi
  struct _KDPC *v48; // rbx
  char v49; // di
  int *v50; // r14
  PKDEFERRED_ROUTINE v51; // rbp
  unsigned int v52; // edi
  __int64 Unit; // rax
  int v54; // ecx
  char v55; // al
  signed __int32 v56[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-68h]
  _DWORD *v58; // [rsp+68h] [rbp-60h]
  __int64 v59; // [rsp+70h] [rbp-58h]
  va_list v60; // [rsp+78h] [rbp-50h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  PKDPC v63; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v65; // [rsp+E8h] [rbp+20h]
  _DWORD *v66; // [rsp+F0h] [rbp+28h]
  _DWORD *v67; // [rsp+F8h] [rbp+30h] BYREF
  va_list va1; // [rsp+F8h] [rbp+30h]
  __int64 v69; // [rsp+100h] [rbp+38h]
  _DWORD *v70; // [rsp+108h] [rbp+40h]
  va_list va2; // [rsp+110h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v63 = va_arg(va1, PKDPC);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _DWORD *);
  va_copy(va2, va1);
  v67 = va_arg(va2, _DWORD *);
  v69 = va_arg(va2, _QWORD);
  v70 = va_arg(va2, _DWORD *);
  v2 = 0;
  v4 = 0LL;
  if ( a2 )
    v4 = **(a2 - 2);
  va_copy(v5, va);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 4100:
        v10 = *(a2 - 2);
        if ( !v63 )
          return;
        if ( v63->TargetInfoAsUlong == 1 )
        {
          p_DpcListEntry = &v63->DpcListEntry;
        }
        else
        {
          if ( v63->TargetInfoAsUlong != 2 )
          {
            switch ( v63->TargetInfoAsUlong )
            {
              case 3u:
                RaidAdapterReleaseInterruptLock(*v10, LOBYTE(v63->DeferredRoutine));
                break;
              case 4u:
                KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v63->DpcListEntry);
                break;
              case 5u:
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v63->DpcListEntry);
                break;
            }
            return;
          }
          p_DpcListEntry = &v63->DpcListEntry;
          if ( !*(_DWORD *)(*v10 + 688LL) )
          {
            RaidAdapterReleaseInterruptLock(*v10, LOBYTE(p_DpcListEntry->Next));
            return;
          }
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 4098:
        v12 = v67;
        if ( v63 )
          *v12 = KeInsertQueueDpc(v63, (PVOID)v65, v66);
        break;
      case 4102:
        if ( StorEtwLoggingEnabled )
        {
          v6 = v63;
          if ( v65 )
          {
            v7 = *(_BYTE *)(v65 + 2) == 40 ? *(_QWORD *)(v65 + 96) : *(_QWORD *)(v65 + 48);
            if ( v7 )
            {
              if ( (byte_1C0062741 & 2) != 0 || (byte_1C0062743 & 2) != 0 )
                *(_QWORD *)(v7 + 720) = v63;
              if ( (byte_1C0062741 & 2) != 0 )
              {
                LOBYTE(v5) = 1;
                StorEtwIORequestServiceTimeEventData(v7, v5, v6);
              }
              v8 = *(_QWORD *)(v7 + 224);
              if ( v8 && *(_DWORD *)(v8 + 1812) && (byte_1C0062743 & 2) != 0 )
              {
                LOBYTE(v5) = 1;
                StorEtwLogoRequestServiceTimeEventData(v7, v5, v6);
              }
            }
          }
        }
        break;
      default:
        if ( a1 <= 4096 )
        {
          if ( a1 == 4096 )
          {
            v24 = (__int64)*(a2 - 2);
            v25 = (PKDEFERRED_ROUTINE)v65;
            if ( (*(_BYTE *)(*(_QWORD *)v24 + 104LL) & 0x10) != 0 )
            {
              *(_QWORD *)(*(_QWORD *)v24 + 4408LL) = v63;
              v2 = 1;
            }
            else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) )
            {
              WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_6f3540a332da34b92ff0af100460ee8b_Traceguids);
            }
            *(_DWORD *)v25 = v2;
          }
          else
          {
            switch ( a1 )
            {
              case 3:
                if ( v4 )
                {
                  DbgLogRequest(v4, 39, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
                  v37 = *(_DWORD *)(v4 + 520);
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pqq(
                      v35,
                      (unsigned int)&EventResetDetected,
                      v36,
                      (_DWORD)a2,
                      *(_DWORD *)(v4 + 56),
                      *(_DWORD *)(v4 + 520));
                  if ( v37 )
                  {
                    if ( v37 > 0x3D0900 )
                      v37 = 4000000;
                    v38 = v37 / 0xF4240 + 1;
                    if ( v37 == 1000000 * (v37 / 0xF4240) )
                      v38 = v37 / 0xF4240;
                    StorPortPause(a2, v38);
                  }
                }
                break;
              case 6:
                v17 = v63;
                v18 = (unsigned int)v65;
                if ( v4 )
                {
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pqq(
                      0xC0000000,
                      (unsigned int)&EventRequestTimerCall,
                      (_DWORD)a2,
                      (_DWORD)a2,
                      *(_DWORD *)(v4 + 56),
                      v65);
                  if ( KeGetCurrentIrql() > 2u )
                  {
                    RaidAdapterRequestTimerDeferred(v4, v17, (unsigned int)v18);
                  }
                  else
                  {
                    v19 = (struct _KTIMER *)(v4 + 1664);
                    if ( (_DWORD)v18 )
                    {
                      *(_QWORD *)(v4 + 1920) = v17;
                      KeSetCoalescableTimer(v19, (LARGE_INTEGER)(-10 * v18), 0, 0, (PKDPC)(v4 + 1600));
                    }
                    else
                    {
                      KeCancelTimer(v19);
                    }
                  }
                }
                break;
              case 7:
                if ( v4 )
                {
                  DbgLogRequest(v4, 38, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 520), 0LL);
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pq(v22, &EventBusChangeDetected, v23, a2, *(_DWORD *)(v4 + 56));
                  *(_WORD *)(v4 + 105) = 257;
                  KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
                }
                break;
              case 8:
                v39 = v65;
                v40 = 0;
                v41 = v63;
                v42 = 0;
                if ( (_BYTE)v65 != 0xFF )
                {
                  v40 = (char)v66;
                  v42 = (char)v67;
                }
                if ( v63 )
                {
                  if ( v63->TargetInfoAsUlong <= 0x80 )
                  {
                    if ( v4 )
                    {
                      v43 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1552));
                      v44 = v43;
                      if ( v43 )
                      {
                        LODWORD(v43[1].Next) = 134684674;
                        LOBYTE(v43[2].Next) = v39;
                        if ( v39 != -1 )
                        {
                          BYTE1(v43[2].Next) = v40;
                          BYTE2(v43[2].Next) = v42;
                        }
                        memmove(&v43[2].Next + 1, v41, v41->TargetInfoAsUlong);
                        RaidQueueDeferredItem((char *)(v4 + 1472), v44);
                      }
                    }
                  }
                }
                break;
              case 10:
                if ( v4 )
                  RaidpLinkUp(v4, (PKDPC *)va, a2);
                break;
              case 11:
                if ( v4 )
                  RaidpLinkDown(v4, (PKDPC *)va, a2);
                break;
              case 12:
                *(_QWORD *)&v63->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
                break;
              case 13:
                KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
              case 14:
                RaidHandleTraceNotifyType(0x1C0000000uLL, (unsigned int)v63, v65);
                break;
              case 15:
                StorpGetExtendedTable(a2, v63);
                break;
              default:
                return;
            }
          }
        }
        else
        {
          switch ( a1 )
          {
            case 4097:
              v21 = v63;
              if ( v63 && v65 )
              {
                KeInitializeDpc(v63, (PKDEFERRED_ROUTINE)v65, a2);
                KeInitializeSpinLock((PKSPIN_LOCK)&v21[1].TargetInfoAsUlong);
              }
              break;
            case 4099:
              v13 = v66;
              v14 = (int)v63;
              v15 = (PKDEFERRED_ROUTINE)v65;
              v16 = **(a2 - 2);
              if ( v66 )
              {
                *v66 = (_DWORD)v63;
                if ( v14 == 2 )
                {
                  if ( *(_DWORD *)(v16 + 688) )
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 680), (PKLOCK_QUEUE_HANDLE)(v13 + 2));
                  else
                    *((_BYTE *)v13 + 8) = RaidAdapterAcquireInterruptLock(v16);
                }
                else
                {
                  v20 = v14 - 1;
                  if ( v20 )
                  {
                    if ( v20 == 2 )
                      *((_BYTE *)v13 + 24) = RaidAdapterAcquireInterruptLock(v16);
                  }
                  else if ( v15 )
                  {
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v15 + 8, (PKLOCK_QUEUE_HANDLE)(v13 + 2));
                  }
                }
              }
              break;
            case 4101:
              if ( v4 )
              {
                v26 = (PKDEFERRED_ROUTINE)v65;
                v27 = v67;
                v28 = v69;
                v29 = (unsigned int)v66;
                v30 = (int)v63;
                v31 = v70;
                v57 = (unsigned int)v66;
                v58 = v67;
                v59 = v69;
                va_copy(v60, va2);
                if ( v65 && *(_WORD *)v65 == 1 )
                {
                  v32 = *(_BYTE *)(v65 + 8);
                  v33 = *(_BYTE *)(v65 + 9);
                  v34 = *(_BYTE *)(v65 + 10);
                }
                else
                {
                  v32 = -1;
                  v33 = -1;
                  v34 = -1;
                }
                if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                {
                  McTemplateK0pqquuuqpp(
                    0xC0000000,
                    (unsigned int)va,
                    0,
                    (_DWORD)a2,
                    *(_DWORD *)(v4 + 56),
                    (char)v63,
                    v32,
                    v33,
                    v34,
                    (char)v66,
                    (char)v67,
                    v69);
                  v29 = v57;
                  v27 = v58;
                  v28 = v59;
                }
                if ( v26
                  && *(_WORD *)v26 == 1
                  && v32 <= *(_BYTE *)(v4 + 376)
                  && ((v30 & 3) == 0 || v33 <= *(_BYTE *)(v4 + 401))
                  && ((v30 & 1) == 0 || v34 <= *(_BYTE *)(v4 + 450))
                  && (v30 & 7) != 0 )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4904), 1, 0) == 1 )
                  {
                    if ( v31 )
                      *v31 = -1056964607;
                  }
                  else
                  {
                    _InterlockedOr(v56, 0);
                    *(_DWORD *)(v4 + 4908) = v30;
                    *(_QWORD *)(v4 + 4920) = v26;
                    *(_DWORD *)(v4 + 4912) = v29;
                    *(_QWORD *)(v4 + 4928) = v27;
                    *(_QWORD *)(v4 + 4936) = v28;
                    _InterlockedOr(v56, 0);
                    *(_BYTE *)(v4 + 104) |= 0x40u;
                    *(_BYTE *)(v4 + 105) = 1;
                    KeInsertQueueDpc((PRKDPC)(v4 + 1992), 0LL, 0LL);
                    if ( v31 )
                      *v31 = 0;
                  }
                }
                else if ( v31 )
                {
                  *v31 = -1056964602;
                }
              }
              break;
            case 4103:
              v50 = v66;
              v51 = (PKDEFERRED_ROUTINE)v65;
              va_copy(v60, va1);
              v57 = 0;
              if ( v4 && v63 && LOWORD(v63->TargetInfoAsUlong) == 1 && (v65 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
              {
                LOWORD(v57) = v63->DpcListEntry.Next;
                BYTE2(v57) = BYTE2(v63->DpcListEntry.Next);
                v52 = v57;
                Unit = RaidAdapterFindUnit(v4, v57);
                if ( !Unit || (*(_DWORD *)(Unit + 1824) & 4) == 0 )
                {
                  *v50 = -1056964601;
                  return;
                }
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1880), 1, 0) == 1 )
                {
                  *v50 = -1056964596;
                  return;
                }
                if ( KeGetCurrentIrql() > 2u )
                {
                  v55 = StorAsyncNotificationDeferred(v4, Unit, v57, v51);
                  v54 = -1056964596;
                  if ( v55 )
                    v54 = 0;
                }
                else
                {
                  *(_QWORD *)(Unit + 1872) = v51;
                  v54 = RaidUnitProcessAsyncNotification(v4, v52, Unit + 1864);
                }
              }
              else
              {
                v54 = -1056964602;
              }
              *v50 = v54;
              break;
            case 4104:
              if ( v4 && v63 )
              {
                v45 = LOBYTE(v63->Number) == 40 ? v63[1].DeferredContext : v63->SystemArgument2;
                if ( v45 )
                  RaidAdapterRequestDirectComplete(v45, (PKDPC *)va, a2);
              }
              break;
            case 4105:
              v46 = v63;
              v47 = (int)v67;
              if ( v63 )
              {
                if ( v65 )
                {
                  KeInitializeDpc(v63, (PKDEFERRED_ROUTINE)v65, v66);
                  if ( v47 )
                    KeSetImportanceDpc(v46, v47);
                }
              }
              break;
            case 4106:
              v48 = v63;
              v49 = (char)v67;
              if ( v63 )
              {
                if ( v65 )
                {
                  KeInitializeThreadedDpc(v63, (PKDEFERRED_ROUTINE)v65, v66);
                  if ( v49 )
                    KeSetImportanceDpc(v48, HighImportance);
                }
              }
              break;
            case 4107:
              if ( v63 && v65 )
                KeSetTargetProcessorDpcEx(v63, (PPROCESSOR_NUMBER)v65);
              break;
            case 4108:
              if ( v4 && v66 )
                StorpMarkDeviceFailed(v4, v63, (unsigned int)v65);
              break;
            default:
              return;
          }
        }
        break;
    }
  }
  else if ( v4 && v63 )
  {
    v9 = LOBYTE(v63->Number) == 40 ? v63[1].DeferredContext : v63->SystemArgument2;
    if ( v9 )
      RaidAdapterRequestComplete(v4, v9, 0LL);
  }
}
