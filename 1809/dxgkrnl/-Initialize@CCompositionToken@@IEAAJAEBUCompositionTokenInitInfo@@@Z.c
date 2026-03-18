/*
 * XREFs of ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000C798
 * Callers:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C000C720 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C000CA24 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CCompositionToken::Initialize(CCompositionToken *this, const struct CompositionTokenInitInfo *a2)
{
  unsigned __int128 v3; // rax
  unsigned __int64 v4; // kr00_8
  SIZE_T v6; // rbx
  POOL_TYPE v7; // r14d
  PVOID PoolWithTag; // rax
  PVOID v9; // rsi
  unsigned int v10; // ebx

  *((_DWORD *)this + 8) = 0;
  v4 = *((unsigned int *)a2 + 3);
  v3 = *((unsigned int *)a2 + 3) * (unsigned __int128)0x20uLL;
  v6 = v3;
  if ( !is_mul_ok(v4, 0x20uLL) )
  {
    v10 = -1073741675;
LABEL_13:
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    return v10;
  }
  v7 = DWORD2(v3) + 1;
  if ( !(_QWORD)v3 )
    v6 = (unsigned int)(DWORD2(v3) + 1);
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
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 9) = v9;
  v10 = v9 == 0LL ? 0xC0000017 : 0;
  if ( !v9 )
    goto LABEL_13;
  v10 = CCompositionToken::InitializeUpdates(this, a2);
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_13;
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 24) = *((_DWORD *)this + 20);
  *((_BYTE *)this + 64) = v7;
  return v10;
}
