/*
 * XREFs of MiGetClusterPage @ 0x1402C69AC
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiIsPteEvaluated @ 0x14010FA54 (MiIsPteEvaluated.c)
 *     MiComputeZeroClusterMaximum @ 0x14010FB04 (MiComputeZeroClusterMaximum.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetClusterPage(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, int a5, _BYTE *a6)
{
  unsigned __int64 v8; // rdx
  unsigned __int16 *v9; // r15
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 ProtoPteAddress; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  __int64 v19; // r13
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // r10
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int16 v29; // cx
  __int64 result; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 PageChain; // r8
  bool v35; // zf
  int v37; // [rsp+44h] [rbp-BCh]
  int v38; // [rsp+48h] [rbp-B8h]
  _QWORD v39[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  unsigned __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v45; // [rsp+88h] [rbp-78h] BYREF
  __int16 v46; // [rsp+90h] [rbp-70h]
  unsigned __int16 v47; // [rsp+92h] [rbp-6Eh]
  __int16 v48; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  __int64 v52; // [rsp+C0h] [rbp-40h]
  _QWORD v53[16]; // [rsp+100h] [rbp+0h]

  v41 = a6;
  v8 = a2 & 0xFFFFFFFFFFFF0000uLL;
  v43 = a3;
  *a6 = 0;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v10 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v39[0] = v8;
  v39[1] = 0x10000LL;
  if ( v8 >> 12 < v10
    || (v8 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  MiInitializePageColorBase((__int64)v9, (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, (__int64)&v45);
  v51 = 0LL;
  v52 = 0LL;
  v11 = v47 >> byte_14043B109;
  v26 = (*(_DWORD *)(a1 + 48) & 0x4000) == 0;
  v37 = v47;
  v38 = v11;
  v48 = 2;
  v49 = v39;
  v50 = 1LL;
  if ( v26 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v42);
    v15 = *(_QWORD *)(v42 + 8);
    v16 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v39[0]) >> 12;
    v17 = v15 + 8 * (*(unsigned int *)(v42 + 44) - (unsigned __int64)(*(_DWORD *)(v42 + 52) & 0x3FFFFFFF));
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v15 )
      v15 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    v18 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v13 = ProtoPteAddress - 8 * v16;
    if ( v13 < v15 )
      return 0LL;
    if ( v17 <= v18 )
      v18 = v17;
    if ( ProtoPteAddress + 8 * (16 - v16) > v18 )
      return 0LL;
    v12 = *(_WORD *)(*(_QWORD *)v42 + 60LL) & 0x3FF;
  }
  else
  {
    v12 = v9[87];
    v13 = ((v39[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v19 = *(_QWORD *)(qword_14043B808 + 8 * v12);
  v20 = 0LL;
  *(_BYTE *)(1984LL * v11 + *(_QWORD *)(v19 + 16) + 851) = 1;
  do
  {
    v21 = MI_READ_PTE_LOCK_FREE(v13 + 8 * v20);
    v53[v23] = v21;
    v20 = v23 + 1;
  }
  while ( v20 < 0x10 );
  v24 = 0LL;
  do
  {
    v25 = v53[v24];
    v40 = v25;
    if ( a5 )
    {
      if ( IS_PTE_NOT_DEMAND_ZERO(v25) )
        break;
      v26 = ((v27 >> 5) & 0x1F) == a5;
    }
    else
    {
      v26 = v25 == 0;
    }
    if ( !v26 || v22 && MiIsPteEvaluated(v22) )
      break;
    if ( ++v24 == v43 )
      break;
  }
  while ( v24 < 0x10 );
  v28 = -1LL;
  if ( v24 == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)&v48, (__int64)v9, a1) != 16 )
      return 0LL;
    v29 = _InterlockedExchangeAdd(v45, 1u);
    result = MiGet64KPage(v19, a4, v37 | (unsigned int)(unsigned __int16)(v29 & v46), 0LL);
    if ( result )
      return result;
  }
  else
  {
    v24 = 0LL;
    while ( 1 )
    {
      v40 = v53[v24];
      if ( (v40 & 1) != 0 )
        break;
      if ( ++v24 >= 0x10 )
        goto LABEL_33;
    }
    v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40);
    v28 = (v31 >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned __int16)v31 >> 12 != v24 )
      return 0LL;
  }
LABEL_33:
  v32 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v44 = 1LL;
  v33 = ((v32 - ((v39[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  PageChain = MiGetPageChain(v19, (__int64)v9, v38, a4, 258, v33, &v44);
  if ( !PageChain )
    return 0LL;
  if ( v24 == 16 )
    v35 = (((char)PageChain / 48) & 0xF) == v33;
  else
    v35 = v28 + ((v32 - ((v39[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v24 == (PageChain + 0x58000000000LL) / 48;
  if ( !v35 )
    *v41 = 1;
  return PageChain;
}
