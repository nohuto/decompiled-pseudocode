/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C00C981C
 * Callers:
 *     MagpRevokeInputTransfrom @ 0x1C00C97E0 (MagpRevokeInputTransfrom.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     FreeDesktop @ 0x1C0132530 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01BC168 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01EC9B4 (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01ECA30 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     AcquireMagInputLock @ 0x1C01ECA68 (AcquireMagInputLock.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // [rsp+20h] [rbp-30h] BYREF
  __int128 v28; // [rsp+30h] [rbp-20h]
  __int128 v29; // [rsp+40h] [rbp-10h]

  v5 = *((_DWORD *)a1 + 8);
  v6 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v5 )
  {
    if ( !*(_QWORD *)(v6 + 216) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v19 = *a1;
      *(_QWORD *)&v29 = gptiCurrent;
      v20 = a1[1];
      v27 = v19;
      v28 = v20;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v27);
      AcquireMagInputLock();
      v21 = (_OWORD *)Win32AllocPool(48LL, 1735226197LL);
      *(_QWORD *)(v6 + 216) = v21;
      if ( !v21 )
      {
        UserSetLastError(14LL, v22, v23, v24);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v10 = 804LL;
      v25 = v28;
      *v21 = v27;
      v26 = v29;
      v21[1] = v25;
      v21[2] = v26;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v5 <= 0 )
    goto LABEL_7;
  if ( v5 > 2 )
  {
    if ( v5 == 3 )
    {
      v7 = *(_QWORD *)(v6 + 216);
      if ( !v7 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v7 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(_QWORD *)(v6 + 216));
        v10 = 805LL;
        *(_QWORD *)(v6 + 216) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1LL, v10, 0LL, 0LL);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v9 = 87LL;
LABEL_22:
    UserSetLastError(v9, a2, a3, a4);
    return 0LL;
  }
  v11 = *(_QWORD *)(v6 + 216);
  if ( !v11 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v11 + 32) )
  {
LABEL_21:
    v9 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v12 = *((_DWORD *)a1 + 8) == 1;
  v13 = *(_QWORD *)(v6 + 216);
  v14 = *(_OWORD *)(v13 + 32);
  v28 = *(_OWORD *)(v13 + 16);
  v15 = *a1;
  v29 = v14;
  v27 = v15;
  if ( v12 )
    v28 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v27);
  AcquireMagInputLock();
  v16 = *(_OWORD **)(v6 + 216);
  v17 = v28;
  *v16 = v27;
  v18 = v29;
  v16[1] = v17;
  v16[2] = v18;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
