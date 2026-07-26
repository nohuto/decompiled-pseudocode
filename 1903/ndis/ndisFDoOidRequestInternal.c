/*
 * XREFs of ndisFDoOidRequestInternal @ 0x1C00072E0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C0009CDC (WPP_RECORDER_SF_Dqqd.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C0018448 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FB6B4 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FB6F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  KSPIN_LOCK *v1; // r12
  int v3; // r15d
  __int64 *v4; // rbx
  KIRQL v5; // al
  int v6; // edx
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // r13
  char v10; // si
  unsigned int v11; // eax
  unsigned int v12; // r8d
  char *v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  int v17; // ecx
  __int64 (__fastcall *v18)(_QWORD *); // rax
  KIRQL v19; // al
  KIRQL v20; // al
  __int64 v21; // r15
  int v22; // r14d
  __int64 v23; // r8
  int v24; // edx
  int v25; // ebx
  __int64 v26; // r8
  __int64 *v27; // rsi
  __int64 *v28; // rdx
  bool v29; // zf
  int v30; // edx
  int v31; // r8d
  NdisWatchdogState *v32; // rcx
  int v33; // [rsp+28h] [rbp-89h]
  _QWORD v34[6]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v35[5]; // [rsp+88h] [rbp-29h] BYREF
  int v36; // [rsp+B0h] [rbp-1h]
  int v37; // [rsp+B4h] [rbp+3h]
  _QWORD v38[5]; // [rsp+B8h] [rbp+7h] BYREF
  int v39; // [rsp+E0h] [rbp+2Fh]
  int v40; // [rsp+E4h] [rbp+33h]
  __int64 *v41; // [rsp+118h] [rbp+67h] BYREF

  v1 = (KSPIN_LOCK *)(Parameter + 144);
  while ( 1 )
  {
LABEL_2:
    v3 = -1073741823;
    v4 = 0LL;
    v5 = KeAcquireSpinLockRaiseToDpc(v1);
    v6 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    if ( (v6 & 0x800) == 0 )
    {
      v7 = Parameter + 160;
      if ( *(char **)v7 != v7 )
      {
        *((_DWORD *)Parameter + 14) = v6 | 0x800;
        v4 = *(__int64 **)v7;
        if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v8 = *v4, *(__int64 **)(*v4 + 8) != v4) )
          __fastfail(3u);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v8 + 8) = v7;
      }
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLock(v1, v5);
    if ( !v4 )
      break;
    v9 = v4 - 9;
    LODWORD(v41) = *((_DWORD *)v4 - 10);
    v10 = 0;
    memset(v34, 0, sizeof(v34));
    *((_DWORD *)v4 + 4) &= ~4u;
    v11 = 73;
    v12 = 0;
    if ( *Parameter == 17 )
      v13 = Parameter;
    else
      v13 = (char *)*((_QWORD *)Parameter + 4);
    if ( *((_DWORD *)v9 + 2) && (*((_DWORD *)v13 + 468) & 0x200) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v14 = *((_DWORD *)v9 + 8);
      v15 = 146;
      while ( v11 >= v12 )
      {
        v16 = *((_DWORD *)&unk_1C00CA300 + 6 * v11);
        if ( v16 == v14 )
        {
          *((_DWORD *)v4 + 5) = v11;
          *((_DWORD *)v4 + 4) |= 4u;
          v17 = *((_DWORD *)v4 + 4);
          HIDWORD(v34[5]) = 0;
          v34[2] = Parameter;
          v34[0] = 0LL;
          v34[4] = v4 - 9;
          if ( (v17 & 0x220) != 0 )
            v34[3] = v4[4];
          else
            v34[3] = 0LL;
          if ( (v17 & 0x40) != 0 )
            v34[1] = v4[4];
          else
            v34[1] = 0LL;
          LODWORD(v34[5]) = 0;
          if ( (v17 & 0x840080) != 0 )
          {
            v10 = 0;
            break;
          }
          v18 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)&unk_1C00CA300 + 3 * *((unsigned int *)v4 + 5) + 1);
          if ( v18 )
          {
            v10 = v18(v34);
            if ( v10 == 1 )
            {
              ndisOidRequestComplete(v34);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Dqqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v30,
                  v31,
                  38,
                  v33,
                  (char)v41,
                  (_BYTE)v4 - 72,
                  (char)Parameter,
                  3);
              goto LABEL_2;
            }
          }
          break;
        }
        if ( v16 <= v14 )
        {
          v12 = v11 + 1;
        }
        else
        {
          if ( !v11 )
            break;
          v15 = v11 - 1;
        }
        v11 = v12 + ((v15 - v12 + 1) >> 1);
        if ( v11 > v15 )
          break;
      }
    }
    v19 = KeAcquireSpinLockRaiseToDpc(v1);
    if ( (*((_DWORD *)Parameter + 14) & 0x10000) != 0 )
    {
      v10 = 1;
      v3 = -1073676286;
    }
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLock(v1, v19);
    if ( v10 == 1 )
    {
      v35[4] = v4 - 9;
      v35[0] = 0LL;
      v35[1] = 0LL;
      v35[3] = 0LL;
      v37 = 0;
      v35[2] = Parameter;
      v36 = v3;
      ndisOidRequestComplete(v35);
    }
    else
    {
      *((_DWORD *)v4 + 4) |= 0x20000u;
      v20 = KeAcquireSpinLockRaiseToDpc(v1);
      *((_QWORD *)Parameter + 22) = v9;
      *((_QWORD *)Parameter + 19) = 0LL;
      KeReleaseSpinLock(v1, v20);
      ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 23));
      ndisArmWatchdog(
        *((struct NDISWATCHDOG__ **)Parameter + 23),
        Parameter,
        0x24u,
        *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
        0x88B8u,
        *((unsigned int *)v9 + 8));
      v21 = *((_QWORD *)Parameter + 2);
      v22 = *((_DWORD *)v9 + 8);
      LOBYTE(v23) = 1;
      v41 = 0LL;
      v25 = ndisOidCloneForCompatibility(Parameter, v9, v23, &v41);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          v26,
          113,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)Parameter,
          v22,
          (char)v9);
      }
      v27 = v41;
      if ( !v25 )
      {
        v28 = v9;
        if ( v41 )
          v28 = v41;
        v25 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v21 + 248))(*((_QWORD *)Parameter + 3), v28);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v24,
          v26,
          114,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)Parameter,
          v22,
          (char)v9,
          v25);
      v29 = v25 == 259;
      if ( v25 != 259 )
      {
        if ( v27 )
        {
          LOBYTE(v26) = 1;
          ndisOidFreeInternalCloneRequest(Parameter, v27, v26, 0LL);
        }
        v29 = v25 == 259;
      }
      if ( !v29 )
      {
        v32 = (NdisWatchdogState *)*((_QWORD *)Parameter + 23);
        if ( v32 != (NdisWatchdogState *)-1LL )
          NdisWatchdogState::CancelTimer(v32);
        v38[0] = 0LL;
        v38[1] = 0LL;
        v38[3] = 0LL;
        v40 = 0;
        v38[4] = v9;
        v38[2] = Parameter;
        v39 = v25;
        ndisOidRequestComplete(v38);
      }
    }
  }
}
