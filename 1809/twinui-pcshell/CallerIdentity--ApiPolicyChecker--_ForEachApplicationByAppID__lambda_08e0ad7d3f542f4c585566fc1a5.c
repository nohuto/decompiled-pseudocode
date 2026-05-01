/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a529b01___ @ 0x1803A18F8
 * Callers:
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1803A204C (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1803A1258 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_08e0ad7d3f542f4c585566fc1a529b01___(
        struct IUnknown *this,
        _QWORD *a2)
{
  struct IObjectArray **v4; // r8
  int AllApplicationsByAppID; // ebx
  bool v6; // si
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, (const unsigned __int16 *)&v12, v4);
  if ( AllApplicationsByAppID >= 0 )
  {
    v6 = 1;
    v7 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(
                                     v12,
                                     &v11); AllApplicationsByAppID >= 0; ++v7 )
    {
      if ( !v6 || v7 >= v11 )
        break;
      v10[0] = 0LL;
      v8 = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
      AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
                                 v8,
                                 v7,
                                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                                 v10);
      if ( AllApplicationsByAppID >= 0 )
      {
        AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 168LL))(v10[0], *a2);
        if ( AllApplicationsByAppID >= 0 )
          v6 = *(_DWORD *)*a2 == 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)AllApplicationsByAppID;
}
