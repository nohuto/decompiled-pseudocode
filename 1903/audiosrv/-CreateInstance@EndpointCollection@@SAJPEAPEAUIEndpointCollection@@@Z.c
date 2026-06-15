/*
 * XREFs of ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x1800545CC
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x180054100 (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x1800546D4 (--0EndpointCollection@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointCollection::CreateInstance(struct IEndpointCollection **a1)
{
  EndpointCollection *v2; // rbx
  EndpointCollection *v3; // rax
  int v4; // eax
  unsigned int v5; // edi

  v2 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v3 = (EndpointCollection *)operator new(0x70uLL);
    if ( v3 )
      v2 = EndpointCollection::EndpointCollection(v3);
    else
      v2 = 0LL;
    if ( v2 )
    {
      v4 = (**(__int64 (__fastcall ***)(EndpointCollection *, GUID *, struct IEndpointCollection **))v2)(
             v2,
             &GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32,
             a1);
      v5 = 0;
      if ( v4 < 0 )
        v5 = v4;
    }
    else
    {
      v5 = -2147024882;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( v2 )
    (*(void (__fastcall **)(EndpointCollection *))(*(_QWORD *)v2 + 16LL))(v2);
  return v5;
}
