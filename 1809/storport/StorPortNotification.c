/*
 * XREFs of StorPortNotification @ 0x1C00053A0
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C0077440 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000246C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     RaidAdapterRequestComplete @ 0x1C0005DE0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C0038D70 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0038E78 (RaidAdapterRequestTimerDeferred.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     McTemplateK0pq @ 0x1C003D868 (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C003D8DC (McTemplateK0pqq.c)
 *     McTemplateK0pqquuuqpp @ 0x1C003DAA4 (McTemplateK0pqquuuqpp.c)
 *     RaidpLinkDown @ 0x1C003DFF8 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C003E060 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C003E268 (StorAsyncNotificationDeferred.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C0040760 (StorpGetExtendedTable.c)
 *     RaidHandleTraceNotifyType @ 0x1C0044E30 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004A404 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004CD38 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004D02C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(int a1, void *a2, ...)
{
  int v2; // ebp
  void *v3; // r9
  __int64 v4; // rdi
  va_list v5; // rdx
  void *DeferredContext; // rdx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  PKDPC v13; // rsi
  __int64 v14; // rbx
  struct _KTIMER *v15; // rcx
  char v16; // bp
  char v17; // r14
  PKDPC v18; // rsi
  char v19; // r15
  PSLIST_ENTRY v20; // rax
  struct _SLIST_ENTRY *v21; // rbx
  __int64 v22; // rax
  PKDEFERRED_ROUTINE v23; // rbx
  int v24; // ecx
  void *v25; // rcx
  PKDPC v26; // rbx
  struct _KDPC *v27; // rbx
  KDPC_IMPORTANCE v28; // edi
  struct _KDPC *v29; // rbx
  char v30; // di
  _DWORD *v31; // rbx
  _DWORD *v32; // rbx
  int v33; // r8d
  PKDEFERRED_ROUTINE v34; // r10
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // r8d
  _QWORD *v38; // rax
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  PKDPC v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  PKDEFERRED_ROUTINE v43; // rsi
  _DWORD *v44; // r10
  __int64 v45; // r11
  unsigned int v46; // r8d
  int v47; // r14d
  _DWORD *v48; // rbx
  unsigned __int8 v49; // r15
  unsigned __int8 v50; // r12
  unsigned __int8 v51; // r13
  int *v52; // rsi
  PKDEFERRED_ROUTINE v53; // r14
  unsigned int v54; // ebx
  __int64 Unit; // rax
  char v56; // al
  int v57; // ecx
  signed __int32 v58[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-78h]
  _DWORD *v60; // [rsp+68h] [rbp-70h]
  __int64 v61; // [rsp+70h] [rbp-68h]
  va_list v62; // [rsp+78h] [rbp-60h]
  __int64 v63; // [rsp+80h] [rbp-58h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  PKDPC v66; // [rsp+F0h] [rbp+18h] BYREF
  va_list va; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v68; // [rsp+F8h] [rbp+20h]
  _DWORD *v69; // [rsp+100h] [rbp+28h]
  _DWORD *v70; // [rsp+108h] [rbp+30h] BYREF
  va_list va1; // [rsp+108h] [rbp+30h]
  __int64 v72; // [rsp+110h] [rbp+38h]
  _DWORD *v73; // [rsp+118h] [rbp+40h]
  va_list va2; // [rsp+120h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v66 = va_arg(va1, PKDPC);
  v68 = va_arg(va1, _QWORD);
  v69 = va_arg(va1, _DWORD *);
  va_copy(va2, va1);
  v70 = va_arg(va2, _DWORD *);
  v72 = va_arg(va2, _QWORD);
  v73 = va_arg(va2, _DWORD *);
  v2 = 0;
  v63 = 0LL;
  v3 = a2;
  v4 = 0LL;
  if ( a2 )
    v4 = **((_QWORD **)a2 - 2);
  va_copy(v5, va);
  if ( a1 > 4096 )
  {
    v24 = a1 - 4097;
    switch ( v24 )
    {
      case 0:
        v26 = v66;
        if ( v66 && v68 )
        {
          KeInitializeDpc(v66, (PKDEFERRED_ROUTINE)v68, v3);
          KeInitializeSpinLock((PKSPIN_LOCK)&v26[1].TargetInfoAsUlong);
        }
        return;
      case 1:
        v31 = v70;
        if ( v66 )
          *v31 = KeInsertQueueDpc(v66, (PVOID)v68, v69);
        return;
      case 2:
        v32 = v69;
        v33 = (int)v66;
        v34 = (PKDEFERRED_ROUTINE)v68;
        v35 = **((_QWORD **)v3 - 2);
        if ( v69 )
        {
          *v69 = (_DWORD)v66;
          v36 = v33 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
                *((_BYTE *)v32 + 24) = RaidAdapterAcquireInterruptLock(v35);
            }
            else if ( *(_DWORD *)(v35 + 712) )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 704), (PKLOCK_QUEUE_HANDLE)(v32 + 2));
            }
            else
            {
              *((_BYTE *)v32 + 8) = RaidAdapterAcquireInterruptLock(v35);
            }
          }
          else if ( v34 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v34 + 8, (PKLOCK_QUEUE_HANDLE)(v32 + 2));
          }
        }
        return;
      case 3:
        v38 = (_QWORD *)*((_QWORD *)v3 - 2);
        if ( !v66 )
          return;
        if ( v66->TargetInfoAsUlong == 1 )
        {
          p_DpcListEntry = &v66->DpcListEntry;
        }
        else
        {
          if ( v66->TargetInfoAsUlong != 2 )
          {
            switch ( v66->TargetInfoAsUlong )
            {
              case 3u:
                RaidAdapterReleaseInterruptLock(*v38, LOBYTE(v66->DeferredRoutine));
                break;
              case 4u:
                KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v66->DpcListEntry);
                break;
              case 5u:
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v66->DpcListEntry);
                break;
            }
            return;
          }
          p_DpcListEntry = &v66->DpcListEntry;
          if ( !*(_DWORD *)(*v38 + 712LL) )
          {
            RaidAdapterReleaseInterruptLock(*v38, LOBYTE(p_DpcListEntry->Next));
            return;
          }
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        return;
      case 4:
        if ( v4 )
        {
          v43 = (PKDEFERRED_ROUTINE)v68;
          v44 = v70;
          v45 = v72;
          v46 = (unsigned int)v69;
          v47 = (int)v66;
          v48 = v73;
          v59 = (unsigned int)v69;
          v60 = v70;
          v61 = v72;
          va_copy(v62, va2);
          if ( v68 && *(_WORD *)v68 == 1 )
          {
            v49 = *(_BYTE *)(v68 + 8);
            v50 = *(_BYTE *)(v68 + 9);
            v51 = *(_BYTE *)(v68 + 10);
          }
          else
          {
            v49 = -1;
            v50 = -1;
            v51 = -1;
          }
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
          {
            McTemplateK0pqquuuqpp(
              v24,
              (unsigned int)va,
              0,
              (_DWORD)v3,
              *(_DWORD *)(v4 + 56),
              (char)v66,
              v49,
              v50,
              v51,
              (char)v69,
              (char)v70,
              v72);
            v46 = v59;
            v44 = v60;
            v45 = v61;
          }
          if ( v43
            && *(_WORD *)v43 == 1
            && v49 <= *(_BYTE *)(v4 + 392)
            && ((v47 & 3) == 0 || v50 <= *(_BYTE *)(v4 + 417))
            && ((v47 & 1) == 0 || v51 <= *(_BYTE *)(v4 + 466))
            && (v47 & 7) != 0 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4984), 1, 0) == 1 )
            {
              if ( v48 )
                *v48 = -1056964607;
            }
            else
            {
              _InterlockedOr(v58, 0);
              *(_DWORD *)(v4 + 4988) = v47;
              *(_QWORD *)(v4 + 5000) = v43;
              *(_DWORD *)(v4 + 4992) = v46;
              *(_QWORD *)(v4 + 5008) = v44;
              *(_QWORD *)(v4 + 5016) = v45;
              _InterlockedOr(v58, 0);
              *(_BYTE *)(v4 + 104) |= 0x40u;
              *(_BYTE *)(v4 + 105) = 1;
              KeInsertQueueDpc((PRKDPC)(v4 + 2056), 0LL, 0LL);
              if ( v48 )
                *v48 = 0;
            }
          }
          else if ( v48 )
          {
            *v48 = -1056964602;
          }
        }
        return;
      case 5:
        if ( StorEtwLoggingEnabled )
        {
          v40 = v66;
          if ( v68 )
          {
            v41 = *(_BYTE *)(v68 + 2) == 40 ? *(_QWORD *)(v68 + 96) : *(_QWORD *)(v68 + 48);
            if ( v41 )
            {
              if ( (byte_1C00617E1 & 1) != 0 || (byte_1C00617E3 & 2) != 0 )
                *(_QWORD *)(v41 + 720) = v66;
              if ( (byte_1C00617E1 & 1) != 0 )
              {
                LOBYTE(v5) = 1;
                StorEtwIORequestServiceTimeEventData(v41, v5, v40, v3);
              }
              v42 = *(_QWORD *)(v41 + 224);
              if ( v42 && *(_DWORD *)(v42 + 1812) && (byte_1C00617E3 & 2) != 0 )
              {
                LOBYTE(v5) = 1;
                StorEtwLogoRequestServiceTimeEventData(v41, v5, v40, v3);
              }
            }
          }
        }
        return;
      case 6:
        v52 = v69;
        v53 = (PKDEFERRED_ROUTINE)v68;
        va_copy(v62, va1);
        if ( v4 && v66 && LOWORD(v66->TargetInfoAsUlong) == 1 && (v68 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
        {
          LOWORD(v59) = v66->DpcListEntry.Next;
          BYTE2(v59) = BYTE2(v66->DpcListEntry.Next);
          v54 = v59;
          Unit = RaidAdapterFindUnit(v4, v59);
          if ( Unit && (*(_DWORD *)(Unit + 1824) & 4) != 0 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1880), 1, 0) == 1 )
            {
              *v52 = -1056964596;
            }
            else if ( KeGetCurrentIrql() > 2u )
            {
              v56 = StorAsyncNotificationDeferred(v4, Unit, v59, v53);
              v57 = -1056964596;
              if ( v56 )
                v57 = 0;
              *v52 = v57;
            }
            else
            {
              *(_QWORD *)(Unit + 1872) = v53;
              *v52 = RaidUnitProcessAsyncNotification(v4, v54, Unit + 1864);
            }
          }
          else
          {
            *v52 = -1056964601;
          }
        }
        else
        {
          *v69 = -1056964602;
        }
        return;
      case 7:
        if ( v4 && v66 )
        {
          v25 = LOBYTE(v66->Number) == 40 ? v66[1].DeferredContext : v66->SystemArgument2;
          if ( v25 )
            RaidAdapterRequestDirectComplete(v25, (PKDPC *)va, 0x1C0000000uLL, v3);
        }
        return;
      case 8:
        v27 = v66;
        v28 = (int)v70;
        if ( v66 )
        {
          if ( v68 )
          {
            KeInitializeDpc(v66, (PKDEFERRED_ROUTINE)v68, v69);
            if ( v28 )
              KeSetImportanceDpc(v27, v28);
          }
        }
        return;
      case 9:
        v29 = v66;
        v30 = (char)v70;
        if ( v66 )
        {
          if ( v68 )
          {
            KeInitializeThreadedDpc(v66, (PKDEFERRED_ROUTINE)v68, v69);
            if ( v30 )
              KeSetImportanceDpc(v29, HighImportance);
          }
        }
        return;
      case 10:
        if ( v66 && v68 )
          KeSetTargetProcessorDpcEx(v66, (PPROCESSOR_NUMBER)v68);
        return;
      default:
        return;
    }
  }
  if ( a1 == 4096 )
  {
    v22 = *((_QWORD *)v3 - 2);
    v23 = (PKDEFERRED_ROUTINE)v68;
    if ( (*(_BYTE *)(*(_QWORD *)v22 + 104LL) & 0x10) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)v22 + 4472LL) = v66;
      v2 = 1;
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
      *(_DWORD *)v23 = 0;
      return;
    }
    *(_DWORD *)v23 = v2;
  }
  else
  {
    switch ( a1 )
    {
      case 0:
        if ( v4 && v66 )
        {
          if ( LOBYTE(v66->Number) == 40 )
            DeferredContext = v66[1].DeferredContext;
          else
            DeferredContext = v66->SystemArgument2;
          if ( DeferredContext )
            RaidAdapterRequestComplete(v4, DeferredContext, 0LL);
        }
        break;
      case 3:
        if ( v4 )
        {
          DbgLogRequest(v4, 39, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 536), 0LL);
          v9 = *(_DWORD *)(v4 + 536);
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            McTemplateK0pqq(
              v7,
              (unsigned int)&EventResetDetected,
              v8,
              (_DWORD)a2,
              *(_DWORD *)(v4 + 56),
              *(_DWORD *)(v4 + 536));
          if ( v9 )
          {
            if ( v9 > 0x3D0900 )
              v9 = 4000000;
            v10 = v9 / 0xF4240 + 1;
            if ( v9 == 1000000 * (v9 / 0xF4240) )
              v10 = v9 / 0xF4240;
            StorPortPause(a2, v10);
          }
        }
        break;
      case 6:
        v13 = v66;
        v14 = (unsigned int)v68;
        if ( v4 )
        {
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            McTemplateK0pqq(a1, (unsigned int)&EventRequestTimerCall, 0xC0000000, (_DWORD)v3, *(_DWORD *)(v4 + 56), v68);
          if ( KeGetCurrentIrql() > 2u )
          {
            RaidAdapterRequestTimerDeferred(v4, v13, (unsigned int)v14, v3);
          }
          else
          {
            v15 = (struct _KTIMER *)(v4 + 1728);
            if ( (_DWORD)v14 )
            {
              *(_QWORD *)(v4 + 1984) = v13;
              KeSetCoalescableTimer(v15, (LARGE_INTEGER)(-10 * v14), 0, 0, (PKDPC)(v4 + 1664));
            }
            else
            {
              KeCancelTimer(v15);
            }
          }
        }
        break;
      case 7:
        if ( v4 )
        {
          DbgLogRequest(v4, 38, v4, *(unsigned int *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 536), 0LL);
          if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
            McTemplateK0pq(v11, &EventBusChangeDetected, v12, a2, *(_DWORD *)(v4 + 56));
          *(_WORD *)(v4 + 105) = 257;
          KeInsertQueueDpc((PRKDPC)(v4 + 2056), 0LL, 0LL);
        }
        break;
      case 8:
        v16 = v68;
        v17 = 0;
        v18 = v66;
        v19 = 0;
        if ( (_BYTE)v68 != 0xFF )
        {
          v17 = (char)v69;
          v19 = (char)v70;
        }
        if ( v66 )
        {
          if ( v66->TargetInfoAsUlong <= 0x80 )
          {
            if ( v4 )
            {
              v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1616));
              v21 = v20;
              if ( v20 )
              {
                LODWORD(v20[1].Next) = 134684674;
                LOBYTE(v20[2].Next) = v16;
                if ( v16 != -1 )
                {
                  BYTE1(v20[2].Next) = v17;
                  BYTE2(v20[2].Next) = v19;
                }
                memmove(&v20[2].Next + 1, v18, v18->TargetInfoAsUlong);
                RaidQueueDeferredItem((char *)(v4 + 1536), v21);
              }
            }
          }
        }
        break;
      case 10:
        if ( v4 )
          RaidpLinkUp(v4, (PKDPC *)va);
        break;
      case 11:
        if ( v4 )
          RaidpLinkDown(v4, (PKDPC *)va);
        break;
      case 12:
        *(_QWORD *)&v66->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
        break;
      case 13:
        KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
      case 14:
        RaidHandleTraceNotifyType(a1, (unsigned int)v66, v68, v3);
        break;
      case 15:
        StorpGetExtendedTable(v3, v66);
        break;
      default:
        return;
    }
  }
}
