/*
 * XREFs of ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180035404 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007C1D4 (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18007C4B8 (-HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@@@Z @ 0x18007C700 (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@.c)
 *     ?HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18007CA60 (-HampSlsReleaseLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampSlsScenarioChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        _QWORD *a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  char v11; // di
  __int128 v12; // xmm1
  char v13; // al
  struct _RTL_BALANCED_NODE *v14; // rcx
  void *v15; // rsi
  int v16; // edi
  struct _RTL_BALANCED_NODE *v17; // rdx
  unsigned __int64 v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rdx
  unsigned __int64 v20; // rbx
  DWORD v21; // ebx
  char v22; // cl
  _OWORD v24[3]; // [rsp+20h] [rbp-99h] BYREF
  char v25[144]; // [rsp+50h] [rbp-69h] BYREF

  *(_QWORD *)&v24[0] = a4;
  memset((char *)v24 + 8, 0, 24);
  v6 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  HampSlsAcquireLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, v7);
  if ( (*((_DWORD *)a4 + 25) & 4) == 0 )
  {
    v8 = (__int64)a5;
    v9 = *((_DWORD *)a4 + 25) & 1;
    v10 = *a5 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( *a5 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v10 = a5[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( v10 )
    {
      if ( v9 )
        HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, (struct _HAM_SLEEP_STUDY_SESSION_DATA *)v24);
    }
    else if ( !v9 || a4[48] != *((_BYTE *)a5 + 16) )
    {
      v11 = *((_BYTE *)a5 + 16);
      v12 = *(_OWORD *)(a4 + 40);
      v24[0] = *(_OWORD *)(a4 + 24);
      v24[1] = v12;
      memset_0(a4 + 24, 0, 0x20uLL);
      *((_QWORD *)a4 + 3) = a4;
      *((_QWORD *)a4 + 4) = 0LL;
      *((_QWORD *)a4 + 5) = 0LL;
      v6 = 1;
      *((_DWORD *)a4 + 25) |= 1u;
      a4[48] = v11;
    }
  }
  HampSlsReleaseLockExclusive((struct _HAM_SLEEP_STUDY_CONTEXT *)a4, v8);
  if ( v6 )
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)(*(_QWORD *)a4 + 336LL), 0);
  v13 = v24[1];
  v14 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)&v24[0] + 1);
  v15 = *(void **)&v24[0];
  if ( (v24[1] & 1) != 0 && *((_QWORD *)&v24[0] + 1) )
    v14 = (struct _RTL_BALANCED_NODE *)(((unsigned __int64)v24 + 8) ^ *((_QWORD *)&v24[0] + 1));
  v16 = v24[1] & 1;
  if ( v14 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14->Children[0] )
        {
          v17 = v14;
          if ( v16 )
            v14 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v14->Children[0] ^ (unsigned __int64)v14);
          else
            v14 = v14->Children[0];
          v17->Children[0] = 0LL;
        }
        v18 = (unsigned __int64)v14->Children[1];
        if ( !v18 )
          break;
        v19 = v14;
        if ( v16 )
          v14 = (struct _RTL_BALANCED_NODE *)(v18 ^ (unsigned __int64)v14);
        else
          v14 = v14->Children[1];
        v19->Children[1] = 0LL;
      }
      v20 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v16 && v20 )
        v20 ^= (unsigned __int64)v14;
      HampSlsBlockerTreeDeleteCallback(v14, v15);
      if ( !v20 )
        break;
      v14 = (struct _RTL_BALANCED_NODE *)v20;
    }
    v13 = v24[1];
  }
  v21 = HampLockTrackerId;
  *(_OWORD *)((char *)v24 + 8) = 0LL;
  v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( (v13 & 1) != 0 )
    v22 = 1;
  LOBYTE(v24[1]) = v22;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v21, 0LL);
  }
  return 0LL;
}
