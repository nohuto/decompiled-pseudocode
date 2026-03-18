/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1406650C0
 * Callers:
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmpQueryKeyData @ 0x140669BB8 (CmpQueryKeyData.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmListGetPrevElement @ 0x140635A48 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x14063BB38 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateBasicInformation @ 0x140665300 (CmpPopulateBasicInformation.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x140669F3C (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140669FD0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpPopulateNodeInformation @ 0x1406D2390 (CmpPopulateNodeInformation.c)
 *     CmGetKeyLastWriteTime @ 0x1406DB8EC (CmGetKeyLastWriteTime.c)
 *     CmpPopulateFullInformation @ 0x1406DF9A8 (CmpPopulateFullInformation.c)
 *     CmGetVisibleValueCount @ 0x1406E4F70 (CmGetVisibleValueCount.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 PrevElement; // rax
  __int64 v16; // r13
  int v17; // ebx
  unsigned __int16 v18; // ax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned __int16 v21; // ax
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[6]; // [rsp+50h] [rbp-30h] BYREF

  v8 = 0LL;
  v22 = 0xFFFFFFFFLL;
  memset(v24, 0, sizeof(v24));
  if ( !a3 )
  {
    v23 = 0LL;
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v24[0] = v13;
        LODWORD(v24[1]) = 0;
        return CmpPopulateBasicInformation((unsigned int)v24, a2, a4, a5, a6);
      }
    }
    else
    {
      v13 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 208, &v23);
        v16 = PrevElement;
        if ( !PrevElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v16 + 68) == 8 )
        {
          v13 = *(_QWORD *)(v16 + 88);
          goto LABEL_4;
        }
      }
    }
    goto LABEL_4;
  }
  v17 = a3 - 1;
  if ( !v17 )
  {
    v24[0] = CmGetKeyLastWriteTime(a7, a2, a8);
    v18 = *(_WORD *)(a2 + 74);
    LODWORD(v24[1]) = 0;
    if ( v18 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(a2 + 48), &v22);
      v18 = *(_WORD *)(a2 + 74);
    }
    v19 = CmpPopulateNodeInformation(v24, a2, v8, v18, a4, a5, a6);
LABEL_13:
    v20 = v19;
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v22);
    return v20;
  }
  if ( v17 != 1 )
    return 3221225485LL;
  v24[0] = CmGetKeyLastWriteTime(a7, a2, a8);
  LODWORD(v24[1]) = 0;
  result = CmGetVisibleMaxNameLenAndClassLen(a7, a2, a8, (unsigned int)&v24[3], (__int64)&v24[3] + 4);
  if ( (int)result >= 0 )
  {
    result = CmGetVisibleMaxValueNameLenAndDataLen(a7, a2, a8, (unsigned int)&v24[4] + 4, (__int64)&v24[5]);
    if ( (int)result >= 0 )
    {
      HIDWORD(v24[2]) = CmGetVisibleSubkeyCount(a7, a2, a8);
      LODWORD(v24[4]) = CmGetVisibleValueCount(a7, a2, a8);
      v21 = *(_WORD *)(a2 + 74);
      if ( v21 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(a2 + 48), &v22);
        v21 = *(_WORD *)(a2 + 74);
      }
      v19 = CmpPopulateFullInformation(v24, v8, v21, a4, a5, a6);
      goto LABEL_13;
    }
  }
  return result;
}
