/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001F7C
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0065668 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C000219C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0014714 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0017F54 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0027A48 (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0091DF4 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  unsigned int *v4; // rbx
  __int64 v5; // r14
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  void *v9; // rsi
  unsigned int v10; // edx
  int v11; // eax
  __int64 v13; // rdi
  unsigned int *v14; // rax
  __int64 v15; // r8
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rsi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // eax
  void *v25; // r15
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v31[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[30]; // [rsp+98h] [rbp-70h] BYREF

  v4 = 0LL;
  v5 = -1LL;
  memset(v32, 0, sizeof(v32));
  v6 = 0;
  if ( !*(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 303928) || !*(_BYTE *)(*((_QWORD *)a1 + 4) + 415LL) )
  {
LABEL_2:
    HIDWORD(v32[0]) = -1;
    LODWORD(v32[1]) = -1;
    v7 = ZwManagePartition(v5, 0LL, 0LL, v32, 240);
    v8 = v7;
    if ( v7 < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v20 + 24) = v8;
      WdLogEvent5_WdAssertion(v20);
      goto LABEL_14;
    }
    v9 = (void *)LODWORD(v32[29]);
    DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
      (DXGAUTOEXPUSHLOCKEXCLUSIVE *)&v26,
      (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
    v4 = (unsigned int *)VIDMM_PARTITION::_PartitionTree;
    while ( v4 )
    {
      v11 = CompareVidMmPartitionById(v9, (struct _RTL_BALANCED_NODE *)v4);
      if ( v11 < 0 )
      {
        v4 = *(unsigned int **)v4;
      }
      else
      {
        if ( v11 <= 0 )
          break;
        v4 = (unsigned int *)*((_QWORD *)v4 + 1);
      }
    }
    if ( !v4 )
    {
      v13 = (v32[6] - v32[28]) << 12;
      v14 = (unsigned int *)operator new[](0x50uLL, 0x62356956u, PagedPool);
      v4 = v14;
      if ( v14 )
      {
        *((_QWORD *)v14 + 3) = -1LL;
        v14[8] = (unsigned int)v9;
        v14[9] = 0;
        *((_QWORD *)v14 + 5) = 0LL;
        *((_QWORD *)v14 + 6) = v13;
        *((_QWORD *)v14 + 7) = 0LL;
        *((_QWORD *)v14 + 8) = 0LL;
        v14[18] = 0;
      }
      else
      {
        v4 = 0LL;
      }
      if ( !v4 )
      {
        _InterlockedIncrement(&dword_1C004E70C);
        v21 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v21 + 24) = 209LL;
        WdLogEvent5_WdLowResource(v21);
        LODWORD(v8) = -1073741801;
        if ( (_DWORD)v28 == 1 )
        {
          ExReleasePushLockSharedEx(v27, 0LL);
        }
        else if ( (_DWORD)v28 == 2 )
        {
          ExReleasePushLockExclusiveEx(v27, 0LL);
        }
        goto LABEL_44;
      }
      LODWORD(v8) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v4);
      if ( (int)v8 < 0
        || (LODWORD(v8) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v4), (int)v8 < 0) )
      {
        v22 = WdLogNewEntry5_WdWarning();
        WdLogEvent5_WdWarning(v22);
LABEL_11:
        if ( (_DWORD)v28 == 1 )
        {
          ExReleasePushLockSharedEx(v27, 0LL);
        }
        else if ( (_DWORD)v28 == 2 )
        {
          ExReleasePushLockExclusiveEx(v27, 0LL);
        }
        goto LABEL_14;
      }
      LOBYTE(v15) = 0;
      v23 = v4[18] & 0xFFFFFFFE;
      *((_QWORD *)v4 + 3) = v5;
      v24 = v6 | v23;
      v25 = (void *)v4[8];
      v4[18] = v24;
      v17 = (struct _RTL_BALANCED_NODE *)VIDMM_PARTITION::_PartitionTree;
      if ( VIDMM_PARTITION::_PartitionTree )
      {
        while ( 1 )
        {
          if ( (int)CompareVidMmPartitionById(v25, v17) < 0 )
          {
            v16 = v17->Children[0];
            if ( !v17->Children[0] )
            {
              LOBYTE(v15) = 0;
              break;
            }
          }
          else
          {
            v16 = v17->Children[1];
            if ( !v16 )
            {
              LOBYTE(v15) = 1;
              break;
            }
          }
          v17 = v16;
        }
      }
      RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v17, v15, v4);
    }
    _InterlockedIncrement((volatile signed __int32 *)v4 + 9);
    goto LABEL_11;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v31, 0, sizeof(v31));
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
  LODWORD(v31[0]) = 48;
  *(_QWORD *)&v31[1] = &DestinationString;
  *((_QWORD *)&v31[0] + 1) = 0LL;
  DWORD2(v31[1]) = 64;
  v31[2] = 0LL;
  v18 = ZwOpenPartition(&v29, 2031619LL, v31);
  v8 = v18;
  if ( v18 >= 0 )
  {
    v5 = v29;
    v6 = 1;
    goto LABEL_2;
  }
  v19 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v19 + 24) = v8;
  WdLogEvent5_WdError(v19);
LABEL_14:
  if ( (int)v8 >= 0 )
    goto LABEL_15;
  if ( v4 )
  {
    VIDMM_PARTITION::`scalar deleting destructor'(v4, v10);
    v4 = 0LL;
  }
LABEL_44:
  if ( v5 != -1 )
    ObCloseHandle((HANDLE)v5, 0);
LABEL_15:
  *a2 = (struct VIDMM_PARTITION *)v4;
  return (unsigned int)v8;
}
