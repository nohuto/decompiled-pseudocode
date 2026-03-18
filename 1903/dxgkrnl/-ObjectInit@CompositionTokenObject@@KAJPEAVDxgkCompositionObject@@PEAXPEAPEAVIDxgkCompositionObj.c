/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0015A1C
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C00164E0 (NtTokenManagerCreateCompositionTokenHandle.c)
 * Callees:
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0015B70 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        const struct CompositionTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 v4; // rbx
  unsigned __int128 v5; // rax
  SIZE_T v6; // rdi
  POOL_TYPE v7; // r15d
  PVOID PoolWithTag; // rax
  PVOID v9; // rsi
  unsigned int v10; // edi

  if ( a1 )
  {
    v4 = (__int64)a1 + 32;
    *(_QWORD *)a1 = &SetElement::`vftable';
    *((_DWORD *)a1 + 17) = 0;
    *((_DWORD *)a1 + 16) = 6;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_DWORD *)a1 + 32) = 0;
    *((_QWORD *)a1 + 4) = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 9) = &CCompositionToken::`vftable'{for `CPushLock'};
    *((_BYTE *)a1 + 96) = 0;
  }
  else
  {
    v4 = 32LL;
  }
  *a3 = (struct IDxgkCompositionObject *)v4;
  *(_DWORD *)(v4 + 32) = 0;
  v5 = *((unsigned int *)a2 + 3) * (unsigned __int128)0x20uLL;
  v6 = 32LL * *((unsigned int *)a2 + 3);
  if ( !is_mul_ok(*((unsigned int *)a2 + 3), 0x20uLL) )
  {
    v10 = -1073741675;
LABEL_16:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 56LL))(v4 + 8);
    return v10;
  }
  v7 = DWORD2(v5) + 1;
  if ( !(_QWORD)v5 )
    v6 = (unsigned int)(DWORD2(v5) + 1);
  if ( v6 > 0x7FFFFFFF )
  {
    v9 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(v7, v6, 0x62634D54u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v6);
  }
  *(_DWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 72) = v9;
  v10 = v9 == 0LL ? 0xC0000017 : 0;
  if ( !v9 )
    goto LABEL_16;
  v10 = CCompositionToken::InitializeUpdates((CCompositionToken *)v4, a2);
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_16;
  *(_QWORD *)(v4 + 88) = *((_QWORD *)a2 + 2);
  *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 80);
  *(_BYTE *)(v4 + 64) = v7;
  return v10;
}
