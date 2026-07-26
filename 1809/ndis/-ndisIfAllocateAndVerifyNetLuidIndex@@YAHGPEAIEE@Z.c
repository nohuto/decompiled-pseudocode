/*
 * XREFs of ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfCreateFilterInterface @ 0x1C001C89C (ndisIfCreateFilterInterface.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00E2E60 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00E2E80 (NdisIfAllocateNetLuidIndexEx.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dL @ 0x1C0041D30 (WPP_SF_dL.c)
 *     WPP_SF_dllL @ 0x1C0041EC0 (WPP_SF_dllL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00E2944 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

__int64 __fastcall ndisIfAllocateAndVerifyNetLuidIndex(
        unsigned __int16 a1,
        unsigned int *a2,
        unsigned __int8 a3,
        char a4)
{
  int v4; // r13d
  unsigned int v5; // ebx
  _LIST_ENTRY *v6; // r14
  char *v7; // r15
  unsigned int Blink; // r12d
  unsigned int v9; // edi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v12; // r9
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  _LIST_ENTRY *v18; // rdx
  char *v19; // r11
  __int64 v20; // r10
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  char v24; // bp
  size_t v25; // rbx
  int v26; // r15d
  char *PoolWithTag; // rax
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // rcx
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *v33; // rax
  char v34; // [rsp+30h] [rbp-58h]
  _BYTE *v35; // [rsp+38h] [rbp-50h]
  unsigned int *v37; // [rsp+98h] [rbp+10h]

  v37 = a2;
  v4 = 0;
  v5 = 0;
  v35 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Blink = 0;
  v9 = 0;
  v34 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_dL(0x1Cu, (__int64)a2, a1, a3);
    a2 = v37;
  }
  if ( a3 )
  {
    *a2 = 0;
LABEL_5:
    KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
    Flink = ndisIfTypesList.Flink;
    if ( ndisIfTypesList.Flink != &ndisIfTypesList )
    {
      while ( LOWORD(Flink[1].Flink) != a1 )
      {
        Flink = Flink->Flink;
        if ( Flink == &ndisIfTypesList )
          goto LABEL_26;
      }
      v6 = Flink;
      v12 = Flink[3].Flink;
      Blink = (unsigned int)Flink[2].Blink;
      if ( !a3 )
      {
        if ( Blink >= (v5 >> 3) + 1 )
        {
          if ( ((unsigned __int8)(1 << (v5 & 7)) & *((_BYTE *)&v12->Flink + ((unsigned __int64)v5 >> 3))) != 0 )
            goto LABEL_10;
          if ( (unsigned __int8)byte_1C00A0265 >= 3u )
            WPP_SF_dL(0x1Eu, a1, a1, v5);
        }
        v9 = -1073741072;
LABEL_10:
        v13 = a1;
        if ( !v6 )
          v9 = -1073741072;
        goto LABEL_12;
      }
      v17 = 0LL;
      if ( !Blink )
        goto LABEL_33;
      v18 = Flink[3].Flink;
      while ( LOBYTE(v18->Flink) == 0xFF )
      {
        v4 += 8;
        v17 = (unsigned int)(v17 + 1);
        v18 = (_LIST_ENTRY *)((char *)v18 + 1);
        if ( (unsigned int)v17 >= Blink )
          goto LABEL_33;
      }
      v19 = (char *)v12 + v17;
      v20 = (unsigned int)v17;
      v21 = *((unsigned __int8 *)&v12->Flink + v17);
      v22 = 1;
      v23 = 0;
      while ( (v21 & v22) != 0 )
      {
        v22 *= 2;
        if ( (unsigned int)++v23 >= 8 )
          goto LABEL_33;
      }
      v34 = v23;
      v4 += v23;
      *v19 = v22 | v21;
      v7 = v19;
      if ( a4 )
      {
        *((_BYTE *)&Flink[3].Blink->Flink + v20) |= v22;
        v35 = (char *)Flink[3].Blink + v20;
      }
      if ( !v19 )
      {
LABEL_33:
        if ( 8 * Blink + 1 >= 0x1001 )
          v9 = -1073741670;
      }
    }
LABEL_26:
    if ( !a3 )
      goto LABEL_10;
    if ( !v9 )
    {
      if ( v7 )
      {
        v24 = v34;
        v13 = a1;
LABEL_30:
        if ( a4 && (v9 = ndisIfWriteRegistry((struct _NDIS_IF_TYPE *)v6)) != 0 )
        {
          if ( v7 )
            *v7 &= ~(1 << v24);
          if ( v35 )
            *v35 &= ~(1 << v24);
        }
        else
        {
          *v37 = v4;
        }
        goto LABEL_12;
      }
      v25 = v6 != 0LL ? Blink : 0;
      v4 = 8 * (v6 != 0LL ? Blink : 0);
      v26 = v25 + 1;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * (v25 + 1) + 64), 0x6669444Eu);
      v28 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        v13 = a1;
        *((_WORD *)v28 + 8) = a1;
        *((_QWORD *)v28 + 7) = &v28[v26 + 64];
        *((_DWORD *)v28 + 10) = v26;
        *((_QWORD *)v28 + 6) = v28 + 64;
        v28[(unsigned int)v25 + 64] = 1;
        v29 = *((_QWORD *)v28 + 7);
        if ( a4 )
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 1;
          v35 = (_BYTE *)((unsigned int)v25 + *((_QWORD *)v28 + 7));
        }
        else
        {
          *(_BYTE *)((unsigned int)v25 + v29) = 0;
        }
        v30 = (char *)*((_QWORD *)v28 + 6);
        v24 = 0;
        v7 = &v30[(unsigned int)v25];
        if ( v6 )
        {
          memmove(v30, v6[3].Flink, v25);
          memmove(*((void **)v28 + 7), v6[3].Blink, v25);
          v31 = v6->Flink;
          if ( v6->Flink->Blink != v6 )
            goto LABEL_47;
          v32 = v6->Blink;
          if ( v32->Flink != v6 )
            goto LABEL_47;
          v32->Flink = v31;
          v31->Blink = v32;
          ExFreePoolWithTag(v6, 0);
        }
        v33 = ndisIfTypesList.Flink;
        if ( ndisIfTypesList.Flink->Blink == &ndisIfTypesList )
        {
          *(_QWORD *)v28 = ndisIfTypesList.Flink;
          v6 = (_LIST_ENTRY *)v28;
          *((_QWORD *)v28 + 1) = &ndisIfTypesList;
          v33->Blink = (_LIST_ENTRY *)v28;
          ndisIfTypesList.Flink = (_LIST_ENTRY *)v28;
          goto LABEL_30;
        }
LABEL_47:
        __fastfail(3u);
      }
      v9 = -1073741670;
    }
    v13 = a1;
LABEL_12:
    KeReleaseMutex(&ndisUsedIndicesMutex, 0);
    if ( (unsigned __int8)byte_1C00A0265 >= 4u )
      WPP_SF_dllL(v15, v14, v13, v4);
    return v9;
  }
  v5 = *a2;
  if ( *a2 <= 0x1000 )
    goto LABEL_5;
  if ( (unsigned __int8)byte_1C00A0265 >= 3u )
    WPP_SF_D(0x1Du, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v5);
  return 3221226224LL;
}
