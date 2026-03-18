/*
 * XREFs of ReadObject @ 0x1C000B1A0
 * Callers:
 *     DerefOf @ 0x1C000B120 (DerefOf.c)
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 *     IncDec @ 0x1C0029A90 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0062BCC (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 * Callees:
 *     CopyObjData @ 0x1C000B268 (CopyObjData.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int16 v6; // ax
  __int64 v8; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_WORD *)(a2 + 2);
      if ( v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( v6 == 5 )
  {
    v5 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v9);
    if ( !v5 )
    {
      v8 = v9;
      *(_QWORD *)(v9 + 32) = a2;
      *(_DWORD *)(v8 + 16) = 0x10000;
      *(_QWORD *)(v8 + 40) = a3;
    }
  }
  else if ( v6 == 14 )
  {
    return (unsigned int)ReadField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
  }
  else
  {
    CopyObjData(a3, a2);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v5;
}
