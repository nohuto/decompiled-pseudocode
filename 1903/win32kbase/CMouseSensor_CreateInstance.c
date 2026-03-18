/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C0060090
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00600F4 (--0CBaseInput@@IEAA@K@Z.c)
 */

CBaseInput *CMouseSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  gpMouseSensor = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1224LL, 0x70694843u);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 1u);
    *((_QWORD *)v1 + 152) = 0LL;
    *(_QWORD *)v1 = &CMouseSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    gpMouseSensor = v1;
  return v1;
}
