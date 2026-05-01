/*
 * XREFs of ?Skip@CEnumerableObjectCollection@@UEAAJK@Z @ 0x1800F3100
 * Callers:
 *     ?Skip@CEnumerableObjectCollection@@W7EAAJK@Z @ 0x18009BC70 (-Skip@CEnumerableObjectCollection@@W7EAAJK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEnumerableObjectCollection::Skip(CEnumerableObjectCollection *this, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = *((_DWORD *)this + 6);
  v3 = v2 + a2;
  if ( v2 + a2 >= *((_DWORD *)this + 10) )
    v3 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 6) = v3;
  return v3 - v2 < a2;
}
