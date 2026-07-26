/*
 * XREFs of ndisPnPStartDevice @ 0x1C00BC164
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00EB6F8 (ndisIMInitializeDeviceInstance_ea_1C00EB6F8.c)
 * Callees:
 *     NdisSetEvent @ 0x1C0008E00 (NdisSetEvent.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisInitializeAdapter @ 0x1C00BC300 (ndisInitializeAdapter.c)
 *     ndisReinitializeMiniportBlock @ 0x1C01196D4 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisPnPStartDevice(char *DeferredContext, __int64 a2, __int64 a3)
{
  char *v3; // rbp
  unsigned int v5; // r14d
  __int64 v7; // r15
  _DWORD *v8; // rsi
  int v9; // eax
  char *PoolWithTag; // rax
  __int64 i; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qZ(
      0x41u,
      &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids,
      (__int64)DeferredContext,
      *((const wchar_t **)DeferredContext + 486));
  if ( *((_DWORD *)DeferredContext + 380) == 3 )
  {
    ndisReinitializeMiniportBlock(DeferredContext);
    *((_DWORD *)DeferredContext + 31) |= 0x10000u;
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = *(_DWORD **)(v7 + 8);
    if ( v8 )
    {
      *((_DWORD *)DeferredContext + 31) |= 0x200000u;
      v9 = v8[4];
      if ( v9 )
        v5 = 20 * (v9 + 1);
      else
        v5 = 40;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v5, 0x7261444Eu);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741670;
        goto LABEL_21;
      }
      memmove(PoolWithTag, v8, v5);
      memmove(&v3[v5], *(const void **)(v7 + 16), v5);
      for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
      {
        if ( LOBYTE(v8[5 * i + 5]) == 2 && (v8[5 * i + 5] & 0x20000) != 0 )
          *((_DWORD *)DeferredContext + 859) += HIWORD(v8[5 * i + 6]);
      }
    }
  }
  v12 = *((_QWORD *)DeferredContext + 248);
  v13 = *((_QWORD *)DeferredContext + 474);
  *((_QWORD *)DeferredContext + 118) = v3;
  *((_QWORD *)DeferredContext + 119) = &v3[v5];
  v14 = ndisInitializeAdapter(v13, DeferredContext, a3, v12);
  if ( v14 )
    goto LABEL_21;
  if ( *((_DWORD *)DeferredContext + 380) == 3
    || ((*((_DWORD *)DeferredContext + 31) & 0x200000) == 0 || !ndisAoAcCapable)
    && (*((_DWORD *)DeferredContext + 675) & 0x200) == 0
    || DeferredContext[5306]
    || (*((_DWORD *)DeferredContext + 30) & 0x80u) != 0 )
  {
LABEL_20:
    *((_DWORD *)DeferredContext + 380) = 1;
    NdisSetEvent((PNDIS_EVENT)(DeferredContext + 3760));
    *((_QWORD *)DeferredContext + 199) = MEMORY[0xFFFFF78000000320];
    goto LABEL_21;
  }
  v16 = *((_QWORD *)DeferredContext + 482);
  v18 = 0LL;
  v17 = PoFxEnableDStateReporting(v16, &v18);
  if ( !v17 )
  {
    DeferredContext[5306] = 1;
    goto LABEL_20;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 2u )
    WPP_SF_qD(0x42u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeferredContext, v17);
  v14 = -1073741823;
LABEL_21:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x43u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DeferredContext);
  return v14;
}
