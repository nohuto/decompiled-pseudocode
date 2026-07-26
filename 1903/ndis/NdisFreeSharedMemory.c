/*
 * XREFs of NdisFreeSharedMemory @ 0x1C0078C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F5F8 (ndisDereferenceDmaAdapter.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  unsigned int *v2; // rbx
  NDIS_HANDLE v4; // rbp
  unsigned int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  KIRQL v8; // r9
  _QWORD *v9; // rdx
  NDIS_HANDLE *v10; // rcx
  unsigned int **v11; // rcx
  NDIS_HANDLE *v12; // rdx
  _QWORD *v13; // rdx
  NDIS_HANDLE *v14; // r8
  int v15; // [rsp+20h] [rbp-28h]
  char v16; // [rsp+28h] [rbp-20h]

  v2 = (unsigned int *)AllocationHandle;
  v4 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)AllocationHandle;
    LOBYTE(AllocationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AllocationHandle,
      21,
      23,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids,
      v16);
  }
  if ( NdisHandle )
  {
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v4 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( *(_BYTE *)NdisHandle != 17 )
    {
      goto LABEL_28;
    }
    if ( v2 )
    {
      v5 = v2[12];
      if ( (v5 & 0xF) == 1 )
      {
        v6 = (_QWORD *)*((_QWORD *)NdisHandle + 63);
        if ( !v6 )
          goto LABEL_28;
        v7 = v6[3];
        if ( !v7 )
          goto LABEL_28;
        LOBYTE(v15) = 1;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v7 + 8) + 24LL))(
          v7,
          v2[36],
          *((_QWORD *)v2 + 13),
          *((_QWORD *)v2 + 19),
          v15);
        ndisDereferenceDmaAdapter(v6);
      }
      else
      {
        if ( (v5 & 0xF) != 2 )
        {
          if ( (v5 & 4) != 0 )
          {
            if ( v4 )
              goto LABEL_19;
          }
          else if ( (v5 & 8) == 0 )
          {
            goto LABEL_28;
          }
          (*((void (__fastcall **)(_QWORD, _QWORD))v2 + 10))(*((_QWORD *)v2 + 11), *((_QWORD *)v2 + 12));
          goto LABEL_19;
        }
        MmFreeContiguousMemorySpecifyCache(*((PVOID *)v2 + 19), v2[36], MmCached);
      }
LABEL_19:
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisHandle + 12);
      *((_QWORD *)NdisHandle + 65) = KeGetCurrentThread();
      v9 = *(_QWORD **)v2;
      if ( *(unsigned int **)(*(_QWORD *)v2 + 8LL) == v2 )
      {
        v10 = (NDIS_HANDLE *)*((_QWORD *)v2 + 1);
        if ( *v10 == v2 )
        {
          *v10 = v9;
          v9[1] = v10;
          if ( v4 )
          {
            v11 = (unsigned int **)*((_QWORD *)v2 + 2);
            if ( v11[1] != v2 + 4 )
              goto LABEL_31;
            v12 = (NDIS_HANDLE *)*((_QWORD *)v2 + 3);
            if ( *v12 != v2 + 4 )
              goto LABEL_31;
            *v12 = v11;
            v11[1] = (unsigned int *)v12;
          }
          v13 = (_QWORD *)*((_QWORD *)v2 + 4);
          if ( (unsigned int *)v13[1] == v2 + 8 )
          {
            v14 = (NDIS_HANDLE *)*((_QWORD *)v2 + 5);
            if ( *v14 == v2 + 8 )
            {
              *v14 = v13;
              v13[1] = v14;
              *((_QWORD *)NdisHandle + 65) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v8);
              ExFreePoolWithTag(v2, 0);
              goto LABEL_28;
            }
          }
        }
      }
LABEL_31:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(AllocationHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AllocationHandle,
      21,
      24,
      (struct _GUID *)&WPP_7e4e4e2c73163f40df239693cce6d855_Traceguids);
  }
}
