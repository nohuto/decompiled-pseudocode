/*
 * XREFs of NdisDereferenceWithTag @ 0x1C000AB90
 * Callers:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019E98 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisDereferenceMiniportRef @ 0x1C005FA54 (ndisDereferenceMiniportRef.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  __int64 v3; // r10
  unsigned __int8 v4; // r11
  unsigned __int8 v5; // r9
  _BYTE *v6; // rdx
  char v7; // al
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rbx
  unsigned int v10; // r8d
  int v11; // edx

  if ( BugCheckParameter3 - 2 > 1 )
  {
    if ( BugCheckParameter3 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)BugCheckParameter3 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, 0xFFuLL);
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(BugCheckParameter3 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, BugCheckParameter3, a2);
      if ( *(_BYTE *)(BugCheckParameter3 + 1) )
      {
        if ( *(_BYTE *)(BugCheckParameter3 + 1) == 1 )
        {
          v8 = a2;
          v9 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v10 = *(_DWORD *)(v9 + 64);
          v11 = (unsigned __int16)v10 >> 1;
          if ( v10 >> 17 < 0x3FFE && v11 == (v10 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v9 + 8));
            *(_DWORD *)(v9 + 64) &= 0x10001u;
          }
          else
          {
            if ( v11 == 0 && (v10 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v8);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v9 + 8), 0);
          }
        }
      }
      else
      {
        v3 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v3 && (v4 = *(_BYTE *)(BugCheckParameter3 + 3), v5 = 0, v4) )
        {
          while ( 1 )
          {
            v6 = (_BYTE *)(v3 + 2LL * v5);
            if ( *v6 == a2 )
            {
              v7 = v6[1];
              if ( v7 )
                break;
            }
            if ( ++v5 >= v4 )
              goto LABEL_13;
          }
          v6[1] = v7 - 1;
        }
        else
        {
LABEL_13:
          if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
            ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
        }
      }
    }
  }
}
