/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003672C (ndisIsCompartmentAccessibleByClient.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C003686C (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v1; // esi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rdi
  int v3; // r15d
  struct _NM_REQUEST_GET_PARAMETER *v4; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned int CompartmentId; // r13d
  int *ThreadProperty; // rax
  int *v8; // rcx
  int v9; // ebx
  PACCESS_TOKEN v10; // rax
  void *v11; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // esi
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rdx
  KIRQL v16; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v18; // al
  __int64 v19; // r8
  int v20; // ecx
  KIRQL v21; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *j; // rax
  unsigned int v23; // ebx
  int v24; // r12d
  char v25; // r13
  char *v26; // r14
  int v27; // esi
  int v28; // eax
  unsigned int v29; // ebx
  KIRQL v30; // bl
  int v31; // edx
  NTSTATUS v33; // ebx
  int v34; // ecx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rax
  KIRQL v36; // r8
  __int64 v37; // rcx
  struct _KEVENT *AsyncEvent; // rcx
  char v39; // [rsp+48h] [rbp-19h]
  BOOLEAN EffectiveOnly; // [rsp+49h] [rbp-18h] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+4Ah] [rbp-17h] BYREF
  int v42; // [rsp+4Ch] [rbp-15h]
  PVOID TokenInformation; // [rsp+50h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[4]; // [rsp+58h] [rbp-9h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v45; // [rsp+68h] [rbp+7h]
  int v46; // [rsp+70h] [rbp+Fh] BYREF
  int v47; // [rsp+74h] [rbp+13h]
  _GUID NamespaceGuid; // [rsp+78h] [rbp+17h]

  v1 = 0;
  v45 = a1;
  v2 = 0LL;
  v42 = 0;
  v3 = 0;
  v39 = 0;
  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      128,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v4 + 6) != 4 || !*((_DWORD *)v4 + 12) || !*((_QWORD *)v4 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_54;
  }
  CurrentThread = KeGetCurrentThread();
  CompartmentId = **((_DWORD **)v4 + 2);
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = ThreadProperty;
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    v46 = ThreadProperty[1];
    v47 = v9;
    ObfDereferenceObject(ThreadProperty);
    v1 = v9;
  }
  else
  {
    v9 = 0;
    v46 = 0;
    v47 = 0;
  }
  if ( !v1 )
  {
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v10 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, ImpersonationLevel);
      v11 = v10;
      if ( v10 )
      {
        v33 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v11);
        if ( v33 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v9 = 0;
      v36 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v36);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    v47 = v9;
    v1 = v9;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = 0LL;
  v16 = v14;
  for ( i = ndisIfCompartmentList;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList;
        i = (struct _NDIS_IF_COMPARTMENT_BLOCK *)i->Link.Flink )
  {
    if ( i->CompartmentId == v1 )
    {
      v15 = i;
      break;
    }
    if ( i->CompartmentId > v1 )
      break;
  }
  NamespaceGuid = v15->LoopbackInfo.NamespaceGuid;
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v20 = *((_DWORD *)v4 + 14);
  v21 = v18;
  if ( v20 )
  {
    v34 = v20 - 1;
    if ( !v34 )
    {
      CompartmentId = 0;
      goto LABEL_67;
    }
    if ( v34 == 1 )
    {
LABEL_67:
      while ( 1 )
      {
        Flink = ndisIfCompartmentList;
        v2 = 0LL;
        while ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
        {
          if ( Flink->CompartmentId > CompartmentId )
          {
            v2 = Flink;
            break;
          }
          Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        }
        if ( !v2 )
          break;
        CompartmentId = v2->CompartmentId;
        LOBYTE(v19) = 1;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v2, &v46, v19) )
          goto LABEL_29;
      }
    }
    else
    {
      v3 = -1073741808;
      v42 = -1073741808;
    }
  }
  else
  {
    for ( j = ndisIfCompartmentList;
          j != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList;
          j = (struct _NDIS_IF_COMPARTMENT_BLOCK *)j->Link.Flink )
    {
      if ( j->CompartmentId == CompartmentId )
      {
        v2 = j;
        break;
      }
      if ( j->CompartmentId > CompartmentId )
        break;
    }
    if ( v2 )
    {
      if ( v9 != v2->CompartmentId )
      {
        v37 = *(_QWORD *)&NamespaceGuid.Data1 - *(_QWORD *)&v2->LoopbackInfo.NamespaceGuid.Data1;
        if ( *(_QWORD *)&NamespaceGuid.Data1 == *(_QWORD *)&v2->LoopbackInfo.NamespaceGuid.Data1 )
          v37 = *(_QWORD *)NamespaceGuid.Data4 - *(_QWORD *)v2->LoopbackInfo.NamespaceGuid.Data4;
        if ( v37 && ((v2->LoopbackInfo.Flags & 2) != 0 || v9 != 1) )
          v2 = 0LL;
      }
LABEL_29:
      if ( v2 )
      {
        _InterlockedAdd(&v2->Ref, 1u);
        v39 = 1;
        **((_DWORD **)v4 + 2) = v2->CompartmentId;
      }
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v21);
  if ( v3 >= 0 )
  {
    if ( v2 )
    {
      if ( *((_DWORD *)v4 + 8) )
      {
        v3 = -1073741808;
      }
      else
      {
        v23 = *((_DWORD *)v4 + 13);
        v24 = *((_DWORD *)v4 + 12);
        if ( *((_QWORD *)v4 + 5) )
        {
          v25 = 0;
          if ( v24 > 0 )
          {
            v26 = (char *)*((_QWORD *)v4 + 5);
            while ( 1 )
            {
              if ( v25 )
              {
LABEL_48:
                v4 = v45;
                v3 = v42;
                break;
              }
              if ( v23 <= 0x234 )
              {
                if ( v23 == 564 )
                {
                  v28 = 516;
                  v27 = 1080;
                }
                else if ( v23 )
                {
                  switch ( v23 )
                  {
                    case 8u:
                      v28 = 8;
                      v27 = 16;
                      break;
                    case 0x10u:
                      v27 = 32;
                      goto LABEL_44;
                    case 0x20u:
                      v27 = 48;
LABEL_44:
                      v28 = 16;
                      break;
                    case 0x30u:
                      v28 = 516;
                      v27 = 564;
                      break;
                    default:
LABEL_106:
                      v25 = 1;
                      goto LABEL_47;
                  }
                }
                else
                {
                  v28 = 4;
                  v27 = 8;
                }
              }
              else
              {
                switch ( v23 )
                {
                  case 0x438u:
                    v27 = 1096;
                    goto LABEL_44;
                  case 0x448u:
                    v28 = 516;
                    v27 = 1616;
                    break;
                  case 0x650u:
                    v28 = 4;
                    v27 = 1620;
                    break;
                  case 0x654u:
                    v27 = 1636;
                    v25 = 1;
                    goto LABEL_44;
                  default:
                    goto LABEL_106;
                }
              }
              if ( v24 < v28 )
                goto LABEL_106;
              memmove(v26, &v2->LoopbackInfo.Header.Type + v23, (unsigned int)v28);
              v26 += v27 - v23;
              v24 += v23 - v27;
              v23 = v27;
LABEL_47:
              if ( v24 <= 0 )
                goto LABEL_48;
            }
          }
          v29 = v23 - *((_DWORD *)v4 + 13);
          *((_DWORD *)v4 + 12) = v29;
          if ( !v29 )
            v3 = -1073741811;
        }
        else
        {
          *((_DWORD *)v4 + 12) = 0;
        }
      }
    }
    else
    {
      v3 = *((_DWORD *)v4 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
  if ( v39 )
  {
    v30 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( _InterlockedExchangeAdd(&v2->Ref, 0xFFFFFFFF) == 1 )
    {
      AsyncEvent = v2->AsyncEvent;
      if ( AsyncEvent )
        KeSetEvent(AsyncEvent, 0, 0);
    }
    KeReleaseSpinLock(&ndisIfListLock, v30);
  }
LABEL_54:
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      22,
      129,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v4,
      v3);
  }
  return (unsigned int)v3;
}
