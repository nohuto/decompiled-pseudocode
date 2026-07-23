/*
 * XREFs of WmipAddDataSource @ 0x140708870
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140708EEC (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x1409D5420 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipCountedToSz @ 0x140613C58 (WmipCountedToSz.c)
 *     WmipBuildInstanceSet @ 0x140708B88 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x1407090E8 (WmipGenerateRegistrationNotification.c)
 *     WmipLinkDataSourceToList @ 0x1407094C4 (WmipLinkDataSourceToList.c)
 *     WmipAllocDataSource @ 0x1407095FC (WmipAllocDataSource.c)
 *     WmipAllocEntry @ 0x14070964C (WmipAllocEntry.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 *     WmipGenerateMofResourceNotification @ 0x1407595E0 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  __int64 v5; // rbx
  unsigned __int16 *v7; // rbp
  int v8; // edi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r15d
  int v14; // eax
  int v15; // eax
  _QWORD **v16; // r14
  char v17; // r15
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rdx
  _WORD *v21; // rsi
  _WORD *v22; // rdi
  _QWORD *v24; // rsi
  _QWORD **v25; // r14
  _QWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // r15
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD v39[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v40[9]; // [rsp+40h] [rbp-48h] BYREF
  char v41; // [rsp+90h] [rbp+8h] BYREF
  int v42; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v7 = a4;
  v41 = 0;
  v8 = a3;
  v10 = 0LL;
  if ( !v5 )
  {
    v11 = WmipAllocDataSource();
    v5 = v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(v11 + 56) = *(_DWORD *)(a1 + 56);
    v41 = 1;
  }
  v12 = a2 + 24;
  v13 = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_9:
    v15 = *(_DWORD *)(a1 + 48) & 0x40000000;
    if ( v15 )
    {
      v39[1] = v39;
      v39[0] = v39;
      v40[1] = v40;
      v40[0] = v40;
    }
    v16 = (_QWORD **)((unsigned __int64)v39 & -(__int64)(v15 != 0));
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v17 = v41;
    LOBYTE(v18) = v41;
    v19 = WmipLinkDataSourceToList(v5, v18, v16);
    KeReleaseMutex(&WmipSMMutex, 0);
    v20 = 0LL;
    if ( v16 )
    {
      while ( 1 )
      {
        v24 = *v16;
        if ( *v16 == v16 )
          break;
        if ( (_QWORD **)v24[1] != v16 )
          goto LABEL_60;
        v34 = (_QWORD *)*v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 )
          goto LABEL_60;
        *v16 = v34;
        v34[1] = v16;
        WmipLegacyEtwWorker(v24[2], v20);
        v35 = v24 + 5;
        while ( 1 )
        {
          v36 = (_QWORD *)*v35;
          if ( (_QWORD *)*v35 == v35 )
            break;
          if ( (_QWORD *)v36[1] != v35 )
            goto LABEL_60;
          v37 = *v36;
          if ( *(_QWORD **)(*v36 + 8LL) != v36 )
            goto LABEL_60;
          *v35 = v37;
          *(_QWORD *)(v37 + 8) = v35;
          KeSetEvent((PRKEVENT)(v36 + 2), 0, 0);
        }
        ExFreePoolWithTag(v24, 0x70696D57u);
      }
      v25 = v16 + 2;
      while ( 1 )
      {
        v26 = *v25;
        if ( *v25 == v25 )
          break;
        if ( (_QWORD **)v26[1] != v25 )
          goto LABEL_60;
        v38 = (_QWORD *)*v26;
        if ( *(_QWORD **)(*v26 + 8LL) != v26 )
          goto LABEL_60;
        *v25 = v38;
        v38[1] = v25;
        KeWaitForSingleObject(v26 + 4, Executive, 0, 0, 0LL);
        ExFreePoolWithTag(v26, 0x70696D57u);
      }
      v17 = v41;
    }
    if ( v19 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v5;
      if ( v10 )
        WmipGenerateBinaryMofNotification(v10, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      if ( v7 )
        v21 = WmipCountedToSz(v7);
      else
        v21 = 0LL;
      if ( a5 )
        v22 = WmipCountedToSz(a5);
      else
        v22 = 0LL;
      if ( v21 )
      {
        if ( *v21 && v22 && *v22 && (int)WmipAddMofResource(v5, v21, 0LL, v22, &v41) >= 0 && v41 )
          WmipGenerateMofResourceNotification(v21, v22);
        ExFreePoolWithTag(v21, 0);
      }
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      WmipGenerateRegistrationNotification(v5, 1LL);
      v5 = 0LL;
      v19 = 0;
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(v12 + 16);
    if ( (v14 & 0x10000) != 0 || (v14 & 0x81000) == 0x80000 )
      goto LABEL_7;
    v27 = WmipAllocEntry(&WmipISChunkInfo);
    v28 = v27;
    if ( !v27 )
      break;
    *(_DWORD *)(v27 + 16) |= 8u;
    *(_QWORD *)(v27 + 56) = v12;
    *(_QWORD *)(v27 + 64) = v5;
    v19 = WmipBuildInstanceSet(v12, a2, v8, v27, *(_DWORD *)(v5 + 56));
    v29 = *(_QWORD *)v12 - WmipBinaryMofGuid;
    if ( *(_QWORD *)v12 == WmipBinaryMofGuid )
      v29 = *(_QWORD *)(v12 + 8) - 0x102906C9A000F0B2LL;
    v30 = v29 == 0;
    v31 = (_QWORD *)(v5 + 40);
    v32 = *(_QWORD *)(v5 + 40);
    if ( v30 )
      v10 = v28;
    v33 = (_QWORD *)(v28 + 40);
    if ( *(_QWORD **)(v32 + 8) != v31 )
LABEL_60:
      __fastfail(3u);
    *v33 = v32;
    v33[1] = v31;
    *(_QWORD *)(v32 + 8) = v33;
    *v31 = v33;
    if ( v19 < 0 )
      goto LABEL_46;
    v8 = v42;
LABEL_7:
    ++v13;
    v12 += 32LL;
    if ( v13 >= *(_DWORD *)(a2 + 16) )
    {
      v7 = v43;
      goto LABEL_9;
    }
  }
  v19 = -1073741670;
LABEL_46:
  v17 = v41;
LABEL_27:
  if ( v5 && v17 )
  {
    *(_DWORD *)(v5 + 16) |= 1u;
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
  }
  return (unsigned int)v19;
}
