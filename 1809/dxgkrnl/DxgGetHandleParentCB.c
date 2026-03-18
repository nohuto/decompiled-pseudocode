/*
 * XREFs of DxgGetHandleParentCB @ 0x1C0200610
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG_PTR Count; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v17; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v19);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, (struct _KTHREAD **)Current);
  v3 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v3 >= *((_DWORD *)Current + 62) )
    goto LABEL_7;
  v4 = *((_QWORD *)Current + 29);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 16LL * v3 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v6 & 0x60) || (v6 & 0x2000) != 0 || (v6 & 0x1F) == 0 )
    goto LABEL_7;
  v7 = 2 * v5;
  if ( (v6 & 0x1F) != 5 )
  {
    v8 = WdLogNewEntry5_WdError(((unsigned int)v1 >> 25) & 0x60);
    *(_QWORD *)(v8 + 24) = 316LL;
    WdLogEvent5_WdError(v8);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = *(struct _EX_RUNDOWN_REF **)(v4 + 8 * v7);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v9);
  if ( v17 )
  {
    Count = v17[5].Count;
    if ( Count )
    {
      v14 = *(_DWORD *)(Count + 16);
      goto LABEL_14;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v15 + 24) = v1;
    WdLogEvent5_WdWarning(v15);
  }
  v14 = 0;
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  return v14;
}
