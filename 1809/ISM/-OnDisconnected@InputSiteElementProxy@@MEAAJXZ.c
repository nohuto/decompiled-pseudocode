/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x18001F960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000C488 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  struct InputSiteManager *InputSiteManager; // rbp
  InputSiteElementProxy **v3; // rsi
  InputSiteElementProxy **i; // rbx
  InputSiteElementProxy **v5; // rdi
  InputSiteElementProxy *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  InputSiteManager = ISMStatics::GetInputSiteManager();
  v3 = (InputSiteElementProxy **)*((_QWORD *)InputSiteManager + 11);
  for ( i = (InputSiteElementProxy **)*((_QWORD *)InputSiteManager + 10); i != v3 && *i != this; ++i )
    ;
  v5 = i + 1;
  if ( i + 1 != v3 )
  {
    do
    {
      v6 = 0LL;
      if ( &v10 != (char *)v5 )
      {
        v6 = *v5;
        *v5 = 0LL;
      }
      v7 = (__int64)*(v5 - 1);
      *(v5 - 1) = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      ++v5;
    }
    while ( v5 != v3 );
    v3 = (InputSiteElementProxy **)*((_QWORD *)InputSiteManager + 11);
  }
  v8 = (__int64)*(v3 - 1);
  if ( v8 )
  {
    *(v3 - 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *((_QWORD *)InputSiteManager + 11) -= 8LL;
  return 0LL;
}
