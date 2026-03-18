/*
 * XREFs of MiTerminateWsle @ 0x14004B1E0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiRemoveSystemImagePage @ 0x1400F9CC4 (MiRemoveSystemImagePage.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiCountWslesInPageTable @ 0x1400F2590 (MiCountWslesInPageTable.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140129B04 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  BOOL v4; // edi
  int v6; // esi
  int v8; // r13d
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  int v15; // r12d
  char v16; // bl
  unsigned __int8 WsleContents; // bl
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 *v24; // rbx
  char v26; // cl
  int v27; // r8d
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v38[8]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 1;
  v6 = 10;
  v8 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MI_READ_PTE_LOCK_FREE(v9);
  v11 = 0xFFFFFFFFFLL;
  v12 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < v13 || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = *(_QWORD *)v9;
    v15 = 1;
    v6 = 10 - ((a3 & 2) != 0);
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v29 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
        v30 = v14 | 0x20;
        if ( (v29 & 0x20) == 0 )
          v30 = *(_QWORD *)v9;
        v14 = v30;
        if ( (v29 & 0x42) != 0 )
          v14 = v30 | 0x42;
      }
    }
    v16 = (v14 >> 60) & 7;
    v11 = HIBYTE(v14);
    LOBYTE(v11) = v11 & 0xF;
    WsleContents = v11 | (16 * v16);
    v4 = (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0;
    if ( (WsleContents & 0xF) == 8 )
    {
      MiUnlockWsle(a1, a2, v12);
      WsleContents = MiGetWsleContents(v31, a2);
    }
  }
  else
  {
    v15 = 0;
    WsleContents = (*(_BYTE *)v12 >> 1) & 7;
  }
  if ( (a3 & 3) != 0 )
    goto LABEL_15;
  v18 = ZeroPte;
  if ( !v15 )
  {
    if ( !(unsigned int)MiEvictPageTableLock(a1, v9, ZeroPte, 0LL) )
    {
      *a4 = 0;
      return 0LL;
    }
    goto LABEL_14;
  }
  v19 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v11) )
    LOBYTE(v19) = v19 | 0x20;
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v19) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v19 & 0x20) != 0 )
  {
    if ( MiPteInShadowRange(v9) )
    {
      if ( (unsigned int)MiPteHasShadow(v20) )
      {
        if ( !HIBYTE(word_1404658EC) && (v21 & 1) != 0 )
          v21 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v21;
        MiWritePteShadow(v9, v21);
        goto LABEL_14;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        v21 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v9 = v21;
LABEL_14:
    v8 = 1;
    goto LABEL_15;
  }
  if ( (MI_INTERLOCKED_EXCHANGE_PTE(v9, v18) & 0x20) != 0 )
    goto LABEL_14;
LABEL_15:
  MiRemoveWsle(a1, a2, 1, WsleContents, v6, v4);
  if ( v15 )
  {
    v22 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v23 = *(_QWORD *)v22;
    if ( v22 >= 0xFFFFF6FB7DBED000uLL
      && v22 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      v32 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8 * ((v22 >> 3) & 0x1FF));
        v34 = v23 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v34 = v23;
        v23 = v34;
        if ( (v33 & 0x42) != 0 )
          v23 = v34 | 0x42;
      }
    }
    v37 = v23;
    v24 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    if ( ((*(_DWORD *)v24 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(0xFFFFFFFFFLL, a2, v38);
      v26 = 8;
      while ( 1 )
      {
        v27 = v38[(unsigned __int8)--v26];
        if ( v27 )
          break;
        if ( !v26 )
          goto LABEL_18;
      }
      *v24 = *v24 & 0xFFFFFFFFFFFE000FuLL | (16 * (v27 & 0x3FF | ((unsigned __int64)(v26 & 7) << 10)));
    }
  }
LABEL_18:
  *a4 = v8;
  return 1LL;
}
