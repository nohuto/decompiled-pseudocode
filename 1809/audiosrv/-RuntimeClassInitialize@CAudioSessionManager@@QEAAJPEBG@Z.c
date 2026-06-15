/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18001EDE4
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x18001ED44 (--$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSe.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::RuntimeClassInitialize(CAudioSessionManager *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rdi
  CAudioSessionManager *v3; // rsi
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  struct IUnknown *v7; // rdi
  struct IUnknown *v8; // rcx
  bool v9; // r14
  struct IUnknown *v10; // rcx
  ATL::CAtlException *v12; // rbx
  CAudioSessionManager *v13; // rcx
  struct IUnknown *v14; // [rsp+20h] [rbp-48h] BYREF
  struct IUnknown *v15[2]; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v16; // [rsp+38h] [rbp-30h] BYREF
  CAudioSessionManager *v17; // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h]
  struct IUnknown *v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = a2;
  v17 = this;
  v15[1] = (struct IUnknown *)-2LL;
  try
  {
    v2 = a2;
    v3 = this;
    v14 = 0LL;
    v15[0] = 0LL;
    v20 = 0LL;
    v4 = (char *)this + 296;
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v4, a2, (unsigned int)v5);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v12 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v19 = *(_DWORD *)v12;
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_35;
    v3 = v17;
    v2 = v18;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                       + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         &v14);
  if ( v6 < 0 )
    goto LABEL_35;
  v7 = v14;
  v8 = v20;
  if ( !v20 )
  {
    if ( !v14 )
    {
LABEL_34:
      v6 = -2147024809;
      goto LABEL_35;
    }
    goto LABEL_9;
  }
  if ( !v14 )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v17 = 0LL;
  v18 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, CAudioSessionManager **))v20->lpVtbl->QueryInterface)(
    v20,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v17);
  ((void (__fastcall *)(struct IUnknown *, GUID *, const unsigned __int16 **))v7->lpVtbl->QueryInterface)(
    v7,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v18);
  v13 = v17;
  v9 = v17 == (CAudioSessionManager *)v18;
  if ( v18 )
  {
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)v18 + 16LL))(v18);
    v13 = v17;
  }
  if ( v13 )
    (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v13 + 16LL))(v13);
  v7 = v14;
  v8 = v20;
LABEL_10:
  if ( !v9 )
  {
    ATL::AtlComQIPtrAssign(&v20, v7, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c);
    v8 = v20;
  }
  if ( !v8 )
    goto LABEL_34;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v8->lpVtbl[2].Release)(v8, (__int64)v3 + 304);
  if ( v6 >= 0 )
  {
    v10 = v15[0];
    if ( v15[0] != v14 )
    {
      ATL::AtlComQIPtrAssign(v15, v14, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v10 = v15[0];
    }
    if ( v10 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[1].QueryInterface)(v10, (__int64)v3 + 312);
      if ( v6 >= 0 )
        goto LABEL_18;
      goto LABEL_35;
    }
    goto LABEL_34;
  }
LABEL_35:
  AudSrvTraceLoggingErrorHelper("CAudioSessionManager::RuntimeClassInitialize", 1511, v6);
LABEL_18:
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( v15[0] )
    ((void (__fastcall *)(struct IUnknown *))v15[0]->lpVtbl->Release)(v15[0]);
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  return (unsigned int)v6;
}
