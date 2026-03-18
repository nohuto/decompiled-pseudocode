/*
 * XREFs of ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001290C
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0012870 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0012A60 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0012C60 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C0013260 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C012F1F0 (DxgkGetDeviceStateInternal.c)
 */

char __fastcall CAdapterCollection::UpdateCollection(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  char v7; // bl
  unsigned int v8; // r13d
  _QWORD **v9; // r12
  _QWORD *v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // r15d
  _DWORD v15[30]; // [rsp+20h] [rbp-78h] BYREF

  v7 = 1;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)this + 48) = 1;
  if ( *((_DWORD *)this + 1) != a4 )
  {
LABEL_13:
    CAdapterCollection::InternalDiscard(this);
    v7 = 0;
    goto LABEL_11;
  }
  v8 = 0;
  if ( a4 )
  {
    v9 = (_QWORD **)((char *)this + 24);
    do
    {
      v10 = *v9;
      v11 = 0LL;
      if ( *v9 == v9 )
        goto LABEL_13;
      while ( 1 )
      {
        v12 = (unsigned __int64)(v10 - 1) & -(__int64)(v10 != 0LL);
        if ( *(_QWORD *)a2 == __PAIR64__(*(_DWORD *)(v12 + 0x1C), *(_DWORD *)(v12 + 0x18)) )
          break;
        v10 = (_QWORD *)*v10;
        v11 = (unsigned int)(v11 + 1);
        if ( v10 == v9 )
          goto LABEL_13;
      }
      v13 = *(_DWORD *)(((unsigned __int64)(v10 - 1) & -(__int64)(v10 != 0LL)) + 0x24);
      if ( v13 )
      {
        memset(v15, 0, 0x38uLL);
        v15[0] = v13;
        v15[1] = 1;
        v15[2] = 1;
        if ( (int)DxgkGetDeviceStateInternal(v15, 0LL) < 0 || v15[2] != 1 )
          goto LABEL_13;
      }
      if ( CAdapter::UpdateRenderFence((CAdapter *)v12, *((void **)a2 + 1)) < 0 )
        goto LABEL_13;
      ++v8;
      a2 = (struct CSM_TOKEN_ADAPTER_INFO *)((char *)a2 + 24);
      a3[v11] = *(void **)(v12 + 40);
    }
    while ( v8 < a4 );
  }
LABEL_11:
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return v7;
}
