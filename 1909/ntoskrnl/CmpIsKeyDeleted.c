/*
 * XREFs of CmpIsKeyDeleted @ 0x140636A00
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140669FD0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406F65CC (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x14082CB20 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmpSetKcbAtLayerHeight @ 0x140832E78 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  struct _LOOKASIDE_LIST_EX *v4; // r9
  __int16 v5; // bx
  struct _PRIVILEGE_SET *v6; // rdi
  __int64 v7; // rdx
  unsigned __int8 IsKeyStackDeleted; // bl
  SIZE_T v10; // r14
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v12; // r10
  __int64 v13; // r10
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v14, 0, 0x20uLL);
  v5 = *(_WORD *)(a1 + 66);
  v6 = 0LL;
  v7 = (unsigned __int16)v5;
  WORD1(v14[0]) = -1;
  if ( v5 >= 2 )
  {
    v7 = (unsigned __int16)v5;
    if ( v5 != 1 )
    {
      v10 = 8LL * (unsigned int)(v5 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v10, 0x35364D43u, v4);
      v6 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
LABEL_12:
        v6 = (struct _PRIVILEGE_SET *)v14[3];
        goto LABEL_4;
      }
      memset(TransientPoolWithTag, 0, v10);
      v7 = *(unsigned __int16 *)(a1 + 66);
    }
  }
  LOWORD(v14[0]) = v5;
  v14[3] = v6;
  WORD1(v14[0]) = v7;
  if ( !(_WORD)v7 )
  {
    v14[1] = a1;
    goto LABEL_4;
  }
  v12 = *(_QWORD *)(a1 + 192);
  if ( v12 )
  {
    do
    {
      CmpSetKcbAtLayerHeight(v14, v7, *(_QWORD *)(v12 + 16));
      v12 = *(_QWORD *)(v13 + 24);
      LOWORD(v7) = v7 - 1;
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_4:
  IsKeyStackDeleted = CmpIsKeyStackDeleted(v14, a2);
  if ( v6 )
    CmSiFreeMemory(v6);
  return IsKeyStackDeleted;
}
