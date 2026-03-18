/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003404
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00020D0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C006E920 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(
        CSpatialProcessor *this,
        const struct _InputHitTestResult *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v2 = (void *)*((_QWORD *)a2 + 2);
  if ( v2 && (int)CompositionInputObject::ResolveHandle(v2, 1u, 1, (struct CompositionInputObject **)&Object) >= 0 )
  {
    v4 = Object;
    if ( (gInputSinkInfoRetrieval & 1) != 0 )
      qword_1C01D1794 = *((_QWORD *)Object + 2);
    if ( (gInputSinkInfoRetrieval & 4) != 0 )
    {
      xmmword_1C01D17A8 = *(_OWORD *)((char *)a2 + 24);
      xmmword_1C01D17B8 = *(_OWORD *)((char *)a2 + 40);
      xmmword_1C01D17C8 = *(_OWORD *)((char *)a2 + 56);
      xmmword_1C01D17D8 = *(_OWORD *)((char *)a2 + 72);
    }
    if ( (gInputSinkInfoRetrieval & 8) != 0 )
      dword_1C01D17E8 = *((_DWORD *)a2 + 36);
    if ( (gInputSinkInfoRetrieval & 2) != 0 && dword_1C01D178C == 6 )
    {
      CompositionInputObject::GetWindowForInputType(Object, 5, &Object);
      if ( Object )
        qword_1C01D17A0 = *(_QWORD *)Object;
    }
    ObfDereferenceObject(v4);
    dword_1C01D1790 = 1;
  }
}
