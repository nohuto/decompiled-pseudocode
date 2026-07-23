/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140645670
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v4; // rcx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 < 2 ? *(_QWORD *)(a1 + 8LL * v2 + 8) : *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16);
    if ( *(_WORD *)(v4 + 58) && *(_BYTE *)(v4 + 57) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 32) != -1 )
    {
      if ( !a2 )
        goto LABEL_17;
      NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &i, 32LL);
      if ( !NextElement )
        goto LABEL_17;
      while ( 1 )
      {
        v8 = *(_DWORD *)(NextElement + 68);
        if ( v8 == 2 || v8 == 11 )
          break;
        NextElement = CmListGetNextElement(v6 + 200, &i, 32LL);
        if ( !NextElement )
          return NextElement;
      }
      if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v7) )
      {
LABEL_17:
        LOBYTE(NextElement) = 0;
        return NextElement;
      }
      break;
    }
  }
  LOBYTE(NextElement) = 1;
  return NextElement;
}
