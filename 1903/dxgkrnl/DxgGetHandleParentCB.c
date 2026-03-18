/*
 * XREFs of DxgGetHandleParentCB @ 0x1C0230E70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG_PTR Count; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v20; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[24]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, (struct _KTHREAD **)Current);
  v5 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)Current + 56) )
    goto LABEL_7;
  v6 = *((_QWORD *)Current + 26);
  v7 = v5;
  v8 = *(_DWORD *)(v6 + 16LL * v5 + 8);
  if ( (((unsigned int)v1 >> 25) & 0x60) != (v8 & 0x60) || (v8 & 0x2000) != 0 || (v8 & 0x1F) == 0 )
    goto LABEL_7;
  v9 = 2 * v7;
  v10 = v8 & 0x1F;
  if ( (_BYTE)v10 != 5 )
  {
    v11 = WdLogNewEntry5_WdError(((unsigned int)v1 >> 25) & 0x60, v10, v9);
    *(_QWORD *)(v11 + 24) = 267LL;
    WdLogEvent5_WdError(v11);
LABEL_7:
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = *(struct _EX_RUNDOWN_REF **)(v6 + 8 * v9);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v12);
  if ( v20 )
  {
    Count = v20[5].Count;
    if ( Count )
    {
      v17 = *(_DWORD *)(Count + 16);
      goto LABEL_14;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = v1;
    WdLogEvent5_WdWarning(v18);
  }
  v17 = 0;
LABEL_14:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20, v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  return v17;
}
