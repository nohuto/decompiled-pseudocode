/*
 * XREFs of ndisOidPostIovVPortParameters @ 0x1C00B27B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00B1A48 (ndisIovFindVPortByVPortIdInternal.c)
 */

void __fastcall ndisOidPostIovVPortParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *VPortByVPortIdInternal; // rdx
  KIRQL v7; // r10
  int v8; // eax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      57,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( *(_DWORD *)(v4 + 4) == 1 && v3 && !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v1 + 40);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v3, *(_DWORD *)(v5 + 12));
    if ( VPortByVPortIdInternal )
    {
      v8 = *(_DWORD *)(v5 + 4);
      if ( (v8 & 0x10000) != 0 )
      {
        *((_DWORD *)VPortByVPortIdInternal + 29) = (unsigned __int16)v8;
        v8 = *(_DWORD *)(v5 + 4);
      }
      if ( (v8 & 0x40000) != 0 )
      {
        *((_DWORD *)VPortByVPortIdInternal + 163) = *(_DWORD *)(v5 + 540);
        v8 = *(_DWORD *)(v5 + 4);
      }
      if ( (v8 & 0x80000) != 0 )
      {
        *((_DWORD *)VPortByVPortIdInternal + 164) = *(_DWORD *)(v5 + 544);
        v8 = *(_DWORD *)(v5 + 4);
      }
      if ( (v8 & 0x100000) != 0 )
      {
        *(_OWORD *)(VPortByVPortIdInternal + 83) = *(_OWORD *)(v5 + 552);
        v8 = *(_DWORD *)(v5 + 4);
      }
      if ( (v8 & 0x20000) != 0 )
      {
        v9 = 4LL;
        v10 = VPortByVPortIdInternal + 16;
        v11 = (_OWORD *)(v5 + 16);
        do
        {
          *v10 = *v11;
          v10[1] = v11[1];
          v10[2] = v11[2];
          v10[3] = v11[3];
          v10[4] = v11[4];
          v10[5] = v11[5];
          v10[6] = v11[6];
          v10 += 8;
          v12 = v11[7];
          v11 += 8;
          *(v10 - 1) = v12;
          --v9;
        }
        while ( v9 );
        *(_DWORD *)v10 = *(_DWORD *)v11;
        v8 = *(_DWORD *)(v5 + 4);
      }
      if ( (v8 & 0x800000) != 0 )
      {
        v13 = VPortByVPortIdInternal[11];
        if ( v13 )
        {
          if ( *(_DWORD *)(v5 + 12) )
          {
            *(_DWORD *)(v13 + 96) -= *((_DWORD *)VPortByVPortIdInternal + 162);
            *(_DWORD *)(VPortByVPortIdInternal[11] + 96) += *(_DWORD *)(v5 + 536);
          }
          else
          {
            *(_DWORD *)(v13 + 648) = *(_DWORD *)(v5 + 536);
          }
          *((_DWORD *)VPortByVPortIdInternal + 162) = *(_DWORD *)(v5 + 536);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      58,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
}
