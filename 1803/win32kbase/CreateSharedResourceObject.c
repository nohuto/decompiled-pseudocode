/*
 * XREFs of CreateSharedResourceObject @ 0x1C0011D54
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000BACC (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C0142FA0 (NtDCompositionCreateSharedVisualHandle.c)
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0001EF0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C000FBE0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001C310 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall CreateSharedResourceObject(unsigned int a1, struct DirectComposition::ResourceObject **a2)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+28h] [rbp-58h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  v4 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000LL, &v15);
  if ( v4 >= 0 )
  {
    v5 = v15;
    Handle = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v13 = 0LL;
    LODWORD(v7) = 64;
    v8 = 48;
    v11 = 512;
    v12 = v15;
    v4 = CompositionObject::Create(
           (__int64)&Handle,
           (__int64)&v8,
           3u,
           0LL,
           1,
           v7,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
           v3,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3LL, 0LL, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v5);
  }
  return (unsigned int)v4;
}
