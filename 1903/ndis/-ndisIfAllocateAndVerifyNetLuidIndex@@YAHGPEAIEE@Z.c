/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C80 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfCreateFilterInterface @ 0x1C002A5BC (ndisIfCreateFilterInterface.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C01148F0 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C0114910 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     WPP_RECORDER_SF_dllL @ 0x1C002BFB0 (WPP_RECORDER_SF_dllL.c)
 *     WPP_RECORDER_SF_dL @ 0x1C002C068 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C01142B8 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(unsigned __int16 a1, unsigned int *a2, char a3, char a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  _LIST_ENTRY *v6; // r14
  char *v7; // r15
  unsigned int Blink; // r12d
  unsigned int v9; // edi
  _LIST_ENTRY *Flink; // rcx
  int v12; // edx
  _LIST_ENTRY *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  _LIST_ENTRY *v19; // rdx
  char *v20; // r11
  __int64 v21; // r10
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  char v25; // bp
  size_t v26; // rbx
  int v27; // r15d
  char *PoolWithTag; // rax
  char *v29; // rsi
  __int64 v30; // rax
  char *v31; // rcx
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *v34; // rax
  int v35; // [rsp+20h] [rbp-88h]
  char v36[4]; // [rsp+28h] [rbp-80h]
  char v37; // [rsp+50h] [rbp-58h]
  _BYTE *v38; // [rsp+58h] [rbp-50h]
  unsigned int *v40; // [rsp+B8h] [rbp+10h]

  v40 = a2;
  v4 = 0;
  v5 = 0;
  v38 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Blink = 0;
  v9 = 0;
  v37 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, 0, 28);
    a2 = v40;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    Flink = ndisIfTypesList.Flink;
    if ( ndisIfTypesList.Flink != &ndisIfTypesList )
    {
      v12 = a1;
      while ( LOWORD(Flink[1].Flink) != a1 )
      {
        Flink = Flink->Flink;
        if ( Flink == &ndisIfTypesList )
          goto LABEL_27;
      }
      v6 = Flink;
      v13 = Flink[3].Flink;
      Blink = (unsigned int)Flink[2].Blink;
      if ( !a3 )
      {
        if ( Blink < (v5 >> 3) + 1 )
        {
          v9 = -1073741072;
        }
        else if ( ((unsigned __int8)(1 << (v5 & 7)) & *((_BYTE *)&v13->Flink + ((unsigned __int64)v5 >> 3))) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 3;
            WPP_RECORDER_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, (unsigned int)&ndisIfTypesList, 30);
          }
          v9 = -1073741072;
        }
        goto LABEL_11;
      }
      v18 = 0LL;
      if ( !Blink )
        goto LABEL_35;
      v19 = Flink[3].Flink;
      while ( LOBYTE(v19->Flink) == 0xFF )
      {
        v4 += 8;
        v18 = (unsigned int)(v18 + 1);
        v19 = (_LIST_ENTRY *)((char *)v19 + 1);
        if ( (unsigned int)v18 >= Blink )
          goto LABEL_35;
      }
      v20 = (char *)v13 + v18;
      v21 = (unsigned int)v18;
      v22 = *((unsigned __int8 *)&v13->Flink + v18);
      v23 = 1;
      v24 = 0;
      while ( (v22 & v23) != 0 )
      {
        v23 *= 2;
        if ( (unsigned int)++v24 >= 8 )
          goto LABEL_35;
      }
      v37 = v24;
      v4 += v24;
      *v20 = v23 | v22;
      v7 = v20;
      if ( a4 )
      {
        *((_BYTE *)&Flink[3].Blink->Flink + v21) |= v23;
        v38 = (char *)Flink[3].Blink + v21;
      }
      if ( !v20 )
      {
LABEL_35:
        if ( 8 * Blink + 1 >= 0x1001 )
          v9 = -1073741670;
      }
    }
LABEL_27:
    if ( !a3 )
    {
LABEL_11:
      if ( !v6 )
        v9 = -1073741072;
      goto LABEL_13;
    }
    if ( !v9 )
    {
      if ( v7 )
      {
        v25 = v37;
LABEL_31:
        if ( a4 && (v9 = ndisIfWriteRegistry((struct _NDIS_IF_TYPE *)v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v25);
          if ( v38 )
            *v38 &= ~(1 << v25);
        }
        else
        {
          *v40 = v4;
        }
        goto LABEL_13;
      }
      v26 = v6 != 0LL ? Blink : 0;
      v4 = 8 * (v6 != 0LL ? Blink : 0);
      v27 = v26 + 1;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * (v26 + 1) + 64), 0x6669444Eu);
      v29 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        *((_WORD *)v29 + 8) = a1;
        *((_QWORD *)v29 + 7) = &v29[v27 + 64];
        *((_DWORD *)v29 + 10) = v27;
        *((_QWORD *)v29 + 6) = v29 + 64;
        v29[(unsigned int)v26 + 64] = 1;
        v30 = *((_QWORD *)v29 + 7);
        if ( a4 )
        {
          *(_BYTE *)((unsigned int)v26 + v30) = 1;
          v38 = (_BYTE *)((unsigned int)v26 + *((_QWORD *)v29 + 7));
        }
        else
        {
          *(_BYTE *)((unsigned int)v26 + v30) = 0;
        }
        v31 = (char *)*((_QWORD *)v29 + 6);
        v25 = 0;
        v7 = &v31[(unsigned int)v26];
        if ( v6 )
        {
          memmove(v31, v6[3].Flink, v26);
          memmove(*((void **)v29 + 7), v6[3].Blink, v26);
          v32 = v6->Flink;
          if ( v6->Flink->Blink != v6 )
            goto LABEL_49;
          v33 = v6->Blink;
          if ( v33->Flink != v6 )
            goto LABEL_49;
          v33->Flink = v32;
          v32->Blink = v33;
          ExFreePoolWithTag(v6, 0);
        }
        v34 = ndisIfTypesList.Flink;
        if ( ndisIfTypesList.Flink->Blink == &ndisIfTypesList )
        {
          *(_QWORD *)v29 = ndisIfTypesList.Flink;
          v6 = (_LIST_ENTRY *)v29;
          *((_QWORD *)v29 + 1) = &ndisIfTypesList;
          v34->Blink = (_LIST_ENTRY *)v29;
          ndisIfTypesList.Flink = (_LIST_ENTRY *)v29;
          goto LABEL_31;
        }
LABEL_49:
        __fastfail(3u);
      }
      v9 = -1073741670;
    }
LABEL_13:
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dllL(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16, v35);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v36 = *a2;
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      29,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v36[0]);
  }
  return 3221226224LL;
}
