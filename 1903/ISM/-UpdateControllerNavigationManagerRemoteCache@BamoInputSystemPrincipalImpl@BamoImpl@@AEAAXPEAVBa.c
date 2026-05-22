/*
 * XREFs of ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800043A0
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800030C0 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180065AA0 (-UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  void (__fastcall ***v13)(_QWORD); // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // [rsp+20h] [rbp-48h]
  _QWORD v19[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v9 = v7[4];
      v10 = v8;
      v11 = *(_DWORD *)(v8 + 36);
      if ( !v9 )
        goto LABEL_7;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 36LL) == v11 )
          break;
        v9 = *(_QWORD *)(v9 + 48);
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_7:
        v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v7 + 64LL))(v7, v10, &v21);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v12,
            v18);
          __debugbreak();
        }
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21);
        *(_QWORD *)(v9 + 24) = v7;
        v13 = *(void (__fastcall ****)(_QWORD))(v9 + 40);
        *(_QWORD *)(v9 + 40) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        if ( v13 )
          (**v13)(v13);
        *(_QWORD *)(v9 + 48) = v7[4];
        v7[4] = v9;
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(v10 + 48);
        *(_QWORD *)(v10 + 48) = v9;
      }
      if ( !*(_BYTE *)(v9 + 32) )
      {
        *(_BYTE *)(v9 + 32) = 1;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v7 + 56LL))(
          v7,
          *(_QWORD *)(*(_QWORD *)(v7[2] + 24LL) + 48LL),
          v9);
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
            (const char *)(unsigned int)v14,
            v18);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 16));
    }
    v15 = *(_QWORD *)(v4 + 48);
    v16 = *((unsigned int *)this + 6);
    v19[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v19[1] = v16;
    LOWORD(v18) = 6;
    v17 = CoreUICallSend(v15, v19, 2LL, 32LL);
    if ( (int)(v17 + 0x80000000) >= 0 && v17 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1AB5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v17,
        v18);
      JUMPOUT(0x18003ED2ELL);
    }
  }
}
