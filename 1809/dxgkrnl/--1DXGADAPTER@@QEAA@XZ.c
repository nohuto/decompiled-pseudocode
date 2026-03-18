/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C01BC694
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C003B89C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0010EFC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C002D5CC (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C002D600 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C01BD144 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  char *v10; // rcx
  char *v11; // rbx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[315];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[315] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[316];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[316] = 0LL;
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
  v6 = this[320];
  if ( v6 )
  {
    operator delete[](v6);
    this[320] = 0LL;
  }
  v7 = this[484];
  if ( v7 )
    operator delete[](v7);
  v8 = this[515];
  if ( v8 )
    operator delete[](v8);
  v9 = this[517];
  if ( v9 )
    operator delete[](v9);
  if ( this[302] )
  {
    DXGADAPTER::DestroyPhysicalAdapterData((DXGADAPTER *)this);
    v10 = (char *)this[302];
    if ( v10 )
    {
      v11 = v10 - 8;
      `vector destructor iterator'(
        v10,
        352LL,
        *((_QWORD *)v10 - 1),
        (void (__fastcall *)(char *))CompositionSurfaceObject::SetPaired);
      operator delete[](v11);
    }
    this[302] = 0LL;
  }
  operator delete(this[524]);
  this[2] = 0LL;
}
