/*
 * XREFs of CreateSharedResourceObject @ 0x1C0013170
 * Callers:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013030 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C01661F0 (NtDCompositionCreateSharedVisualHandle.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001CFB0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C006E8E0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0076774 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall CreateSharedResourceObject(__int64 a1, struct DirectComposition::ResourceObject **a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  int v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+38h] BYREF

  v3 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000LL, &v13);
  if ( v3 >= 0 )
  {
    v4 = v13;
    Handle = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v11 = 0LL;
    v6 = 48;
    v9 = 512;
    v10 = v13;
    v3 = CompositionObject::Create(&Handle, &v6, 3LL);
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::ResourceObject::ResolveHandle(Handle, 3u, 0, a2);
      ObCloseHandle(Handle, 0);
    }
    Win32FreePool(v4);
  }
  return (unsigned int)v3;
}
