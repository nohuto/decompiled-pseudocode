/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C020B610
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct _KTHREAD **a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  struct _KTHREAD *v5; // r9
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 >= *((_DWORD *)a1 + 56) )
    goto LABEL_7;
  v5 = a1[26];
  v6 = *((_DWORD *)v5 + 4 * v4 + 2);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*((_BYTE *)v5 + 16 * v4 + 8) & 0x60)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v7 = v6 & 0x1F;
  if ( (_BYTE)v7 != 5 )
  {
    v8 = WdLogNewEntry5_WdError(((unsigned int)v2 >> 25) & 0x60, v7, 2LL * (unsigned int)v4);
    *(_QWORD *)(v8 + 24) = 267LL;
    WdLogEvent5_WdError(v8);
LABEL_7:
    v9 = 0LL;
    goto LABEL_8;
  }
  v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v5 + 2 * (unsigned int)v4);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18, v9);
  if ( v18 )
  {
    Count = v18[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v14 = 0;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    v14 = -1073741811;
    *(_QWORD *)(v13 + 24) = v2;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18, v10);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v14;
}
