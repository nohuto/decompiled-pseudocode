/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0154424
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C0154218 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebp
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // r14
  SIZE_T v14; // rax
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // r12
  unsigned int v21; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE v28[32]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28, this + 35);
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v23 + 24) = 8679LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v9 = *((_DWORD *)this + v3 + 320);
  v10 = v3;
  v11 = 0;
  v12 = v9;
  if ( v9 == *((_DWORD *)this + v10 + 336) )
  {
    v13 = v9;
    if ( v9 )
    {
      v9 *= 2;
      if ( v9 > 0x300 )
      {
        v24 = WdLogNewEntry5_WdError(v12, v6, v8);
        *(_QWORD *)(v24 + 24) = 8695LL;
        WdLogEvent5_WdError(v24);
        goto LABEL_21;
      }
    }
    else
    {
      v9 = 4;
    }
    v14 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v14 = -1LL;
    v15 = (char *)operator new[](v14, 0x4B677844u, PagedPool);
    v20 = v15;
    if ( !v15 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v25 + 24) = v9;
      WdLogEvent5_WdLowResource(v25);
      goto LABEL_21;
    }
    memset(&v15[8 * v13], 0, 8LL * (v9 - (unsigned int)v13));
    if ( (_DWORD)v13 )
    {
      memmove(v20, this[v10 + 144], 8 * v13);
      operator delete[](this[v10 + 144]);
    }
    this[v10 + 144] = (struct _KTHREAD *)v20;
    v12 = v9;
    *((_DWORD *)this + v10 + 320) = v9;
  }
  v21 = 0;
  if ( (_DWORD)v12 )
  {
    v6 = this[v10 + 144];
    do
    {
      if ( !*((_QWORD *)v6 + v21) )
        break;
      ++v21;
    }
    while ( v21 < v9 );
  }
  if ( v21 != (_DWORD)v12 )
  {
    if ( *((_QWORD *)this[v10 + 144] + v21) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v12, v6);
      *(_QWORD *)(v26 + 24) = 8740LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *((_DWORD *)this + v10 + 320) < *((_DWORD *)this + v10 + 336) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v12, v6);
      *(_QWORD *)(v27 + 24) = 8741LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v11 = 1;
    *((_QWORD *)this[v10 + 144] + v21) = a3;
    ++*((_DWORD *)this + v10 + 336);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v21)) & 0x7FE;
  }
LABEL_21:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v11;
}
