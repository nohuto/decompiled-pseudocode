/*
 * XREFs of CmpIsKeyStackDeleted @ 0x1406334C0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpIsKeyDeleted @ 0x140633410 (CmpIsKeyDeleted.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x1406BB0C0 (CmpDoWritethroughReparse.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rdx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 i; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; v2 >= 0; --v2 )
  {
    v4 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v4 + 66) && *(_BYTE *)(v4 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v4 + 40) != -1 )
    {
      if ( !a2 )
        goto LABEL_7;
      NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 208LL, &i, 32LL);
      if ( !NextElement )
        goto LABEL_7;
      while ( 1 )
      {
        v8 = *(_DWORD *)(NextElement + 68);
        if ( v8 == 2 || v8 == 11 )
          break;
        NextElement = CmListGetNextElement(v7 + 208, &i, 32LL);
        if ( !NextElement )
          return NextElement;
      }
      if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) )
      {
LABEL_7:
        LOBYTE(NextElement) = 0;
        return NextElement;
      }
      break;
    }
  }
  LOBYTE(NextElement) = 1;
  return NextElement;
}
