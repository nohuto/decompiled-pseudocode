/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C0036960
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0036AEC (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0036B4C (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  __int64 v8; // rcx
  int InputQueueForInputType; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v13[56]; // [rsp+70h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  InputQueueForInputType = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm(v8) )
    InputQueueForInputType = -1073741790;
  if ( InputQueueForInputType >= 0 )
  {
    InputQueueForInputType = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryInputQueueForInputType(Object, a2, v13);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryTransform(
                                 (CompositionInputObject *)Object,
                                 (struct tagINPUT_TRANSFORM *)v12);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( InputQueueForInputType >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)v13;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v13[16];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v13[32];
      *(_QWORD *)(a3 + 48) = *(_QWORD *)&v13[48];
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v12[0];
      a4[1] = v12[1];
      a4[2] = v12[2];
      a4[3] = v12[3];
    }
  }
  return (unsigned int)InputQueueForInputType;
}
