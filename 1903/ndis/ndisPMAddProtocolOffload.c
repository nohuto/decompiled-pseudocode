/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C002311C
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001D65C (ndisCreatePMRejectWorkItem.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisClonePMPatternList @ 0x1C0072984 (ndisClonePMPatternList.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C007662C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v6; // edx
  _QWORD *v7; // rbx
  char v8; // r12
  unsigned int SetMiniport; // eax
  int v10; // edx
  unsigned int v11; // r15d
  int v12; // edx
  _QWORD *v13; // rbx
  KIRQL v15; // di
  void *v16; // rcx
  int v17; // eax
  int v18; // r12d
  int v19; // edx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  int v22; // edx
  int v23; // eax
  int v24; // r9d
  _DWORD *v25; // rdi
  void *v26; // rcx
  char v27; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  char v30[256]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = a2;
  memset(v30, 0, 0xF8uLL);
  P = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      97,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v4,
      a3);
  }
  KeWaitForSingleObject((PVOID)(a1 + 3952), Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)(a3 + 88) |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v11 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v24 = 98;
      v27 = SetMiniport;
LABEL_22:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        v24,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        v27);
      goto LABEL_7;
    }
    if ( !v8 )
      break;
LABEL_16:
    v20 = *(_QWORD *)(a3 + 40);
    v21 = (_QWORD *)ndisRemovePMLowestPriorityEntry(&P, *(unsigned int *)(v20 + 8));
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          14,
          100,
          (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
          *(_DWORD *)(v20 + 8));
      }
      v4 = a2;
      goto LABEL_7;
    }
    *v21 = v7;
    v7 = v21;
    memset(v30, 0, 0xF8uLL);
    v4 = a2;
    *(_QWORD *)&v30[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v30[88] |= 8u;
    *(_DWORD *)v30 = 15466902;
    *(_DWORD *)&v30[32] = -50265841;
    *(_DWORD *)&v30[4] = 1;
    *(_DWORD *)&v30[8] = *((_DWORD *)v7 + 11);
    *(_DWORD *)&v30[88] |= 0x1800000u;
    *(_QWORD *)&v30[40] = v7 + 5;
    *(_DWORD *)&v30[48] = 4;
    v23 = ndisQuerySetMiniportEx(a1, 0LL, (__int64)v30, 0, 0LL, a2);
    if ( v23 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v24 = 101;
      v27 = v23;
      goto LABEL_22;
    }
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v16 = *(void **)(a1 + 976);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v17 = ndisClonePMPatternList(v16);
  *(_QWORD *)(a1 + 520) = 0LL;
  v18 = v17;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v15);
  if ( !v18 )
  {
    v8 = 1;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      14,
      99,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v18);
  }
  v4 = a2;
LABEL_7:
  while ( v7 )
  {
    v25 = v7;
    v7 = (_QWORD *)*v7;
    memset(v30, 0, 0xF8uLL);
    *(_QWORD *)&v30[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v30[88] |= 8u;
    *(_DWORD *)v30 = 15466902;
    *(_DWORD *)&v30[32] = -50265843;
    *(_DWORD *)&v30[4] = 1;
    *(_DWORD *)&v30[8] = v25[11];
    *(_DWORD *)&v30[88] |= 0x1800000u;
    *(_QWORD *)&v30[40] = v25 + 12;
    *(_DWORD *)&v30[48] = 240;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (__int64)v30, 0, 0LL, v4) )
    {
      *(_QWORD *)v25 = v7;
      v7 = v25;
      break;
    }
    ExFreePoolWithTag(v25, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 3952), 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, (_LIST_ENTRY *)v7, 1073938514);
  v13 = P;
  while ( v13 )
  {
    v26 = v13;
    v13 = (_QWORD *)*v13;
    ExFreePoolWithTag(v26, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      0xBu,
      0x66u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v4,
      a3,
      v11);
  return v11;
}
