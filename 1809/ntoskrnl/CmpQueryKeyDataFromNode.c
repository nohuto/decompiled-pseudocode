/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1405D4570
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpQueryKeyData @ 0x1405D88B8 (CmpQueryKeyData.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1405AB548 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateNodeInformation @ 0x1405B014C (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x1405D47B0 (CmpPopulateBasicInformation.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1405D8C2C (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetKeyLastWriteTime @ 0x1406BAA24 (CmGetKeyLastWriteTime.c)
 *     CmpPopulateFullInformation @ 0x1406BD7BC (CmpPopulateFullInformation.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406BE7A8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 *     CmGetVisibleValueCount @ 0x1406C3A34 (CmGetVisibleValueCount.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  const void *v11; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 PrevElement; // rax
  __int64 v18; // r13
  int v19; // ebx
  unsigned __int16 v20; // ax
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned __int16 v23; // ax
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v26[6]; // [rsp+50h] [rbp-30h] BYREF

  v24 = 0xFFFFFFFFLL;
  v11 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( !a3 )
  {
    v25 = 0LL;
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v26[0] = v15;
        LODWORD(v26[1]) = 0;
        return CmpPopulateBasicInformation((unsigned int)v26, a2, a4, a5, (__int64)a6);
      }
    }
    else
    {
      v15 = *(_QWORD *)(a7 + 160);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 200, &v25, v13, v14);
        v18 = PrevElement;
        if ( !PrevElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v18 + 68) == 8 )
        {
          v15 = *(_QWORD *)(v18 + 88);
          goto LABEL_4;
        }
      }
    }
    goto LABEL_4;
  }
  v19 = a3 - 1;
  if ( !v19 )
  {
    v26[0] = CmGetKeyLastWriteTime(a7, a2, a8);
    v20 = *(_WORD *)(a2 + 74);
    LODWORD(v26[1]) = 0;
    if ( v20 )
    {
      v11 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a2 + 48),
                            &v24);
      v20 = *(_WORD *)(a2 + 74);
    }
    v21 = CmpPopulateNodeInformation((__int64)v26, a2, v11, v20, a4, a5, a6);
LABEL_13:
    v22 = v21;
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v24);
    return v22;
  }
  if ( v19 != 1 )
    return 3221225485LL;
  v26[0] = CmGetKeyLastWriteTime(a7, a2, a8);
  LODWORD(v26[1]) = 0;
  result = CmGetVisibleMaxNameLenAndClassLen(a7, a2, a8, (unsigned int)&v26[3], (__int64)&v26[3] + 4);
  if ( (int)result >= 0 )
  {
    result = CmGetVisibleMaxValueNameLenAndDataLen(a7, a2, a8, (unsigned int)&v26[4] + 4, (__int64)&v26[5]);
    if ( (int)result >= 0 )
    {
      HIDWORD(v26[2]) = CmGetVisibleSubkeyCount(a7, a2, a8);
      LODWORD(v26[4]) = CmGetVisibleValueCount(a7, a2, a8);
      v23 = *(_WORD *)(a2 + 74);
      if ( v23 )
      {
        v11 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(a2 + 48),
                              &v24);
        v23 = *(_WORD *)(a2 + 74);
      }
      v21 = CmpPopulateFullInformation(v26, v11, v23, a4, a5, a6);
      goto LABEL_13;
    }
  }
  return result;
}
