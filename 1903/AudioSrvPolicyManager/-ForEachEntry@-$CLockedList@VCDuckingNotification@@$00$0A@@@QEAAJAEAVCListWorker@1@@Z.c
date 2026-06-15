/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000BD60
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000A500 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000A750 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18000A8FC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000AA50 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000A0A0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000C624 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000CDFC (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000D39C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  LPCRITICAL_SECTION v2; // rsi
  char *v3; // rdi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned int i; // r14d
  unsigned int j; // esi
  char *v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-80h] BYREF
  char *v13; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  int v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  int v18; // [rsp+60h] [rbp-48h]
  char v19[8]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  unsigned __int64 v24; // [rsp+C8h] [rbp+20h]

  v2 = lpCriticalSection;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v5 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(
        &v13,
        (char *)v2[1].DebugInfo + 32 * i);
      v24 = ++v5;
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v2 = lpCriticalSection;
      v5 = v24;
    }
    v4 = v14;
    v3 = v13;
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v5; ++j )
  {
    if ( j >= v4 )
      ATL::AtlThrowImpl(-2147024809);
    v8 = &v3[32 * j];
    v17 = *(_QWORD *)v8;
    v18 = *((_DWORD *)v8 + 2);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v19,
      v8 + 16);
    v10 = *((_QWORD *)v8 + 3);
    v20 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    CGenerateDuckingNotification::Invoke(a2, &v17, v9);
  }
  if ( v3 )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(v3, v4);
    free(v3);
  }
  return 0LL;
}
