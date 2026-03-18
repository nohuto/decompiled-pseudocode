/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C0067CF0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C006747C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     AllocateWindowManagerSid @ 0x1C00115D0 (AllocateWindowManagerSid.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v0 = AllocateWindowManagerSid(&v3);
  if ( v0 >= 0 )
  {
    v0 = RtlCheckTokenMembership(0LL, v3, &v2);
    if ( v0 >= 0 && !v2 )
      v0 = -1073741720;
    Win32FreePool(v3);
  }
  return (unsigned int)v0;
}
