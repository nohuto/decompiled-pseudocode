/*
 * XREFs of ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x1800057C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180005460 (-UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBa.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800058B0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoControllerNavigationManagerPrincipal::SetEnabled(
        BamoControllerNavigationManagerPrincipal *this,
        char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  int updated; // eax
  int v9; // esi
  const char *v10; // r9
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h]

  v12 = -2;
  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
  {
    v14 = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
    v5 = v4;
  }
  *((_BYTE *)this + 48) = a2;
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v7 + 32) )
      {
        updated = BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)v7,
                    (BamoControllerNavigationManagerPrincipal *)((char *)this + 8));
        v9 = updated;
        if ( updated < 0 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)updated,
      -2);
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF335,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
    goto LABEL_15;
  }
  if ( !v5 )
    return;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v5 + 24));
  v11 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
  if ( v11 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v10);
    __debugbreak();
  }
  if ( !v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
