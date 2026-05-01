/*
 * XREFs of ?SetTempAppVisuals@CAppLayoutOperation@@UEAAXPEAUITemporaryAppVisualArray@@@Z @ 0x1803A7350
 * Callers:
 *     ?SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z @ 0x1800C08B0 (-SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

void __fastcall CAppLayoutOperation::SetTempAppVisuals(CAppLayoutOperation *this, struct ITemporaryAppVisualArray *a2)
{
  struct ITemporaryAppVisualArray *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITemporaryAppVisualArray **)this + 7) != a2 )
  {
    v4 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
    v4 = (struct ITemporaryAppVisualArray *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
  }
}
