/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FD00
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013FB08 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  char v9; // di
  __int64 v10; // rcx
  __int64 v11; // r14
  SIZE_T v12; // rax
  char *v13; // rax
  __int64 v14; // rcx
  void *v15; // r12
  unsigned int v16; // r14d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[32]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, this + 35);
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 8597LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *((_DWORD *)this + v3 + 320);
  v8 = v3;
  v9 = 0;
  v10 = v7;
  if ( v7 == *((_DWORD *)this + v8 + 336) )
  {
    v11 = v7;
    if ( v7 )
    {
      v7 *= 2;
      if ( v7 > 0x300 )
      {
        v19 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v19 + 24) = 8613LL;
        WdLogEvent5_WdError(v19);
        goto LABEL_20;
      }
    }
    else
    {
      v7 = 4;
    }
    v12 = 8LL * v7;
    if ( !is_mul_ok(v7, 8uLL) )
      v12 = -1LL;
    v13 = (char *)operator new(v12, 0x4B677844u, PagedPool);
    v15 = v13;
    if ( !v13 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdLowResource(v20);
      goto LABEL_20;
    }
    memset(&v13[8 * v11], 0, 8LL * (v7 - (unsigned int)v11));
    if ( (_DWORD)v11 )
    {
      memmove(v15, this[v8 + 144], 8 * v11);
      operator delete[](this[v8 + 144]);
    }
    this[v8 + 144] = (struct _KTHREAD *)v15;
    v10 = v7;
    *((_DWORD *)this + v8 + 320) = v7;
  }
  v16 = 0;
  if ( (_DWORD)v10 )
  {
    do
    {
      if ( !*((_QWORD *)this[v8 + 144] + v16) )
        break;
      ++v16;
    }
    while ( v16 < v7 );
  }
  if ( v16 != (_DWORD)v10 )
  {
    if ( *((_QWORD *)this[v8 + 144] + v16) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v21 + 24) = 8658LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)this + v8 + 320) < *((_DWORD *)this + v8 + 336) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v22 + 24) = 8659LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v9 = 1;
    *((_QWORD *)this[v8 + 144] + v16) = a3;
    ++*((_DWORD *)this + v8 + 336);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v16)) & 0x7FE;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v9;
}
