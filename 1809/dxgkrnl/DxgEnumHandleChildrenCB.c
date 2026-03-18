/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C02001D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C2C (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  ULONG_PTR Count; // rcx
  int v20; // eax
  struct _EX_RUNDOWN_REF *v22; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v24[56]; // [rsp+40h] [rbp-48h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, (struct _KTHREAD **)Current);
  v3 = 0;
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)Current + 62) )
    goto LABEL_7;
  v5 = *((_QWORD *)Current + 29);
  v6 = *(_DWORD *)(v5 + 16LL * (unsigned int)v4 + 8);
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v5 + 16LL * (unsigned int)v4 + 8) & 0x60)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v7 = 2 * v4;
  v8 = v6 & 0x1F;
  if ( (_BYTE)v8 != 4 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 316LL;
    WdLogEvent5_WdError(v9);
LABEL_7:
    v10 = 0LL;
    goto LABEL_8;
  }
  v10 = *(struct _EX_RUNDOWN_REF **)(v5 + 8 * v7);
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v22, v10);
  v14 = v22;
  if ( v22 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) + 192LL) + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)(v16 + 40) + 28LL) >= 0x2003u )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
        v17[3] = 275LL;
        v17[4] = 20LL;
        v17[5] = *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL);
        v17[6] = 0LL;
        v17[7] = 0LL;
        WdLogEvent5_WdCriticalError(v17);
        v14 = v22;
      }
    }
    v18 = a1[1];
    Count = v14[3].Count;
    v20 = 0;
    if ( v18 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v20 >= v18 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( Count )
        v3 = *(_DWORD *)(Count + 16);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = *a1;
    WdLogEvent5_WdWarning(v15);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v22);
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  return v3;
}
