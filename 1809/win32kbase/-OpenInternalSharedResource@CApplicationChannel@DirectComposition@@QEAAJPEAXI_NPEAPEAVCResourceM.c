/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C007C904
 * Callers:
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C007C86C (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0001B64 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001312C (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     GetSharedResourceData @ 0x1C0013264 (GetSharedResourceData.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C006E8E0 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CConnection **this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  __int64 v8; // r8
  char v9; // r9
  void *v10; // r10
  __int64 (__fastcall *v11)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // rdi
  __int64 v12; // rdx
  int v13; // eax
  struct DirectComposition::CResourceMarshaler **v14; // rsi
  int v15; // ebx
  _BYTE v17[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall *v18)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+28h] [rbp-18h]
  __int64 (__fastcall *v19)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // [rsp+30h] [rbp-10h]

  v5 = Object;
  *Object = 0LL;
  if ( GetSharedResourceData(a3, (__int64)v17) )
  {
    LOBYTE(v8) = 1;
    if ( v9 )
    {
      v11 = v19;
      v12 = 2LL;
    }
    else
    {
      v11 = v18;
      v12 = 1LL;
    }
    v13 = DirectComposition::ResourceObject::ResolveHandle(
            v10,
            v12,
            v8,
            (struct DirectComposition::ResourceObject **)&Object);
    v14 = Object;
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        v15 = v11(Object + 3, a3, &Object);
        if ( v15 >= 0 )
        {
          v15 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v15 < 0
            || (v15 = DirectComposition::CApplicationChannel::RegisterResource(
                        (DirectComposition::CApplicationChannel *)this,
                        (struct DirectComposition::CResourceMarshaler *)Object),
                v15 < 0) )
          {
            if ( Object )
              (*((void (__fastcall **)(struct DirectComposition::CResourceMarshaler **, __int64))*Object + 13))(
                Object,
                1LL);
          }
          else
          {
            *v5 = (struct DirectComposition::CResourceMarshaler *)Object;
          }
        }
      }
      else
      {
        v15 = -1073741811;
      }
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
