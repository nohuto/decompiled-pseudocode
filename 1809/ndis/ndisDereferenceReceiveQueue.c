/*
 * XREFs of ndisDereferenceReceiveQueue @ 0x1C003B3C8
 * Callers:
 *     ndisDereferenceReceiveFilter @ 0x1C003B1EC (ndisDereferenceReceiveFilter.c)
 *     ndisFreeReceiveQueue @ 0x1C003B594 (ndisFreeReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisDereferenceReceiveQueue(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  char v5; // r14
  char v6; // r15
  KIRQL v7; // al
  bool v8; // zf
  unsigned int v9; // r12d
  _QWORD **v10; // rcx
  PVOID *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  KIRQL v15; // [rsp+50h] [rbp+8h]

  v1 = P[8];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1864) = 2687739;
  v8 = (*((_DWORD *)P + 20))-- == 1;
  v9 = *((_DWORD *)P + 20);
  v15 = v7;
  if ( v8 )
  {
    v5 = 1;
    *(_BYTE *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)(v1 + 3504)) &= ~(1 << (v3 & 7));
    v4 = P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      if ( v10[1] != P + 2 )
        goto LABEL_14;
      v11 = (PVOID *)P[3];
      if ( *v11 != P + 2 )
        goto LABEL_14;
      *v11 = v10;
      v6 = 1;
      v10[1] = v11;
      --*(_DWORD *)(v4 + 752);
    }
    v12 = *P;
    if ( *(_QWORD **)(*P + 8LL) == P )
    {
      v13 = (_QWORD *)P[1];
      if ( (_QWORD *)*v13 == P )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        --*(_DWORD *)(v1 + 3516);
        ExFreePoolWithTag(P, 0);
        v7 = v15;
        goto LABEL_9;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
LABEL_9:
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
  if ( v6 )
    ndisMDereferenceOpenUnlocked(v4, 10);
  if ( v5 )
    ndisDereferenceMiniport(v1, 0x45u);
  return v9;
}
