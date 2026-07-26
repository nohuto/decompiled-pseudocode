/*
 * XREFs of NdisMAllocatePort @ 0x1C0061A70
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005F150 (WPP_RECORDER_SF_qdD_ea_1C005F150.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  int v2; // r14d
  PNDIS_PORT_CHARACTERISTICS v3; // r13
  int v5; // edx
  NDIS_STATUS v6; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi
  KIRQL v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  _BYTE *v12; // rbp
  __int64 v13; // rcx
  _BYTE *v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ebx
  _BYTE *v19; // rax
  _BYTE *v20; // r14
  char v21; // bp
  _DWORD *v22; // rax
  unsigned int v23; // r8d
  __int64 *v24; // rdx
  __int64 v25; // rax
  unsigned int Size; // [rsp+80h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+18h]

  v2 = 0;
  v3 = PortCharacteristics;
  v28 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PortCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PortCharacteristics,
      23,
      10,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)NdisMiniportHandle);
  }
  if ( !(unsigned __int8)ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    v6 = -1073676286;
    goto LABEL_47;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v8 + 4) = 1;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  if ( (unsigned int)(*((_DWORD *)NdisMiniportHandle + 687) + 1) > 0x2AAAAAA )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
LABEL_9:
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v9);
LABEL_6:
    v6 = -1073741670;
LABEL_44:
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x64u);
LABEL_45:
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    goto LABEL_47;
  }
  v10 = *((_DWORD *)NdisMiniportHandle + 686);
  v11 = v10;
  v12 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
  Size = v10;
  if ( v12 )
  {
    v13 = 0LL;
    if ( v10 )
    {
      v14 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
      while ( *v14 == 0xFF )
      {
        v2 += 8;
        v13 = (unsigned int)(v13 + 1);
        ++v14;
        v28 = v2;
        if ( (unsigned int)v13 >= v10 )
          goto LABEL_15;
      }
      v15 = (unsigned __int8)v12[v13];
      v16 = 1;
      v17 = 0;
      while ( (v15 & v16) != 0 )
      {
        v16 *= 2;
        if ( (unsigned int)++v17 >= 8 )
          goto LABEL_15;
      }
      v12[v13] = v16 | v15;
      v2 += v17;
      goto LABEL_31;
    }
LABEL_15:
    v11 = *((_DWORD *)NdisMiniportHandle + 686);
  }
  if ( 8 * v10 + 1 >= 0x1000000 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    goto LABEL_9;
  }
  v18 = v10 + 1;
  if ( 8 * v18 + 1 < v11 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v9);
    v6 = -1073676267;
    goto LABEL_44;
  }
  v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6F70444Eu);
  v20 = v19;
  if ( !v19 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v9);
    v2 = v28;
    v6 = -1073741670;
    goto LABEL_44;
  }
  if ( v12 )
  {
    memmove(v19, v12, Size);
    v20[v18 - 1] = 1;
    ExFreePoolWithTag(v12, 0);
  }
  else
  {
    *v19 = 3;
    v28 = 1;
  }
  *((_QWORD *)NdisMiniportHandle + 342) = v20;
  v2 = v28;
  *((_DWORD *)NdisMiniportHandle + 686) = v18;
LABEL_31:
  v3->PortNumber = v2;
  v21 = 0;
  *(_OWORD *)(v8 + 3) = *(_OWORD *)&v3->Header.Type;
  *(_OWORD *)(v8 + 5) = *(_OWORD *)&v3->MediaConnectState;
  *(_OWORD *)(v8 + 7) = *(_OWORD *)&v3->RcvLinkSpeed;
  *(_OWORD *)(v8 + 9) = *(_OWORD *)&v3->RcvControlState;
  if ( (v3->Flags & 1) != 0 )
  {
    *((_DWORD *)v8 + 17) = *((_DWORD *)NdisMiniportHandle + 826);
    *((_DWORD *)v8 + 18) = *((_DWORD *)NdisMiniportHandle + 827);
    *((_DWORD *)v8 + 19) = *((_DWORD *)NdisMiniportHandle + 828);
    *((_DWORD *)v8 + 20) = *((_DWORD *)NdisMiniportHandle + 829);
  }
  v22 = (_DWORD *)*((_QWORD *)NdisMiniportHandle + 340);
  if ( v22 == (_DWORD *)((char *)NdisMiniportHandle + 2720) )
  {
LABEL_38:
    v24 = (__int64 *)*((_QWORD *)v22 + 1);
    v25 = *v24;
    if ( *(__int64 **)(*v24 + 8) != v24 )
      __fastfail(3u);
    *v8 = v25;
    v8[1] = v24;
    *(_QWORD *)(v25 + 8) = v8;
    *v24 = (__int64)v8;
    ++*((_DWORD *)NdisMiniportHandle + 687);
    v6 = 0;
    *((_DWORD *)v8 + 4) = 2;
  }
  else
  {
    v23 = *((_DWORD *)v8 + 7);
    while ( v22[7] != v23 )
    {
      if ( v22[7] <= v23 )
      {
        v22 = *(_DWORD **)v22;
        if ( v22 != (_DWORD *)((char *)NdisMiniportHandle + 2720) )
          continue;
      }
      goto LABEL_38;
    }
    v6 = -1073741270;
    v21 = 1;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v9);
  if ( v6 )
  {
    if ( !v21 )
      goto LABEL_45;
    goto LABEL_44;
  }
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x17u,
      0xBu,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)NdisMiniportHandle,
      v6,
      v2);
  return v6;
}
