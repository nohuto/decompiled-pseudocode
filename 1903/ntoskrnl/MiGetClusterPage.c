/*
 * XREFs of MiGetClusterPage @ 0x1402E0924
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiIsPteEvaluated @ 0x140076164 (MiIsPteEvaluated.c)
 *     MiComputeZeroClusterMaximum @ 0x14007D620 (MiComputeZeroClusterMaximum.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiGetClusterPage(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, int a5, _BYTE *a6)
{
  unsigned __int16 *v8; // r13
  unsigned __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 ProtoPteAddress; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // r10
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  bool v25; // zf
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  signed __int32 v28; // ecx
  __int64 result; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r15
  bool v33; // zf
  __int64 v35; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 *v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  _QWORD v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  unsigned __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v44[28]; // [rsp+A0h] [rbp-60h] BYREF

  v42 = a3;
  v41 = a6;
  v36 = 0LL;
  v37 = 0LL;
  memset(v44, 0, 0x58uLL);
  *a6 = 0;
  v8 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v9 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v38[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  v38[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < v9
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v10 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
  MiInitializePageColorBase((__int64)v8, v10, (__int64)&v36);
  v44[3] = 0LL;
  v44[4] = 0LL;
  v11 = HIDWORD(v37) >> byte_140465A4D;
  v25 = (*(_DWORD *)(a1 + 48) & 0x100000) == 0;
  LOWORD(v44[0]) = 2;
  v44[1] = v38;
  v44[2] = 1LL;
  if ( v25 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v39);
    v15 = *(_QWORD *)(v39 + 8);
    v16 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v38[0]) >> 12;
    v17 = v15 + 8 * (*(unsigned int *)(v39 + 44) - (unsigned __int64)(*(_DWORD *)(v39 + 52) & 0x3FFFFFFF));
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
    v12 = *(_WORD *)(*(_QWORD *)v39 + 60LL) & 0x3FF;
  }
  else
  {
    v12 = v8[87];
    v13 = ((v38[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v35 = *(_QWORD *)(qword_140466188 + 8 * v12);
  v19 = 0LL;
  *(_BYTE *)(1984LL * v11 + *(_QWORD *)(v35 + 16) + 851) = 1;
  do
  {
    v20 = MI_READ_PTE_LOCK_FREE(v13 + 8 * v19);
    v44[v22 + 12] = v20;
    v19 = v22 + 1;
  }
  while ( v19 < 0x10 );
  v23 = 0LL;
  do
  {
    v24 = v44[v23 + 12];
    v40 = v24;
    if ( a5 )
    {
      if ( IS_PTE_NOT_DEMAND_ZERO(v24) )
        break;
      v25 = ((v26 >> 5) & 0x1F) == a5;
    }
    else
    {
      v25 = v24 == 0;
    }
    if ( !v25 || v21 && MiIsPteEvaluated(v21) )
      break;
    if ( ++v23 == v42 )
      break;
  }
  while ( v23 < 0x10 );
  v27 = -1LL;
  if ( v23 == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)v44, (__int64)v8, a1) != 16 )
      return 0LL;
    v28 = _InterlockedExchangeAdd(v36, 1u);
    result = MiGetLargePage(v35, 2u, a4, HIDWORD(v37) | v28 & (unsigned int)v37, 0LL);
    if ( result )
      return result;
  }
  else
  {
    v23 = 0LL;
    while ( 1 )
    {
      v40 = v44[v23 + 12];
      if ( (v40 & 1) != 0 )
        break;
      if ( ++v23 >= 0x10 )
        goto LABEL_33;
    }
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40);
    v27 = (v30 >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned __int16)v30 >> 12 != v23 )
      return 0LL;
  }
LABEL_33:
  v31 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v43 = 1LL;
  v32 = ((v31 - ((v38[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  result = MiGetPageChain(v35, (__int64)v8, v10, a4, 258, v32, &v43);
  if ( !result )
    return 0LL;
  if ( v23 == 16 )
    v33 = (((result + 0x58000000000LL) / 48) & 0xF) == v32;
  else
    v33 = v27 + ((v31 - ((v38[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v23 == (result + 0x58000000000LL) / 48;
  if ( !v33 )
    *v41 = 1;
  return result;
}
