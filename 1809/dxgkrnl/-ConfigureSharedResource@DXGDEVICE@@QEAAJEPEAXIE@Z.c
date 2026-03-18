/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C00F9D9C
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1C00F9BD0 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00F9F00 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
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
  struct DXGRESOURCE *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  v7 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v19 + 24) = 5240LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !(_DWORD)v6 )
  {
    v20 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v20 + 24) = this;
    v17 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    return v17;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 62) )
  {
    v11 = *((_QWORD *)Current + 29);
    v12 = *(_DWORD *)(v11 + 16LL * v10 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (v12 & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
    {
      if ( (v12 & 0x1F) == 4 )
      {
        v13 = *(struct DXGRESOURCE **)(v11 + 16LL * v10);
        goto LABEL_11;
      }
      v21 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60);
      *(_QWORD *)(v21 + 24) = 316LL;
      WdLogEvent5_WdError(v21);
    }
  }
  v13 = 0LL;
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23, v13);
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v22[3] = this;
    v22[4] = v6;
LABEL_23:
    v17 = -1073741811;
    v22[5] = -1073741811LL;
    goto LABEL_24;
  }
  if ( *(PERESOURCE **)(v23 + 8) != this )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v22[3] = this;
    v17 = -1073741811;
    v22[4] = v23;
    v22[5] = *(_QWORD *)(v23 + 8);
    v22[6] = -1073741811LL;
LABEL_24:
    WdLogEvent5_WdWarning(v22);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(v23 + 4) & 1) == 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v22[3] = this;
    v22[4] = v23;
    goto LABEL_23;
  }
  v17 = DXGDEVICE::ConfigureSharedResourceHelper(
          (DXGDEVICE *)this,
          v7,
          a3,
          *(struct DXGSHAREDRESOURCE **)(v23 + 56),
          a5,
          1);
LABEL_15:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
  return v17;
}
