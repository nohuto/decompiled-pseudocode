/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C01EC150
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00420E4 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C00326AC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C00326E0 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01ECD64 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  char *v8; // rcx
  char *v9; // rbx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[319];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[319] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[320];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[320] = 0LL;
  }
  v4 = (struct _ERESOURCE *)this[30];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(this[30]);
    this[30] = 0LL;
  }
  v5 = (struct _ERESOURCE *)this[18];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(this[18]);
    this[18] = 0LL;
  }
  v6 = this[324];
  if ( v6 )
  {
    operator delete[](v6);
    this[324] = 0LL;
  }
  v7 = this[488];
  if ( v7 )
    operator delete[](v7);
  if ( this[305] )
  {
    DXGADAPTER::DestroyPhysicalAdapterData((DXGADAPTER *)this);
    v8 = (char *)this[305];
    if ( v8 )
    {
      v9 = v8 - 8;
      `vector destructor iterator'(
        v8,
        352LL,
        *((_QWORD *)v8 - 1),
        (void (__fastcall *)(char *))CompositionSurfaceObject::SetPaired);
      operator delete[](v9);
    }
    this[305] = 0LL;
  }
  operator delete(this[523]);
  this[2] = 0LL;
}
