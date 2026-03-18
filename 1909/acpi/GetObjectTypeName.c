/*
 * XREFs of GetObjectTypeName @ 0x1C0064F74
 * Callers:
 *     ProcessIncDec @ 0x1C0011BE0 (ProcessIncDec.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B48C (AMLIEvalPkgDataElement.c)
 *     Store @ 0x1C001B540 (Store.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     NewObjData @ 0x1C001BAD0 (NewObjData.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 *     WriteField @ 0x1C001C620 (WriteField.c)
 *     Release @ 0x1C001F230 (Release.c)
 *     Acquire @ 0x1C001F460 (Acquire.c)
 *     ReadField @ 0x1C001F540 (ReadField.c)
 *     AMLIEvalPackageElement @ 0x1C00246E0 (AMLIEvalPackageElement.c)
 *     CopyObjBuffer @ 0x1C002CBF4 (CopyObjBuffer.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 *     DumpObject @ 0x1C0067204 (DumpObject.c)
 *     ResetSignal @ 0x1C0068530 (ResetSignal.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     ObjTypeSizeOf @ 0x1C0069A70 (ObjTypeSizeOf.c)
 *     Wait @ 0x1C006ABD0 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  v2 = 0;
  if ( off_1C00811B8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00811B0 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00811B0 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C00811B0 + 2 * v2 + 1);
  }
  return result;
}
