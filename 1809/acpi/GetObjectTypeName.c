/*
 * XREFs of GetObjectTypeName @ 0x1C0062FC4
 * Callers:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     Store @ 0x1C000A740 (Store.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     Acquire @ 0x1C00226E0 (Acquire.c)
 *     Release @ 0x1C0022840 (Release.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     ProcessIncDec @ 0x1C002A1D0 (ProcessIncDec.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 *     DumpObject @ 0x1C0065214 (DumpObject.c)
 *     ResetSignal @ 0x1C00664D0 (ResetSignal.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ObjTypeSizeOf @ 0x1C0067A10 (ObjTypeSizeOf.c)
 *     Wait @ 0x1C0068B70 (Wait.c)
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
  if ( off_1C007F1B8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C007F1B0 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C007F1B0 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C007F1B0 + 2 * v2 + 1);
  }
  return result;
}
