/*
 * XREFs of ndisCreateNotifyQueue @ 0x1C01380B8
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0083DF0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C013A5B0 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceAfNotification @ 0x1C00870CC (ndisDereferenceAfNotification.c)
 */

__int64 __fastcall ndisCreateNotifyQueue(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  __int64 v6; // rbp
  unsigned int v8; // edi
  __int64 *v9; // rbx
  int v10; // edx
  _QWORD *PoolWithTag; // r14
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // rbx
  int v14; // edx
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  void *v17; // rcx
  __int64 v18; // rbx
  char v20; // [rsp+30h] [rbp-38h]

  v6 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      19,
      10,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      a1,
      v20);
  }
  *a4 = 0LL;
  if ( v6 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 232));
    if ( (*(_DWORD *)(v6 + 224) & 0x18000) == 0 )
    {
      v9 = *(__int64 **)(a1 + 512);
      while ( v9 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
        if ( !PoolWithTag )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v10,
              19,
              11,
              (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
          }
          v8 = -1073741670;
          break;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 1064));
        ndisMReferenceOpen(v6, 0xEu);
        PoolWithTag[5] = a1;
        PoolWithTag[6] = v6;
        PoolWithTag[7] = v9[2];
        *((_DWORD *)PoolWithTag + 16) = *((_DWORD *)v9 + 6);
        *PoolWithTag = *a4;
        v9 = (__int64 *)*v9;
        *a4 = PoolWithTag;
      }
    }
    v12 = (KSPIN_LOCK *)(v6 + 232);
LABEL_25:
    KeReleaseSpinLockFromDpcLevel(v12);
    if ( v8 )
    {
      if ( !*a4 )
        goto LABEL_29;
      do
      {
        v17 = *a4;
        v18 = (*a4)[6];
        *a4 = (_QWORD *)**a4;
        ExFreePoolWithTag(v17, 0);
        ndisDereferenceAfNotification(v18);
        ndisMDereferenceOpenLocked(v18, 0xEu);
      }
      while ( *a4 );
    }
LABEL_20:
    v16 = *a4;
    if ( *a4 )
    {
      v16[1] = 0LL;
      v16[3] = ndisNotifyAfRegistration;
      v16[4] = v16;
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 24) + 200LL) )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 232));
          if ( (*(_DWORD *)(v13 + 224) & 0x18000) != 0 )
          {
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 232));
          }
          else
          {
            v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x6F63444Eu);
            if ( !v15 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = 2;
                WPP_RECORDER_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v14,
                  19,
                  12,
                  (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
              }
              v8 = -1073741670;
              v12 = (KSPIN_LOCK *)(v13 + 232);
              goto LABEL_25;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 1064));
            ndisMReferenceOpen(v13, 0xEu);
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 232));
            v15[5] = a1;
            v15[6] = v13;
            v15[7] = *(_QWORD *)a3;
            *((_DWORD *)v15 + 16) = *(_DWORD *)(a3 + 8);
            *v15 = *a4;
            *a4 = v15;
          }
        }
        v13 = *(_QWORD *)(v13 + 392);
        if ( !v13 )
          goto LABEL_20;
      }
    }
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      19,
      13,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      a1,
      v6,
      v8);
  }
  return v8;
}
