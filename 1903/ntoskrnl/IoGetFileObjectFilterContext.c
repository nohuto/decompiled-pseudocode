/*
 * XREFs of IoGetFileObjectFilterContext @ 0x140114E84
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x140114CA0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114D90 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406BE4C0 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  v4 = 0LL;
  if ( v3 )
    goto LABEL_2;
  if ( !a3 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  result = IopAllocateFileObjectExtension(a1, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD **)(a1 + 208);
    if ( !v3 )
    {
LABEL_4:
      result = 0LL;
      goto LABEL_5;
    }
LABEL_2:
    if ( v3 != IopRevocationExtension )
      v4 = v3[4];
    goto LABEL_4;
  }
LABEL_5:
  *a2 = v4;
  return result;
}
