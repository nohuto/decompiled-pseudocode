/*
 * XREFs of CreateResourceManagerProxy @ 0x100077AD
 * Callers:
 *     ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8 (-GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z.c)
 *     _RmAccessCheck@8 @ 0x1000A030 (_RmAccessCheck@8.c)
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 */

int CreateResourceManagerProxy()
{
  _DWORD *v0; // eax
  signed int v1; // edi

  v0 = operator new(8u);
  if ( v0 )
  {
    v0[1] = 0;
    *v0 = &ResourceManagerProxy::`vftable';
  }
  else
  {
    v0 = 0;
  }
  dword_10018418 = (int)v0;
  if ( !v0 )
    return -2147024882;
  v1 = (unsigned int)&_ImageBase | CempRpcBindToServer(dword_10002DE0);
  if ( v1 >= 0 )
    v1 = 0;
  if ( v1 >= 0 )
    return 0;
  if ( dword_10018418 )
  {
    (**(void (__thiscall ***)(int, int))dword_10018418)(dword_10018418, 1);
    dword_10018418 = 0;
  }
  return v1;
}
