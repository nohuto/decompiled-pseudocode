/*
 * XREFs of ndisPnPStartDevice @ 0x1C002D22C
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C002F168 (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C00802A0 (ndisIMInitializeDeviceInstanceInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisInitializeAdapter @ 0x1C002CA48 (ndisInitializeAdapter.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ndisReinitializeMiniportBlock @ 0x1C013AC78 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisPnPStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbp
  unsigned int v5; // r14d
  __int64 v7; // r15
  _DWORD *v8; // rsi
  int v9; // eax
  char *PoolWithTag; // rax
  int v11; // edx
  __int64 i; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  _DWORD InputBuffer[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+54h] [rbp-34h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xDu,
      0x41u,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1,
      *(unsigned __int16 **)(a1 + 3856));
  if ( *(_DWORD *)(a1 + 1520) == 3 )
  {
    ndisReinitializeMiniportBlock(a1);
    *(_DWORD *)(a1 + 124) |= 0x10000u;
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = *(_DWORD **)(v7 + 8);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 124) |= 0x200000u;
      v9 = v8[4];
      if ( v9 )
        v5 = 20 * (v9 + 1);
      else
        v5 = 40;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v5, 0x7261444Eu);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v15 = -1073741670;
        goto LABEL_21;
      }
      memmove(PoolWithTag, v8, v5);
      memmove(&v3[v5], *(const void **)(v7 + 16), v5);
      for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
      {
        if ( LOBYTE(v8[5 * i + 5]) == 2 && (v8[5 * i + 5] & 0x20000) != 0 )
          *(_DWORD *)(a1 + 3412) += HIWORD(v8[5 * i + 6]);
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 1976);
  v14 = *(_QWORD *)(a1 + 3760);
  *(_QWORD *)(a1 + 944) = v3;
  *(_QWORD *)(a1 + 952) = &v3[v5];
  v15 = ndisInitializeAdapter(v14, a1, a3, v13);
  if ( v15 )
    goto LABEL_21;
  if ( *(_DWORD *)(a1 + 1520) == 3
    || ((*(_DWORD *)(a1 + 124) & 0x200000) == 0 || !ndisAoAcCapable) && (*(_DWORD *)(a1 + 2684) & 0x200) == 0
    || *(_BYTE *)(a1 + 5266)
    || (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
LABEL_20:
    *(_DWORD *)(a1 + 1520) = 1;
    KeSetEvent((PRKEVENT)(a1 + 3728), 0, 0);
    *(_QWORD *)(a1 + 1592) = MEMORY[0xFFFFF78000000320];
    goto LABEL_21;
  }
  v17 = *(_QWORD *)(a1 + 3824);
  v24 = 0LL;
  v18 = PoFxEnableDStateReporting(v17, &v24);
  if ( !v18 )
  {
    v19 = *(_QWORD *)(a1 + 3832);
    InputBuffer[1] = 0;
    v23 = 0;
    InputBuffer[0] = 58;
    v21 = v19;
    v22 = 6;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, 0LL, 0);
    *(_BYTE *)(a1 + 5266) = 1;
    goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      13,
      66,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1,
      v18);
  }
  v15 = -1073741823;
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      13,
      67,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  }
  return v15;
}
