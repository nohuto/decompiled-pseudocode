/*
 * XREFs of MiFreeListPageContentsChanged @ 0x1402BFB50
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  char v3; // di
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r8
  int v11; // edi
  unsigned __int64 v12; // rcx
  volatile signed __int64 *v14; // [rsp+20h] [rbp-28h] BYREF
  volatile __int64 *v15; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL);
  v3 = a1;
  v4 = ((unsigned int)(v2 >> 58) << byte_14043B109) | (((v2 >> 36) & 3) << byte_14043B10A);
  v5 = (v2 >> 40) & 0x3FF;
  v6 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8 * v5) + 2120LL);
  v14 = 0LL;
  v15 = (volatile __int64 *)(v6 + 8 * (5 * (dword_14043B148 & (unsigned int)a1 | v4) + 4));
  KxAcquireQueuedSpinLock((__int64)&v14, v15, v5);
  if ( dword_14043B82C == 1 )
  {
    v7 = a1 >> 5;
    v8 = a1 & 0x1F;
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(qword_14043B888 + 4 * v7);
    if ( (unsigned __int64)(v8 + 1) > 0x20 )
    {
      if ( !v8 )
        goto LABEL_9;
      v11 = v3 & 0x1F;
      _InterlockedOr(v10++, ((1 << (32 - v11)) - 1) << v8);
      v9 = 1LL - (unsigned int)(32 - v11);
      if ( v9 >= 0x20 )
      {
        v12 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v10++ = -1;
          --v12;
        }
        while ( v12 );
      }
      if ( v9 )
LABEL_9:
        _InterlockedOr(v10, (1 << v9) - 1);
    }
    else
    {
      _InterlockedOr(v10, 1 << v8);
    }
  }
  return KxReleaseQueuedSpinLock(&v14);
}
