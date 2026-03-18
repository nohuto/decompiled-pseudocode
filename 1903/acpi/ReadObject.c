/*
 * XREFs of ReadObject @ 0x1C001BF34
 * Callers:
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     DerefOf @ 0x1C001BE00 (DerefOf.c)
 *     IncDec @ 0x1C001BE80 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0064B58 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C006688C (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 * Callees:
 *     ReadField @ 0x1C001F540 (ReadField.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
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
    if ( a3 != a2 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a2;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 8LL), 1u);
      }
      else if ( *(_QWORD *)(a2 + 32) )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = a2;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v5;
}
