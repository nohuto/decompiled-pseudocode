/*
 * XREFs of ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B04EC
 * Callers:
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AFEDC (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisOidPostIovDeleteVPort @ 0x1C00B24E0 (ndisOidPostIovDeleteVPort.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisIovDeleteVPort(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rsi
  KIRQL v6; // r9
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  _QWORD **v9; // rdx
  PVOID *v10; // rcx
  _QWORD **v11; // rdx
  PVOID *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD **v16; // r8
  PVOID *v17; // rdx
  void *v18; // rcx
  int v19; // edx

  LOBYTE(v2) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      49,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      0,
      0);
  v3 = P[9];
  v4 = P[10];
  v5 = P[11];
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v7 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P )
    goto LABEL_27;
  v8 = (PVOID *)P[1];
  if ( *v8 != P )
    goto LABEL_27;
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v3 + 4736);
  if ( v4 )
  {
    v9 = (_QWORD **)P[2];
    if ( v9[1] != P + 2 )
      goto LABEL_27;
    v10 = (PVOID *)P[3];
    if ( *v10 != P + 2 )
      goto LABEL_27;
    *v10 = v9;
    v9[1] = v10;
    --*(_DWORD *)(v4 + 824);
  }
  if ( v5 )
  {
    v11 = (_QWORD **)P[4];
    if ( v11[1] != P + 4 )
      goto LABEL_27;
    v12 = (PVOID *)P[5];
    if ( *v12 != P + 4 )
      goto LABEL_27;
    *v12 = v11;
    v11[1] = v12;
    --*(_DWORD *)(v5 + 48);
    *(_DWORD *)(v5 + 96) -= *((_DWORD *)P + 162);
  }
  v13 = P[12];
  if ( (P[8] & 2) != 0 )
  {
    v2 = P[12];
    if ( !v13 )
      goto LABEL_22;
    v14 = P[6];
    if ( *(_QWORD **)(v14 + 8) == P + 6 )
    {
      v15 = (_QWORD *)P[7];
      if ( (_QWORD *)*v15 == P + 6 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        --*(_DWORD *)(v2 + 76);
        goto LABEL_22;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
  if ( v13 )
  {
    v16 = (_QWORD **)P[6];
    if ( v16[1] != P + 6 )
      goto LABEL_27;
    v17 = (PVOID *)P[7];
    if ( *v17 != P + 6 )
      goto LABEL_27;
    *v17 = v16;
    v16[1] = v17;
    --*(_DWORD *)(v13 + 28);
  }
LABEL_22:
  *(_QWORD *)(v3 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  *(_BYTE *)(((unsigned __int64)*((unsigned int *)P + 31) >> 3) + *(_QWORD *)(v3 + 4760)) &= ~(1 << (*((_BYTE *)P + 124) & 7));
  P[112] = 0LL;
  v18 = (void *)P[111];
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    P[111] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      26,
      50,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v2,
      0);
  }
  return 0LL;
}
