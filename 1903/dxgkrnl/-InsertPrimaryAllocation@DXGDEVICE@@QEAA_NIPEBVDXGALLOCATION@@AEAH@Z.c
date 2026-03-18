/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001A95C
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0148510 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
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
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbp
  char v13; // bl
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r14
  SIZE_T v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, this + 32);
  v10 = *((_DWORD *)this + v4 + 272);
  v11 = (unsigned int)v4;
  v12 = *((unsigned int *)this + v4 + 208);
  v13 = 0;
  v14 = (unsigned __int8)v10;
  if ( (_DWORD)v12 == (unsigned __int8)v10 )
  {
    v19 = (unsigned int)(2 * v12);
    v20 = 255;
    v21 = v12;
    LODWORD(v12) = 4;
    if ( (unsigned int)v19 < 0xFF )
      v20 = v19;
    if ( v20 >= 4 )
    {
      LODWORD(v12) = 255;
      if ( (unsigned int)v19 < 0xFF )
        LODWORD(v12) = v19;
    }
    if ( (_DWORD)v12 == (_DWORD)v21 )
    {
      v29 = WdLogNewEntry5_WdError(v19, 255LL, v9);
      *(_QWORD *)(v29 + 24) = 787LL;
      WdLogEvent5_WdError(v29);
      goto LABEL_8;
    }
    v22 = 8LL * (unsigned int)v12;
    if ( !is_mul_ok((unsigned int)v12, 8uLL) )
      v22 = -1LL;
    v23 = (char *)operator new[](v22, 0x4B677844u, PagedPool);
    v28 = v23;
    if ( !v23 )
    {
      v30 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      *(_QWORD *)(v30 + 24) = (unsigned int)v12;
      WdLogEvent5_WdLowResource(v30);
      goto LABEL_8;
    }
    memset(&v23[8 * v21], 0, 8LL * (unsigned int)(v12 - v21));
    if ( (_DWORD)v21 )
    {
      memmove(v28, this[v11 + 88], 8 * v21);
      v8 = this[v11 + 88];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    v6 = a4;
    this[v11 + 88] = (struct _KTHREAD *)v28;
    *((_DWORD *)this + v11 + 208) = v12;
  }
  v15 = 0;
  if ( (_DWORD)v12 )
  {
    v8 = this[v11 + 88];
    while ( 1 )
    {
      v16 = v15;
      if ( !*((_QWORD *)v8 + v15) )
        break;
      if ( ++v15 >= *((_DWORD *)this + v11 + 208) )
        goto LABEL_25;
    }
    v17 = WdLogNewEntry5_WdTrace(v8, v14);
    v13 = 1;
    *(_QWORD *)(v17 + 24) = a3;
    *(_QWORD *)(v17 + 32) = v11;
    *((_QWORD *)this[v11 + 88] + v16) = a3;
    ++*((_BYTE *)this + 4 * v11 + 1088);
    *v6 = (*((_DWORD *)this + v11 + 272) >> 8) & 1;
  }
  else
  {
LABEL_25:
    v31 = WdLogNewEntry5_WdAssertion(v8, v14);
    *(_QWORD *)(v31 + 24) = 844LL;
    WdLogEvent5_WdAssertion(v31);
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  return v13;
}
