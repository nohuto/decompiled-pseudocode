/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022EF5C
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C020B410 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0102D10 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011A5A0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C022B698 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0247CD0 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C02492C8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024A9F0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  DXGCONTEXT *v5; // r15
  DXGDEVICE *v7; // rsi
  __int64 v8; // rbx
  DXGCONTEXT *v9; // r9
  unsigned int v10; // ebx
  int v11; // r10d
  unsigned int v12; // r12d
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  DXGCONTEXT *v15; // rbx
  unsigned int v16; // esi
  _DWORD *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int *v24; // rdi
  DXGCONTEXT *v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  DXGCONTEXT *v31; // rdi
  int v32; // eax
  _DWORD *v33; // rsi
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // [rsp+60h] [rbp-71h] BYREF
  struct DXGPROCESS *v41; // [rsp+68h] [rbp-69h]
  DXGDEVICE *v42; // [rsp+70h] [rbp-61h]
  unsigned __int64 v43; // [rsp+78h] [rbp-59h] BYREF
  unsigned int *v44; // [rsp+80h] [rbp-51h]
  PVOID P; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v46[64]; // [rsp+98h] [rbp-39h] BYREF
  int v47; // [rsp+D8h] [rbp+7h]

  v5 = (DXGDEVICE *)((char *)this + 360);
  v41 = a2;
  v7 = this;
  v42 = this;
  v43 = a4;
  LODWORD(v8) = -1073741823;
  if ( !a5 )
  {
    v31 = *(DXGCONTEXT **)v5;
    while ( v31 != v5 && v31 )
    {
      v32 = *((_DWORD *)v31 + 103);
      v40 = a3;
      if ( (v32 & 0x10) != 0 )
      {
        v33 = (_DWORD *)*((_QWORD *)v31 + 52);
        while ( v33 != (_DWORD *)((char *)v31 + 416) && v33 )
        {
          v34 = SubmitWaitForSyncObjectsFromGpu(1u, &v40, &v43, v33[6], a2, 0, 1);
          v8 = v34;
          if ( v34 < 0 )
          {
            v36 = WdLogNewEntry5_WdEvent(v35);
            v7 = v42;
            *(_QWORD *)(v36 + 24) = v42;
            *(_QWORD *)(v36 + 32) = v8;
            WdLogEvent5_WdEvent(v36);
            goto LABEL_53;
          }
          v33 = *(_DWORD **)v33;
          a2 = v41;
        }
        v7 = v42;
      }
      else
      {
        v37 = WaitForSynchronizationObjectFromGpu(1u, &v40, 0LL, a4, *((_DWORD *)v31 + 6), a2, 0, 1, 0, 0);
        v8 = v37;
        if ( v37 < 0 )
        {
          v39 = WdLogNewEntry5_WdEvent(v38);
          *(_QWORD *)(v39 + 24) = v7;
          *(_QWORD *)(v39 + 32) = v8;
          WdLogEvent5_WdEvent(v39);
          return (unsigned int)v8;
        }
LABEL_53:
        a2 = v41;
      }
      v31 = *(DXGCONTEXT **)v31;
      a4 = v43;
    }
    return (unsigned int)v8;
  }
  v9 = *(DXGCONTEXT **)v5;
  v10 = 0;
  v40 = a3;
  v11 = 0;
  v12 = 0;
  while ( v9 != v5 && v9 )
  {
    if ( (*((_DWORD *)v9 + 103) & 0x10) != 0 )
      v12 += DXGCONTEXT::GetRenderHwQueueCount(v9);
    else
      ++v10;
    v9 = *(DXGCONTEXT **)v9;
  }
  P = 0LL;
  v47 = 0;
  if ( v11 )
  {
    v44 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
    if ( v44 )
    {
      v15 = *(DXGCONTEXT **)v5;
      v16 = 0;
      while ( v15 != v5 && v15 )
      {
        if ( (*((_DWORD *)v15 + 103) & 0x10) != 0 )
        {
          v13 = v44;
          for ( i = (_DWORD *)*((_QWORD *)v15 + 52); i != (_DWORD *)((char *)v15 + 416) && i; i = *(_DWORD **)i )
          {
            if ( v16 >= v12 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v14, v13);
              *(_QWORD *)(v18 + 24) = 5805LL;
              WdLogEvent5_WdAssertion(v18);
              v13 = v44;
            }
            v14 = v16++;
            v13[v14] = i[6];
          }
        }
        v15 = *(DXGCONTEXT **)v15;
      }
      if ( v12 != v16 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v19 + 24) = 5815LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = SubmitSignalSyncObjectsToHwQueue(1u, &v40, 0, v12, v44, &v43, v41, 0, 1);
      v8 = v20;
      if ( v20 >= 0 )
        goto LABEL_40;
      v22 = WdLogNewEntry5_WdEvent(v21);
      *(_QWORD *)(v22 + 24) = v42;
LABEL_39:
      *(_QWORD *)(v22 + 32) = v8;
      WdLogEvent5_WdEvent(v22);
LABEL_40:
      if ( P != v46 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v8;
    }
  }
  else
  {
    v24 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v10);
    if ( v24 )
    {
      v26 = *(DXGCONTEXT **)v5;
      v27 = 0;
      while ( v26 != v5 && v26 )
      {
        v23 = v27++;
        v24[v23] = *((_DWORD *)v26 + 6);
        v26 = *(DXGCONTEXT **)v26;
      }
      if ( v10 != v27 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23, v26);
        *(_QWORD *)(v28 + 24) = 5855LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = SignalSynchronizationObjectInternal(1LL, &v40, 0LL, v10, v24, 0LL, v43, 0LL, v41, 0, 1);
      v8 = v29;
      if ( v29 >= 0 )
        goto LABEL_40;
      v22 = WdLogNewEntry5_WdEvent(v30);
      *(_QWORD *)(v22 + 24) = v7;
      goto LABEL_39;
    }
  }
  if ( P != v46 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
