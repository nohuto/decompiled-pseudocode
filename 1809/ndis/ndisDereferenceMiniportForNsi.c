/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C000A9D0
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023BE0 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B6660 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E25B8 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KSPIN_LOCK *v3; // rbp
  KIRQL v6; // al
  ULONG_PTR v7; // rcx
  KIRQL v8; // r14
  bool v9; // zf
  struct _KEVENT *v10; // rcx
  char v11; // bp
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // r14
  __int64 v15; // r10
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  _BYTE *v18; // rdx
  char v19; // cl
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // rsi
  unsigned int v22; // edx
  int v23; // ecx
  struct _KEVENT *v24; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 96);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 4936);
  v8 = v6;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 71257;
  NdisDereferenceWithTag(v7);
  v9 = (*(_DWORD *)(a1 + 3140))-- == 1;
  if ( v9 )
  {
    v10 = *(struct _KEVENT **)(a1 + 3152);
    if ( v10 )
      KeSetEvent(v10, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock(v3, v8);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  v11 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
  v13 = *(_QWORD *)(a1 + 4928);
  v14 = v12;
  if ( v13 && v13 - 2 > 1 )
  {
    if ( v13 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( a3 == 0xFF )
    {
      if ( (*(_BYTE *)v13 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v13, 0xFFuLL);
      *(_BYTE *)v13 &= ~2u;
    }
    else
    {
      if ( a3 >= *(_BYTE *)(v13 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v13, a3);
      if ( *(_BYTE *)(v13 + 1) )
      {
        if ( *(_BYTE *)(v13 + 1) == 1 )
        {
          v20 = a3;
          v21 = v13 + ((unsigned __int64)a3 << 6);
          v22 = *(_DWORD *)(v21 + 64);
          v23 = (unsigned __int16)v22 >> 1;
          if ( v22 >> 17 < 0x3FFE && v23 == (v22 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v21 + 8));
            *(_DWORD *)(v21 + 64) &= 0x10001u;
          }
          else
          {
            if ( v23 == 0 && (v22 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v13, v20);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v21 + 8), 0);
          }
        }
      }
      else
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( v15 && (v16 = *(_BYTE *)(v13 + 3), v17 = 0, v16) )
        {
          while ( 1 )
          {
            v18 = (_BYTE *)(v15 + 2LL * v17);
            if ( *v18 == a3 )
            {
              v19 = v18[1];
              if ( v19 )
                break;
            }
            if ( ++v17 >= v16 )
              goto LABEL_16;
          }
          v18[1] = v19 - 1;
        }
        else
        {
LABEL_16:
          if ( !_bittestandreset((signed __int32 *)(v13 + 16), a3) )
            ndisBugCheckEx(0x1EuLL, 0LL, v13, a3);
        }
      }
    }
  }
  v9 = (*(_DWORD *)(a1 + 4480))-- == 1;
  if ( v9 )
    v11 = 1;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, *(unsigned int *)(a1 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4472), v14);
  if ( v11 )
  {
    v24 = *(struct _KEVENT **)(a1 + 1608);
    if ( v24 )
      KeSetEvent(v24, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
}
