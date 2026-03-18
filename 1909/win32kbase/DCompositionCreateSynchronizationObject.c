/*
 * XREFs of DCompositionCreateSynchronizationObject @ 0x1C019FCB0
 * Callers:
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01A0040 (NtDCompositionCreateSynchronizationObject.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0012A70 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0088260 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A1B94 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DCompositionCreateSynchronizationObject(struct DirectComposition::SynchronizationObject **a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  struct DirectComposition::SynchronizationObject *v4; // rdi
  _DWORD v6[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  struct DirectComposition::SynchronizationObject *v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A8h] [rbp+28h] BYREF
  struct DirectComposition::SynchronizationObject *v14; // [rsp+B0h] [rbp+30h] BYREF

  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (struct _ACL **)&v14);
  if ( v3 >= 0 )
  {
    v4 = v14;
    v6[1] = 0;
    v10 = 0;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v12 = 0LL;
    v6[0] = 48;
    v9 = 512;
    v11 = v14;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v6,
           3u,
           0LL,
           3,
           40,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DirectComposition::SynchronizationObject::ObjectInit,
           0LL,
           &Handle);
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::SynchronizationObject::ResolveHandle(Handle, 3u, 0, &v14);
      if ( v3 >= 0 )
        *a1 = v14;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v4);
  }
  return (unsigned int)v3;
}
