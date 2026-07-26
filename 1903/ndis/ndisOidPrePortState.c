/*
 * XREFs of ndisOidPrePortState @ 0x1C006D7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisFindPortByPortNumber @ 0x1C0062034 (ndisFindPortByPortNumber.c)
 */

char __fastcall ndisOidPrePortState(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // rax
  KIRQL v6; // r13
  unsigned int v7; // edx
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 *PortByPortNumber; // rax
  __int64 *v11; // r15

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      190,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *(_DWORD *)(v3 + 8));
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 48) < 0x30u )
      {
        *(_DWORD *)(v3 + 52) = 0;
        *(_DWORD *)(v3 + 56) = 48;
        *(_DWORD *)(a1 + 40) = -1073676266;
        goto LABEL_17;
      }
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      v7 = *(_DWORD *)(v3 + 8);
      if ( v7 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(v1, v7);
        v11 = PortByPortNumber;
        if ( !PortByPortNumber )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
          *(_DWORD *)(a1 + 40) = -1071448019;
          goto LABEL_17;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
          *(_DWORD *)(a1 + 40) = -1071448018;
          goto LABEL_17;
        }
        v8 = *(_DWORD **)(v3 + 40);
        memset(v8, 0, 0x30uLL);
        *v8 = 3146112;
        v8[1] = *((_DWORD *)v11 + 10);
        *((_QWORD *)v8 + 1) = v11[6];
        *((_QWORD *)v8 + 2) = v11[7];
        v8[6] = *((_DWORD *)v11 + 16);
        v8[7] = *((_DWORD *)v11 + 17);
        v8[8] = *((_DWORD *)v11 + 18);
        v8[9] = *((_DWORD *)v11 + 19);
        v9 = *((_DWORD *)v11 + 20);
      }
      else
      {
        v8 = *(_DWORD **)(v3 + 40);
        memset(v8, 0, 0x30uLL);
        *v8 = 3146112;
        v8[1] = *(_DWORD *)(v1 + 480);
        *((_QWORD *)v8 + 1) = *(_QWORD *)(v1 + 792);
        *((_QWORD *)v8 + 2) = *(_QWORD *)(v1 + 800);
        v8[6] = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
        v8[7] = *(_DWORD *)(v1 + 3320);
        v8[8] = *(_DWORD *)(v1 + 3324);
        v8[9] = *(_DWORD *)(v1 + 3328);
        v9 = *(_DWORD *)(v1 + 3332);
      }
      v8[10] = v9;
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v4 = 1;
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      191,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1,
      *(_DWORD *)(v3 + 8));
  return v4;
}
