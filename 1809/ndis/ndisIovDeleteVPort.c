/*
 * XREFs of ndisIovDeleteVPort @ 0x1C006FBA4
 * Callers:
 *     ndisOidPostIovDeleteVPort @ 0x1C0070C90 (ndisOidPostIovDeleteVPort.c)
 *     ndisIovCreateVPort @ 0x1C00F8C80 (ndisIovCreateVPort.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisIovDeleteVPort(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  KIRQL v6; // r9
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  _QWORD **v9; // rdx
  PVOID *v10; // rcx
  _QWORD **v11; // rcx
  PVOID *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD **v16; // rdx
  PVOID *v17; // r8
  void *v18; // rcx
  int v20; // [rsp+20h] [rbp-28h]

  v2 = 0LL;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qq(0x31u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, 0LL, 0LL);
  v3 = P[9];
  v4 = P[10];
  v5 = P[11];
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1864) = 2888123;
  v7 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P )
    goto LABEL_27;
  v8 = (PVOID *)P[1];
  if ( *v8 != P )
    goto LABEL_27;
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v3 + 4776);
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
  *(_DWORD *)(v3 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
  *(_BYTE *)(((unsigned __int64)*((unsigned int *)P + 31) >> 3) + *(_QWORD *)(v3 + 4800)) &= ~(1 << (*((_BYTE *)P + 124) & 7));
  P[112] = 0LL;
  v18 = (void *)P[111];
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    P[111] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v20 = 0;
    WPP_SF_qqd(0x32u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v2, v20);
  }
  return 0LL;
}
