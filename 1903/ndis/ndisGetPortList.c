/*
 * XREFs of ndisGetPortList @ 0x1C0028244
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisGetPortList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  unsigned int v4; // esi
  unsigned int v5; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  __int64 *v8; // rdi
  char *v9; // rdx
  unsigned int v10; // r8d
  _QWORD *v11; // rcx
  int v12; // edx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      36,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1);
  }
  *v2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 2752) + 1;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 96 * v5, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(__int64 **)(a1 + 2720);
    memset(PoolWithTag, 0, 0x60uLL);
    v7[8] = 4194688;
    v9 = (char *)(v7 + 24);
    *(_QWORD *)v7 = v7 + 24;
    v10 = 1;
    v7[12] = *(_DWORD *)(a1 + 480);
    *((_QWORD *)v7 + 7) = *(_QWORD *)(a1 + 792);
    *((_QWORD *)v7 + 8) = *(_QWORD *)(a1 + 800);
    v7[18] = *(_DWORD *)(*(_QWORD *)(a1 + 4040) + 532LL);
    v11 = v7;
    v7[19] = *(_DWORD *)(a1 + 3320);
    v7[20] = *(_DWORD *)(a1 + 3324);
    v7[21] = *(_DWORD *)(a1 + 3328);
    v7[22] = *(_DWORD *)(a1 + 3332);
    while ( v8 != (__int64 *)(a1 + 2720) && v10 < v5 )
    {
      if ( *((_DWORD *)v8 + 4) == 4 )
      {
        v11 = v9;
        *(_QWORD *)v9 = v9 + 96;
        ++v10;
        *((_OWORD *)v9 + 2) = *(_OWORD *)(v8 + 3);
        *((_OWORD *)v9 + 3) = *(_OWORD *)(v8 + 5);
        *((_OWORD *)v9 + 4) = *(_OWORD *)(v8 + 7);
        *((_OWORD *)v9 + 5) = *(_OWORD *)(v8 + 9);
        v9 += 96;
      }
      v8 = (__int64 *)*v8;
    }
    *v11 = 0LL;
  }
  else
  {
    v4 = -1073741670;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), NewIrql);
  if ( !v4 )
    *v2 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      23,
      37,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1,
      v4);
  }
  return v4;
}
