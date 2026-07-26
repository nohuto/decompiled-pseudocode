/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C0006780
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015084 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FB430 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0113F28 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  KIRQL v9; // r14
  bool v10; // zf
  struct _KEVENT *v11; // rcx
  int v12; // edx
  char v13; // bp
  KIRQL v14; // al
  _BYTE *v15; // rdx
  ULONG_PTR v16; // r8
  KIRQL v17; // r14
  __int64 v18; // r10
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // al
  int v21; // edx
  char v22; // cl
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // rsi
  unsigned int v25; // edx
  int v26; // ecx
  struct _KEVENT *v27; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 96);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v8 = *(_QWORD *)(a1 + 4896);
  v9 = v7;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  NdisDereferenceWithTag(v8, a2);
  v10 = (*(_DWORD *)(a1 + 3124))-- == 1;
  if ( v10 )
  {
    v11 = *(struct _KEVENT **)(a1 + 3136);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock(v3, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      20,
      25,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  }
  v13 = 0;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  v16 = *(_QWORD *)(a1 + 4888);
  v17 = v14;
  if ( v16 && v16 - 2 > 1 )
  {
    if ( v16 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( a3 == 0xFF )
    {
      if ( (*(_BYTE *)v16 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v16, 0xFFuLL);
      *(_BYTE *)v16 &= ~2u;
    }
    else
    {
      if ( a3 >= *(_BYTE *)(v16 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v16, a3);
      if ( *(_BYTE *)(v16 + 1) )
      {
        if ( *(_BYTE *)(v16 + 1) == 1 )
        {
          v23 = a3;
          v24 = v16 + ((unsigned __int64)a3 << 6);
          v25 = *(_DWORD *)(v24 + 64);
          v26 = (unsigned __int16)v25 >> 1;
          if ( v25 >> 17 < 0x3FFE && v26 == (v25 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 8));
            *(_DWORD *)(v24 + 64) &= 0x10001u;
          }
          else
          {
            if ( v26 == 0 && (v25 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v16, v23);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 8), 0);
          }
        }
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v18 && (v19 = *(_BYTE *)(v16 + 3), v20 = 0, v19) )
        {
          while ( 1 )
          {
            v15 = (_BYTE *)(v18 + 2LL * v20);
            if ( *v15 == a3 )
            {
              v22 = v15[1];
              if ( v22 )
                break;
            }
            if ( ++v20 >= v19 )
              goto LABEL_16;
          }
          v15[1] = v22 - 1;
        }
        else
        {
LABEL_16:
          if ( !_bittestandreset((signed __int32 *)(v16 + 16), a3) )
            ndisBugCheckEx(0x1EuLL, 0LL, v16, a3);
        }
      }
    }
  }
  v10 = (*(_DWORD *)(a1 + 4440))-- == 1;
  if ( v10 )
    v13 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v15,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      *(_DWORD *)(a1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4432), v17);
  if ( v13 )
  {
    v27 = *(struct _KEVENT **)(a1 + 1608);
    if ( v27 )
      KeSetEvent(v27, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      20,
      26,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  }
}
