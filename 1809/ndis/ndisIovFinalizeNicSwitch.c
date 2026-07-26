/*
 * XREFs of ndisIovFinalizeNicSwitch @ 0x1C006FDE4
 * Callers:
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0070860 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BDD6C (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     ndisIovAddSwitchToList @ 0x1C006F1DC (ndisIovAddSwitchToList.c)
 */

__int64 __fastcall ndisIovFinalizeNicSwitch(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rax
  _OWORD *v6; // r10
  __int128 v10; // xmm1
  __int64 result; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  KIRQL v18; // al
  _QWORD *v19; // rdx
  __int64 v20; // r8

  v5 = 4LL;
  v6 = (_OWORD *)(a3 + 100);
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    v10 = a2[7];
    a2 += 8;
    *(v6 - 1) = v10;
    --v5;
  }
  while ( v5 );
  *v6 = *a2;
  v6[1] = a2[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 4);
  result = ndisIovAddSwitchToList(a1, a3);
  if ( !(_DWORD)result )
  {
    v12 = (_QWORD *)(a3 + 56);
    v13 = *(_QWORD *)(a3 + 56);
    v14 = a5 + 4;
    if ( *(_QWORD *)(v13 + 8) != a3 + 56 )
      goto LABEL_9;
    *v14 = v13;
    a5[5] = v12;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = a5 + 6;
    *v12 = v14;
    v16 = (_QWORD *)(a4 + 32);
    ++*(_DWORD *)(a3 + 48);
    v17 = *(_QWORD *)(a4 + 32);
    if ( *(_QWORD *)(v17 + 8) != a4 + 32 )
      goto LABEL_9;
    *v15 = v17;
    a5[7] = v16;
    *(_QWORD *)(v17 + 8) = v15;
    *v16 = v15;
    ++*(_DWORD *)(a4 + 28);
    *(_QWORD *)(a1 + 4720) = a4;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v19 = (_QWORD *)(a1 + 4784);
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1864) = 2884701;
    v20 = *(_QWORD *)(a1 + 4784);
    if ( *(_QWORD *)(v20 + 8) != a1 + 4784 )
LABEL_9:
      __fastfail(3u);
    a5[1] = v19;
    *a5 = v20;
    *(_QWORD *)(v20 + 8) = a5;
    *v19 = a5;
    ++*(_DWORD *)(a1 + 4776);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v18);
    return 0LL;
  }
  return result;
}
