/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003DB0
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001980 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
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
      qword_1C02161A4 = *((_QWORD *)Object + 2);
    if ( (gInputSinkInfoRetrieval & 4) != 0 )
    {
      xmmword_1C02161B8 = *(_OWORD *)((char *)a2 + 24);
      xmmword_1C02161C8 = *(_OWORD *)((char *)a2 + 40);
      xmmword_1C02161D8 = *(_OWORD *)((char *)a2 + 56);
      xmmword_1C02161E8 = *(_OWORD *)((char *)a2 + 72);
    }
    if ( (gInputSinkInfoRetrieval & 8) != 0 )
      dword_1C02161F8 = *((_DWORD *)a2 + 24);
    if ( (gInputSinkInfoRetrieval & 2) != 0 && dword_1C021619C == 6 )
    {
      CompositionInputObject::GetWindowForInputType(Object, 5, &Object);
      if ( Object )
        qword_1C02161B0 = *(_QWORD *)Object;
    }
    ObfDereferenceObject(v4);
    dword_1C02161A0 = 1;
  }
}
