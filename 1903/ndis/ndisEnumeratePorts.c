/*
 * XREFs of ndisEnumeratePorts @ 0x1C0061E00
 * Callers:
 *     ndisOidPreEnumeratePorts @ 0x1C006C9E0 (ndisOidPreEnumeratePorts.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisEnumeratePorts(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4, unsigned int *a5)
{
  _DWORD *v7; // rdi
  unsigned int v9; // esi
  KIRQL v10; // r8
  int v11; // edx
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  _DWORD *v15; // rdi
  __int64 *i; // rax
  int v17; // edx
  KIRQL v19; // [rsp+80h] [rbp+18h]

  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      34,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1);
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v19 = v10;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *a4 = 0;
  v11 = *(_DWORD *)(a1 + 120) & 0x10000;
  v12 = *(_DWORD *)(a1 + 2752) + 1;
  if ( !v11 )
    v12 = *(_DWORD *)(a1 + 2752);
  v13 = (v12 << 6) + 16;
  *a5 = v13;
  if ( v13 <= a3 )
  {
    *v7 = 5243264;
    v7[3] = 64;
    v14 = 0;
    v7[1] = v12;
    v7[2] = 16;
    v15 = v7 + 4;
    if ( v11 )
    {
      memset(v15, 0, 0x40uLL);
      v15[1] = 0;
      v15[2] = 0;
      v10 = v19;
      *v15 = 4194688;
      v15[4] = *(_DWORD *)(a1 + 480);
      *((_QWORD *)v15 + 3) = *(_QWORD *)(a1 + 792);
      *((_QWORD *)v15 + 4) = *(_QWORD *)(a1 + 800);
      v15[10] = *(_DWORD *)(*(_QWORD *)(a1 + 4040) + 532LL);
      v14 = 1;
      v15[11] = *(_DWORD *)(a1 + 3320);
      v15[12] = *(_DWORD *)(a1 + 3324);
      v15[13] = *(_DWORD *)(a1 + 3328);
      v15[14] = *(_DWORD *)(a1 + 3332);
      v15 += 16;
    }
    for ( i = *(__int64 **)(a1 + 2720); i != (__int64 *)(a1 + 2720) && v14 < v12; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == 4 )
      {
        *(_OWORD *)v15 = *(_OWORD *)(i + 3);
        *((_OWORD *)v15 + 1) = *(_OWORD *)(i + 5);
        *((_OWORD *)v15 + 2) = *(_OWORD *)(i + 7);
        *((_OWORD *)v15 + 3) = *(_OWORD *)(i + 9);
        v15 += 16;
        ++v14;
      }
    }
    *a4 = v13;
  }
  else
  {
    v9 = -1073676266;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      23,
      35,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      a1,
      v9);
  }
  return v9;
}
