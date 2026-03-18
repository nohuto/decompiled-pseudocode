/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001397C
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0121440 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r14
  struct _KTHREAD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbp
  char v12; // bl
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r14
  SIZE_T v20; // rax
  char *v21; // rax
  void *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v26[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, this + 32);
  v9 = *((_DWORD *)this + v4 + 272);
  v10 = (unsigned int)v4;
  v11 = *((unsigned int *)this + v4 + 208);
  v12 = 0;
  if ( (_DWORD)v11 == (unsigned __int8)v9 )
  {
    v17 = (unsigned int)(2 * v11);
    v18 = 255;
    v19 = v11;
    LODWORD(v11) = 4;
    if ( (unsigned int)v17 < 0xFF )
      v18 = v17;
    if ( v18 >= 4 )
    {
      LODWORD(v11) = 255;
      if ( (unsigned int)v17 < 0xFF )
        LODWORD(v11) = v17;
    }
    if ( (_DWORD)v11 == (_DWORD)v19 )
    {
      v23 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v23 + 24) = 786LL;
      WdLogEvent5_WdError(v23);
      goto LABEL_8;
    }
    v20 = 8LL * (unsigned int)v11;
    if ( !is_mul_ok((unsigned int)v11, 8uLL) )
      v20 = -1LL;
    v21 = (char *)operator new(v20, 0x4B677844u, PagedPool);
    v22 = v21;
    if ( !v21 )
    {
      v24 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v24 + 24) = (unsigned int)v11;
      WdLogEvent5_WdLowResource(v24);
      goto LABEL_8;
    }
    memset(&v21[8 * v19], 0, 8LL * (unsigned int)(v11 - v19));
    if ( (_DWORD)v19 )
    {
      memmove(v22, this[v10 + 88], 8 * v19);
      v8 = this[v10 + 88];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    v6 = a4;
    this[v10 + 88] = (struct _KTHREAD *)v22;
    *((_DWORD *)this + v10 + 208) = v11;
  }
  v13 = 0;
  if ( (_DWORD)v11 )
  {
    v8 = this[v10 + 88];
    while ( 1 )
    {
      v14 = v13;
      if ( !*((_QWORD *)v8 + v13) )
        break;
      if ( ++v13 >= *((_DWORD *)this + v10 + 208) )
        goto LABEL_25;
    }
    v15 = WdLogNewEntry5_WdTrace();
    v12 = 1;
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = v10;
    *((_QWORD *)this[v10 + 88] + v14) = a3;
    ++*((_BYTE *)this + 4 * v10 + 1088);
    *v6 = (*((_DWORD *)this + v10 + 272) >> 8) & 1;
  }
  else
  {
LABEL_25:
    v25 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v25 + 24) = 843LL;
    WdLogEvent5_WdAssertion(v25);
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v12;
}
