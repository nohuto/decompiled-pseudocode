/*
 * XREFs of ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013030
 * Callers:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C00108D0 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0001B64 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001312C (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 *     CreateSharedResourceObject @ 0x1C0013170 (CreateSharedResourceObject.c)
 *     GetSharedResourceData @ 0x1C0013264 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        PVOID *a3)
{
  int v6; // ebx
  PVOID v7; // rdi
  _DWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall *v10)(char *, _QWORD, PVOID *); // [rsp+30h] [rbp-28h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( (unsigned __int8)GetSharedResourceData(a2, v9) )
  {
    Object = 0LL;
    v6 = CreateSharedResourceObject(v9[0], &Object);
    if ( v6 >= 0 )
    {
      v7 = Object;
      if ( v10 )
      {
        v6 = v10((char *)Object + 24, a2, &Object);
        if ( v6 >= 0 )
        {
          v6 = DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
                 this,
                 (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v6 < 0
            || (v6 = DirectComposition::CApplicationChannel::RegisterResource(
                       this,
                       (struct DirectComposition::CResourceMarshaler *)Object),
                v6 < 0) )
          {
            if ( Object )
              (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Object + 104LL))(Object, 1LL);
          }
          else
          {
            *a3 = Object;
          }
        }
      }
      else
      {
        v6 = -1073741811;
      }
      ObfDereferenceObject(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
