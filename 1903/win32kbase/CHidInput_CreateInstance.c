/*
 * XREFs of CHidInput_CreateInstance @ 0x1C005FFA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C00600F4 (--0CBaseInput@@IEAA@K@Z.c)
 */

CBaseInput *CHidInput_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  gpHidInput = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1312LL, 0x70694843u);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 0x3Cu);
    *((_DWORD *)v1 + 304) = 0;
    *(_QWORD *)v1 = &CHidInput::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    gpHidInput = v1;
  return v1;
}
