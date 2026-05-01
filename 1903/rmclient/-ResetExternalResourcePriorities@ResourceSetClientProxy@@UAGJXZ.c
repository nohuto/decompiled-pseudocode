/*
 * XREFs of ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UAGJXZ @ 0x10014CE0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall ResourceSetClientProxy::ResetExternalResourcePriorities(ResourceSetClientProxy *this)
{
  _DWORD *v1; // eax
  int v2; // ecx
  unsigned int *v3; // esi
  unsigned int *v4; // edx
  unsigned int i; // ecx
  unsigned int v6; // eax
  _BYTE v8[1128]; // [esp+8h] [ebp-46Ch] BYREF

  v1 = &v8[16];
  v2 = 47;
  do
  {
    *(v1 - 4) = -1;
    *(v1 - 2) = 0;
    *(v1 - 1) = 0;
    *v1 = 101;
    v1 += 6;
    *((_WORD *)v1 - 10) = 0;
    --v2;
  }
  while ( v2 );
  memset(v8, 0, sizeof(v8));
  v3 = (unsigned int *)((char *)this + 196);
  v4 = (unsigned int *)v8;
  for ( i = 3; i < 0x32; ++i )
  {
    v6 = *v3++;
    *v4 = i;
    v4[4] = v6;
    v4 += 6;
  }
  return (*(int (__fastcall **)(_DWORD, unsigned int *, ResourceSetClientProxy *, int, _BYTE *))(*(_DWORD *)this + 56))(
           *(_DWORD *)(*(_DWORD *)this + 56),
           v4,
           this,
           47,
           v8);
}
