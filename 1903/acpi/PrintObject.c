/*
 * XREFs of PrintObject @ 0x1C006641C
 * Callers:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 *     ParseLocalObj @ 0x1C002A1B8 (ParseLocalObj.c)
 *     ParseArgObj @ 0x1C002A218 (ParseArgObj.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 * Callees:
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintBuffData @ 0x1C0066360 (PrintBuffData.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 */

ULONG __fastcall PrintObject(__int64 a1)
{
  int v2; // ecx
  const char *ObjectTypeName; // rax
  int v5; // edi

  v2 = *(unsigned __int16 *)(a1 + 2);
  switch ( v2 )
  {
    case 1:
      return ConPrintf("0x%I64x", *(_QWORD *)(a1 + 16));
    case 2:
      return ConPrintf("\"%s\"", *(_QWORD *)(a1 + 32));
    case 3:
      ConPrintf("Buffer(0x%x)", *(_DWORD *)(a1 + 24));
      return PrintBuffData(*(unsigned __int8 **)(a1 + 32), *(_DWORD *)(a1 + 24));
    case 4:
      ConPrintf("Package(%d){", **(_DWORD **)(a1 + 32));
      v5 = 0;
      while ( v5 < **(_DWORD **)(a1 + 32) )
      {
        ConPrintf("\n\t");
        PrintObject(*(_QWORD *)(a1 + 32) + 8 * (5LL * v5++ + 1));
        if ( v5 >= **(_DWORD **)(a1 + 32) )
          break;
        ConPrintf(",");
      }
      return ConPrintf("}");
    default:
      ObjectTypeName = (const char *)GetObjectTypeName(v2);
      return ConPrintf(
               "<Obj=%p,Type=%s,Value=0x%I64x,Buff=%p,Len=%d>",
               (const void *)a1,
               ObjectTypeName,
               *(_QWORD *)(a1 + 16),
               *(const void **)(a1 + 32),
               *(_DWORD *)(a1 + 24));
  }
}
