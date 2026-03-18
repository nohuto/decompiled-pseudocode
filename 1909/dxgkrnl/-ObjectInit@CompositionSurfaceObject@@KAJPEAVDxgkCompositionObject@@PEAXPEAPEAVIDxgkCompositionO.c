/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0019A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( a1 )
  {
    *(_QWORD *)a1 = &CompositionSurfaceObject::`vftable'{for `DxgkCompositionObject'};
    *((_QWORD *)a1 + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
    v3 = (__int64)a1 + 40;
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 8) = 0LL;
    *((_QWORD *)a1 + 5) = &CCompositionSurface::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 6) = &CCompositionSurface::`vftable'{for `CPushLock'};
    *((_QWORD *)a1 + 17) = 0LL;
  }
  else
  {
    v3 = 40LL;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)a1 + 19) = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 14) = (char *)a1 + 104;
  *((_QWORD *)a1 + 13) = (char *)a1 + 104;
  result = 0LL;
  *((_QWORD *)a1 + 15) = 0LL;
  *((_BYTE *)a1 + 128) = 0;
  *((_BYTE *)a1 + 72) = 1;
  return result;
}
