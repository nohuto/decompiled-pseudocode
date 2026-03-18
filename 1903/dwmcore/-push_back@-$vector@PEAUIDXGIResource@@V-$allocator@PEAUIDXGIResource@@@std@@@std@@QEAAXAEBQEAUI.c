/*
 * XREFs of ?push_back@?$vector@PEAUIDXGIResource@@V?$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAXAEBQEAUIDXGIResource@@@Z @ 0x1800EA680
 * Callers:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015DE5C (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<IDXGIResource *>::push_back(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 result; // rax

  v3 = (__int64 *)a1[1];
  if ( (__int64 *)a1[2] == v3 )
    return std::vector<IDXGIResource *>::_Emplace_reallocate<IDXGIResource * const &>(a1, v3, a2);
  result = *a2;
  *v3 = *a2;
  a1[1] += 8LL;
  return result;
}
