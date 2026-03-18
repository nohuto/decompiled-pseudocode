/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C011F3FC
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1C011F210 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C011F570 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v6; // rdi
  unsigned __int8 v7; // r15
  struct DXGPROCESS *Current; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // rdx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _EX_RUNDOWN_REF *v25; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  v7 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v22 + 24) = 5268LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !(_DWORD)v6 )
  {
    v23 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v23 + 24) = this;
    v20 = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    return v20;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 56) )
  {
    v11 = *((_QWORD *)Current + 26);
    v12 = *(_DWORD *)(v11 + 16LL * v10 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
    {
      v13 = v12 & 0x1F;
      if ( (_BYTE)v13 == 4 )
      {
        v14 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v10);
        goto LABEL_13;
      }
      v15 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v13, 2LL * v10);
      *(_QWORD *)(v15 + 24) = 267LL;
      WdLogEvent5_WdError(v15);
    }
  }
  v14 = 0LL;
LABEL_13:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v25, v14);
  ExReleasePushLockSharedEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v24[3] = this;
    v24[4] = v6;
LABEL_23:
    v20 = -1073741811;
    v24[5] = -1073741811LL;
    goto LABEL_24;
  }
  if ( (PERESOURCE *)v25[1].Count != this )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v24[3] = this;
    v20 = -1073741811;
    v24[4] = v25;
    v24[5] = v25[1].Count;
    v24[6] = -1073741811LL;
LABEL_24:
    WdLogEvent5_WdWarning(v24);
    goto LABEL_17;
  }
  if ( (HIDWORD(v25->Ptr) & 1) == 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v24[3] = this;
    v24[4] = v25;
    goto LABEL_23;
  }
  v20 = DXGDEVICE::ConfigureSharedResourceHelper(
          (DXGDEVICE *)this,
          v7,
          a3,
          (struct DXGSHAREDRESOURCE *)v25[7].Count,
          a5,
          1);
LABEL_17:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v25, v19);
  return v20;
}
