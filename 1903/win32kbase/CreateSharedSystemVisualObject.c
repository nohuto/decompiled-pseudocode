/*
 * XREFs of CreateSharedSystemVisualObject @ 0x1C009A530
 * Callers:
 *     <none>
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C00166E0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00806AC (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C008C4C0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(struct DirectComposition::ResourceObject **a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  HANDLE v4; // rsi
  __int64 v6; // [rsp+28h] [rbp-58h]
  _DWORD v7[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  HANDLE v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF
  struct DirectComposition::ResourceObject *v15; // [rsp+A8h] [rbp+28h] BYREF

  *a1 = 0LL;
  v3 = UserAllocDefaultCompositionSecurityDescriptor(0, (struct _ACL **)&Handle);
  if ( v3 >= 0 )
  {
    v4 = Handle;
    v7[1] = 0;
    v11 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v13 = 0LL;
    LODWORD(v6) = 64;
    v7[0] = 48;
    v10 = 512;
    v12 = Handle;
    v3 = CompositionObject::Create(
           v2,
           (__int64)v7,
           3u,
           0LL,
           1,
           v6,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           189LL,
           &Handle);
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, &v15);
      if ( v3 >= 0 )
        *a1 = v15;
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool((__int64)v4);
  }
  return (unsigned int)v3;
}
