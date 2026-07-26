/*
 * XREFs of NdisMAllocatePort @ 0x1C003D380
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  unsigned int v3; // r12d
  int v5; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  KIRQL v8; // r9
  unsigned int v9; // edx
  KIRQL v10; // dl
  _BYTE *v11; // rbp
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  _BYTE *v15; // rax
  unsigned int v16; // edi
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  _BYTE *v20; // rax
  _BYTE *v21; // r14
  char v22; // bp
  _QWORD *v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 *v26; // rdx
  __int64 v27; // rax
  KIRQL v29; // [rsp+70h] [rbp+8h]
  unsigned int Size; // [rsp+80h] [rbp+18h]

  v3 = 0;
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_q(0xAu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)NdisMiniportHandle);
  if ( !ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    v5 = -1073676286;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v7 + 4) = 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  v9 = *((_DWORD *)NdisMiniportHandle + 691) + 1;
  v29 = v8;
  *((_DWORD *)NdisMiniportHandle + 466) = 2359399;
  if ( v9 > 0x2AAAAAA )
    goto LABEL_8;
  v11 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 344);
  v12 = *((_DWORD *)NdisMiniportHandle + 690);
  v13 = v12;
  Size = v12;
  if ( v11 )
  {
    v14 = 0;
    if ( v12 )
    {
      v15 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 344);
      while ( *v15 == 0xFF )
      {
        v3 += 8;
        ++v14;
        ++v15;
        if ( v14 >= v12 )
          goto LABEL_15;
      }
      v17 = 1;
      v18 = 0;
      v19 = (unsigned __int8)v11[v14];
      while ( (v19 & v17) != 0 )
      {
        v17 *= 2;
        if ( (unsigned int)++v18 >= 8 )
          goto LABEL_15;
      }
      v11[v14] = v17 | v19;
      v3 += v18;
      goto LABEL_30;
    }
LABEL_15:
    v13 = *((_DWORD *)NdisMiniportHandle + 690);
  }
  if ( 8 * v12 + 1 >= 0x1000000 )
  {
LABEL_8:
    v10 = v8;
LABEL_9:
    *((_DWORD *)NdisMiniportHandle + 466) = 0;
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v10);
LABEL_6:
    v5 = -1073741670;
LABEL_43:
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x64u);
LABEL_44:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    goto LABEL_46;
  }
  v16 = v12 + 1;
  if ( 8 * v16 + 1 < v13 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    *((_DWORD *)NdisMiniportHandle + 466) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
    v5 = -1073676267;
    goto LABEL_43;
  }
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6F70444Eu);
  v21 = v20;
  if ( !v20 )
  {
    v10 = v29;
    goto LABEL_9;
  }
  if ( v11 )
  {
    memmove(v20, v11, Size);
    v21[v16 - 1] = 1;
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    *v20 = 3;
    v3 = 1;
  }
  v8 = v29;
  *((_QWORD *)NdisMiniportHandle + 344) = v21;
  *((_DWORD *)NdisMiniportHandle + 690) = v16;
LABEL_30:
  PortCharacteristics->PortNumber = v3;
  v22 = 0;
  *(_OWORD *)(v7 + 3) = *(_OWORD *)&PortCharacteristics->Header.Type;
  *(_OWORD *)(v7 + 5) = *(_OWORD *)&PortCharacteristics->MediaConnectState;
  *(_OWORD *)(v7 + 7) = *(_OWORD *)&PortCharacteristics->RcvLinkSpeed;
  *(_OWORD *)(v7 + 9) = *(_OWORD *)&PortCharacteristics->RcvControlState;
  if ( (PortCharacteristics->Flags & 1) != 0 )
  {
    *((_DWORD *)v7 + 17) = *((_DWORD *)NdisMiniportHandle + 832);
    *((_DWORD *)v7 + 18) = *((_DWORD *)NdisMiniportHandle + 833);
    *((_DWORD *)v7 + 19) = *((_DWORD *)NdisMiniportHandle + 834);
    *((_DWORD *)v7 + 20) = *((_DWORD *)NdisMiniportHandle + 835);
  }
  v23 = (_QWORD *)*((_QWORD *)NdisMiniportHandle + 342);
  if ( v23 == (_QWORD *)((char *)NdisMiniportHandle + 2736) )
  {
LABEL_37:
    v26 = (__int64 *)v23[1];
    v27 = *v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
      __fastfail(3u);
    *v7 = v27;
    v5 = 0;
    v7[1] = v26;
    *(_QWORD *)(v27 + 8) = v7;
    *v26 = (__int64)v7;
    ++*((_DWORD *)NdisMiniportHandle + 691);
    *((_DWORD *)v7 + 4) = 2;
  }
  else
  {
    v24 = *((_DWORD *)v7 + 7);
    while ( 1 )
    {
      v25 = *((_DWORD *)v23 + 7);
      if ( v25 == v24 )
        break;
      if ( v25 <= v24 )
      {
        v23 = (_QWORD *)*v23;
        if ( v23 != (_QWORD *)((char *)NdisMiniportHandle + 2736) )
          continue;
      }
      goto LABEL_37;
    }
    v5 = -1073741270;
    v22 = 1;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 466) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
  if ( v5 )
  {
    if ( !v22 )
      goto LABEL_44;
    goto LABEL_43;
  }
LABEL_46:
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qdD(0xBu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)NdisMiniportHandle, v5, v3);
  return v5;
}
