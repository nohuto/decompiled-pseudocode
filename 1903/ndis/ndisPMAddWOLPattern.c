/*
 * XREFs of ndisPMAddWOLPattern @ 0x1C001D0F4
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisGetWoLPatternSize @ 0x1C001CF58 (ndisGetWoLPatternSize.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001D65C (ndisCreatePMRejectWorkItem.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisClonePMPatternList @ 0x1C0072984 (ndisClonePMPatternList.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C007662C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v6; // edx
  _QWORD *v7; // rbx
  char v8; // r12
  unsigned int SetMiniport; // eax
  int v10; // edx
  unsigned int v11; // r14d
  int v12; // edx
  _QWORD *v13; // rbx
  int v15; // r9d
  KIRQL v16; // al
  unsigned __int8 v17; // cl
  void *v18; // rcx
  int v19; // eax
  int v20; // esi
  __int64 v21; // r13
  _QWORD *v22; // rax
  int v23; // edx
  int v24; // eax
  _DWORD *v25; // rsi
  int WoLPatternSize; // eax
  int v27; // r9d
  void *v28; // rcx
  char v29; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql; // [rsp+50h] [rbp-B0h]
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v33[256]; // [rsp+70h] [rbp-90h] BYREF

  v4 = a2;
  memset(v33, 0, 0xF8uLL);
  P[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      77,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v4,
      a3);
  }
  KeWaitForSingleObject((PVOID)(a1 + 3920), Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)(a3 + 88) |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v11 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v15 = 78;
      v29 = SetMiniport;
LABEL_15:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        v15,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        v29);
      goto LABEL_7;
    }
    if ( !v8 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      v17 = *(_BYTE *)(a1 + 32);
      NewIrql = v16;
      if ( v17 > 6u || v17 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
        v18 = *(void **)(a1 + 968);
      else
        v18 = *(void **)(a1 + 960);
      v19 = ndisClonePMPatternList(v18);
      *(_QWORD *)(a1 + 520) = 0LL;
      v20 = v19;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), NewIrql);
      if ( v20 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_7;
        v15 = 79;
        v29 = v20;
        goto LABEL_15;
      }
      v8 = 1;
    }
    v21 = *(_QWORD *)(a3 + 40);
    v22 = (_QWORD *)ndisRemovePMLowestPriorityEntry(P, *(unsigned int *)(v21 + 8));
    if ( !v22 )
      break;
    *v22 = v7;
    v7 = v22;
    memset(v33, 0, 0xF8uLL);
    v4 = a2;
    *(_QWORD *)&v33[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v33[88] |= 8u;
    *(_DWORD *)v33 = 15466902;
    *(_DWORD *)&v33[32] = -50265845;
    *(_DWORD *)&v33[4] = 1;
    *(_DWORD *)&v33[8] = *((_DWORD *)v7 + 11);
    *(_DWORD *)&v33[88] |= 0x1800000u;
    *(_QWORD *)&v33[40] = v7 + 5;
    *(_DWORD *)&v33[48] = 4;
    v24 = ndisQuerySetMiniportEx(a1, 0LL, (__int64)v33, 0, 0LL, a2);
    if ( v24 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v15 = 81;
      v29 = v24;
      goto LABEL_15;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      14,
      80,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      *(_DWORD *)(v21 + 8));
  }
  v4 = a2;
LABEL_7:
  while ( v7 )
  {
    v25 = v7;
    v7 = (_QWORD *)*v7;
    memset(v33, 0, 0xF8uLL);
    *(_QWORD *)&v33[104] = &ndisIntReqGeneric;
    *(_DWORD *)v33 = 15466902;
    *(_DWORD *)&v33[88] |= 8u;
    *(_DWORD *)&v33[32] = -50265846;
    *(_DWORD *)&v33[4] = 1;
    *(_DWORD *)&v33[8] = v25[11];
    *(_QWORD *)&v33[40] = v25 + 12;
    WoLPatternSize = ndisGetWoLPatternSize(v25 + 12);
    *(_DWORD *)&v33[88] = v27 | 0x1800000;
    *(_DWORD *)&v33[48] = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (__int64)v33, 0, 0LL, v4) )
    {
      *(_QWORD *)v25 = v7;
      break;
    }
    ExFreePoolWithTag(v25, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 3920), 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1);
  v13 = P[0];
  while ( v13 )
  {
    v28 = v13;
    v13 = (_QWORD *)*v13;
    ExFreePoolWithTag(v28, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      82,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v4,
      a3,
      v11);
  return v11;
}
