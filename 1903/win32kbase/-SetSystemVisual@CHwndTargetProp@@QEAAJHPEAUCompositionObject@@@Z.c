/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0063E50
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003EDB0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C0063F20 (DwmAsyncCreateDCompositionHwndTarget.c)
 *     ReferenceDwmApiPort @ 0x1C0063FD0 (ReferenceDwmApiPort.c)
 *     IsWindowDesktopComposed @ 0x1C0064070 (IsWindowDesktopComposed.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(
        CHwndTargetProp *this,
        int a2,
        struct CompositionObject *a3,
        __int64 a4)
{
  int DCompositionHwndTarget; // edi
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  DCompositionHwndTarget = 0;
  if ( !*((_QWORD *)this + 4) && !(unsigned int)IsWindowDesktopComposed(*((_QWORD *)this + 1))
    || (DCompositionHwndTarget = CompositionObject::OpenDwmHandle(a3, &v10, (__int64)a3, a4), DCompositionHwndTarget >= 0)
    && (v8 = (void *)ReferenceDwmApiPort(),
        DCompositionHwndTarget = DwmAsyncCreateDCompositionHwndTarget(v8),
        DCompositionHwndTarget >= 0) )
  {
    if ( a2 )
      *((_QWORD *)this + 2) = a3;
    else
      *((_QWORD *)this + 3) = a3;
    ObReferenceObjectByPointer(a3, 3u, ExCompositionObjectType, 0);
  }
  return (unsigned int)DCompositionHwndTarget;
}
