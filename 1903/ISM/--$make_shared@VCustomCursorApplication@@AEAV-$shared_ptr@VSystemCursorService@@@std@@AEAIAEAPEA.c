/*
 * XREFs of ??$make_shared@VCustomCursorApplication@@AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication@@@0@AEAV?$shared_ptr@VSystemCursorService@@@0@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8C90
 * Callers:
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C93F0 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8298 (--$-0AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientPro.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CustomCursorApplication,std::shared_ptr<SystemCursorService> &,unsigned int &,BamoCustomCursorControllerClientProxy * &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  void *v10; // [rsp+40h] [rbp+8h]

  v10 = operator new(0x80uLL);
  v8 = std::_Ref_count_obj<CustomCursorApplication>::_Ref_count_obj<CustomCursorApplication>((__int64)v10, a2, a3, a4);
  *a1 = v8 + 16;
  a1[1] = v8;
  return a1;
}
