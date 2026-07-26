/*
 * XREFs of ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00780A0
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C0074850 (ndisOidPrePMRemoveWOLPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisXlateRemoveWolPatternToPacketPatternOid(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  int v8; // edx
  _QWORD *v9; // rdi
  __int64 OidSourceHandle; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // r9
  __int64 *v13; // rax
  char v14; // dl
  __int64 *v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rsi
  unsigned int v18; // r12d
  _DWORD *v19; // rax
  _DWORD *v20; // r14
  unsigned int v21; // ecx
  __int64 v22; // rdx
  _DWORD *v23; // rax
  unsigned int v24; // ecx

  v3 = 0;
  *a3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        114,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a2);
    }
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  *(_DWORD *)v9 = *(_DWORD *)(a2 + 32);
  v9[1] = *(_QWORD *)(a2 + 40);
  *((_DWORD *)v9 + 4) = *(_DWORD *)(a2 + 48);
  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v11 = *(_BYTE *)(a1 + 32);
  v12 = OidSourceHandle;
  if ( v11 > 6u || v11 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
  {
    v13 = *(__int64 **)(a1 + 968);
    v14 = 1;
  }
  else
  {
    v13 = *(__int64 **)(a1 + 960);
    v14 = 0;
  }
  if ( !v13 )
    goto LABEL_26;
  do
  {
    v15 = v13;
    if ( *((_DWORD *)v13 + 10) == *(_DWORD *)(a2 + 152) )
      break;
    v13 = (__int64 *)*v13;
    v15 = 0LL;
  }
  while ( v13 );
  if ( !v15 )
    goto LABEL_26;
  v16 = v15 + 1;
  if ( v15 == (__int64 *)-8LL )
    goto LABEL_26;
  do
  {
    v17 = v16 - 1;
    if ( v16[2] == v12 )
      break;
    v16 = (_QWORD *)*v16;
    v17 = 0LL;
  }
  while ( v16 );
  if ( !v17 )
    goto LABEL_26;
  if ( !v14 )
  {
    v18 = v17[14] + 24 + v17[16];
    v23 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x7877444Eu);
    v20 = v23;
    if ( !v23 )
      goto LABEL_21;
    memset(v23, 0, v18);
    *v20 = v17[12];
    v24 = v17[14];
    v20[2] = v24;
    v20[3] = v24 + 24;
    v20[4] = v17[16];
    memmove(v20 + 6, v17 + 18, v24);
    v22 = (unsigned int)v17[15];
    goto LABEL_25;
  }
  if ( v17[15] != 1 )
  {
LABEL_26:
    ExFreePoolWithTag(v9, 0);
    v3 = -1073676267;
    goto LABEL_27;
  }
  v18 = v17[55] + 24 + v17[53];
  v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x7877444Eu);
  v20 = v19;
  if ( !v19 )
  {
LABEL_21:
    ExFreePoolWithTag(v9, 0);
LABEL_4:
    v3 = -1073741670;
LABEL_27:
    *a3 = 1;
    return v3;
  }
  memset(v19, 0, v18);
  *v20 = v17[14];
  v21 = v17[53];
  v20[2] = v21;
  v20[3] = v21 + 24;
  v20[4] = v17[55];
  memmove(v20 + 6, (char *)v17 + (unsigned int)v17[52] + 48, v21);
  v22 = (unsigned int)v17[54];
LABEL_25:
  memmove((char *)v20 + (unsigned int)v20[3], (char *)v17 + v22 + 48, (unsigned int)v20[4]);
  v9[3] = v20;
  *(_DWORD *)(a2 + 32) = -50265852;
  *(_QWORD *)(a2 + 40) = v20;
  *(_DWORD *)(a2 + 48) = v18;
  *(_QWORD *)(a2 + 144) = v9;
  return v3;
}
