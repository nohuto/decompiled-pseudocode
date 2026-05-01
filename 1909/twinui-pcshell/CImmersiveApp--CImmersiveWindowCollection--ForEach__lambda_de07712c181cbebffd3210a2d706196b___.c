/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___ @ 0x18015F820
 * Callers:
 *     ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x180165CB0 (-IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rsi
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  int IsWindowServiceSupported; // eax
  int v10; // ecx
  int v11; // ecx

  v2 = *(_QWORD *)(a1 + 176);
  v3 = 0LL;
  v6 = 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( !v6 )
        return;
      v6 = 1;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v3);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      IsWindowServiceSupported = CoreIsWindowServiceSupported(v8, a2 + 12);
      v10 = *(_DWORD *)(a2 + 8);
      if ( !v10 )
        break;
      v11 = v10 - 1;
      if ( !v11 )
        break;
      if ( v11 != 1 )
        goto LABEL_9;
      if ( IsWindowServiceSupported >= 0 )
      {
        **(_DWORD **)a2 = 1;
LABEL_9:
        v6 = 0;
      }
      if ( ++v3 >= v2 )
        return;
    }
    **(_DWORD **)a2 = IsWindowServiceSupported >= 0;
    goto LABEL_9;
  }
}
