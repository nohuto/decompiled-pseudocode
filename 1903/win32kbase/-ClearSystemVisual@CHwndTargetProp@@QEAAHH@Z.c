/*
 * XREFs of ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C0063D00
 * Callers:
 *     ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C0063CC0 (-Delete@CHwndTargetProp@@UEAAXXZ.c)
 * Callees:
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1C0063DB0 (DwmAsyncDestroyDCompositionHwndTarget.c)
 *     ReferenceDwmApiPort @ 0x1C0063FD0 (ReferenceDwmApiPort.c)
 *     IsWindowDesktopComposed @ 0x1C0064070 (IsWindowDesktopComposed.c)
 */

__int64 __fastcall CHwndTargetProp::ClearSystemVisual(CHwndTargetProp *this, int a2)
{
  unsigned int v2; // edi
  void *v4; // rcx
  __int64 v5; // rbx
  void *v6; // rax
  void *v8; // rcx

  v2 = 0;
  if ( a2 )
  {
    v8 = (void *)*((_QWORD *)this + 2);
    if ( !v8 )
      return v2;
    ObfDereferenceObject(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  else
  {
    v4 = (void *)*((_QWORD *)this + 3);
    if ( !v4 )
      return v2;
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( *((_QWORD *)this + 4) || (v5 = *((_QWORD *)this + 1), v2 = 1, v5) && (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v6 = (void *)ReferenceDwmApiPort();
    DwmAsyncDestroyDCompositionHwndTarget(v6);
    return 1;
  }
  return v2;
}
