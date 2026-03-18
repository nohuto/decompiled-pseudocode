/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C00023C0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002DB0 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0002E40 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  int InputQueueForInputType; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v11[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v12[56]; // [rsp+70h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  InputQueueForInputType = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    InputQueueForInputType = -1073741790;
  if ( InputQueueForInputType >= 0 )
  {
    InputQueueForInputType = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryInputQueueForInputType(Object, a2, v12);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryTransform(
                                 (CompositionInputObject *)Object,
                                 (struct tagINPUT_TRANSFORM *)v11);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( InputQueueForInputType >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)v12;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v12[16];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v12[32];
      *(_QWORD *)(a3 + 48) = *(_QWORD *)&v12[48];
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v11[0];
      a4[1] = v11[1];
      a4[2] = v11[2];
      a4[3] = v11[3];
    }
  }
  return (unsigned int)InputQueueForInputType;
}
