/*
 * XREFs of MiUnlinkPageFromBadList @ 0x1402BFFF0
 * Callers:
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiRemoveBadPages @ 0x1402A6F5C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1402A7278 (MiUnlinkBadPages.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 *v8; // rbx
  int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  volatile signed __int32 *v14; // r8
  unsigned int v15; // eax
  int v16; // ebp
  unsigned __int64 v17; // rcx
  unsigned __int64 result; // rax
  volatile signed __int64 *v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v4 = (__int64)(a1 + 0xB000000000LL) / 48;
  v8 = &qword_140439DC0;
  if ( !MiIsPfnFileOnly((__int64)a1) )
    v8 = (__int64 *)(v5 + 4032);
  v9 = a2 & 0x80;
  if ( !v9 )
  {
    v19 = 0LL;
    v20 = v5 + 4064;
    KxAcquireQueuedSpinLock((__int64)&v19, (volatile __int64 *)(v5 + 4064), v6);
    v7 = 0xFFFFFA8000000000uLL;
  }
  v10 = *a1 & 0xFFFFFFFFFLL;
  v11 = a1[3] & 0xFFFFFFFFFLL;
  if ( v10 == 0xFFFFFFFFFLL )
    v8[3] = v11;
  else
    MiSetPfnBlink(v7 + 48 * v10, a1[3] & 0xFFFFFFFFFLL, 0);
  if ( v11 == 0xFFFFFFFFFLL )
    v8[2] = v10;
  else
    *(_QWORD *)(48 * v11 - 0x58000000000LL) = v10 | *(_QWORD *)(48 * v11 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  if ( v8 != &qword_140439DC0 && dword_14043B82C == 1 )
  {
    v12 = v4 & 0x1F;
    LOBYTE(v13) = 1;
    v14 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v4 >> 5));
    if ( v12 + 1 <= 0x20 )
    {
      v15 = 1 << v12;
LABEL_21:
      _InterlockedOr(v14, v15);
      goto LABEL_22;
    }
    if ( (v4 & 0x1F) == 0 )
      goto LABEL_20;
    v16 = v4 & 0x1F;
    _InterlockedOr(v14++, ((1 << (32 - v16)) - 1) << v12);
    v13 = 1LL - (unsigned int)(32 - v16);
    if ( v13 >= 0x20 )
    {
      v17 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v14++ = -1;
        --v17;
      }
      while ( v17 );
    }
    if ( v13 )
    {
LABEL_20:
      v15 = (1 << v13) - 1;
      goto LABEL_21;
    }
  }
LABEL_22:
  --*v8;
  if ( !v9 )
    KxReleaseQueuedSpinLock(&v19);
  *a1 = 0LL;
  result = MiSetPfnBlink((__int64)a1, 0LL, 1);
  if ( v8 != &qword_140439DC0 )
    a1[1] = 0LL;
  return result;
}
