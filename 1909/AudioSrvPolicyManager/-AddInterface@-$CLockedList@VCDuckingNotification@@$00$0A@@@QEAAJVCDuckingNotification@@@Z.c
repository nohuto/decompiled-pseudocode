/*
 * XREFs of ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000C060
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180009D30 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000C5E0 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000C680 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?GrowBuffer@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@AEAA_N_K@Z @ 0x18000CAC8 (-GrowBuffer@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@AEAA_N_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::AddInterface(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // esi
  __int64 i; // rdx
  bool v6; // zf
  __int64 v7; // r8
  bool v8; // al
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r15
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v16; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v17; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    v7 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)i;
    if ( *(_DWORD *)(v7 + 8) == *(_DWORD *)(v2 + 8) )
    {
      if ( !*(_QWORD *)v7 || !*(_QWORD *)v2 )
      {
LABEL_10:
        v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
        break;
      }
      v8 = *(_QWORD *)v7 == *(_QWORD *)v2;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
      goto LABEL_10;
  }
  try
  {
    if ( !v6 )
    {
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      ++*(_DWORD *)(v3[1].SpinCount + 4 * i);
      goto LABEL_40;
    }
    try
    {
      v15 = v3 + 1;
      v21 = ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::Add(&v3[1], v2);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v13 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        _o__resetstkoflw();
      v4 = *(_DWORD *)v13;
      if ( *(int *)v13 < 0 )
      {
        v3 = a1;
        v2 = a2;
        goto LABEL_40;
      }
      v3 = a1;
      v2 = a2;
    }
    v4 = 0;
    DebugInfo = v3[2].DebugInfo;
    if ( (unsigned __int64)DebugInfo >= *(_QWORD *)&v3[2].LockCount )
    {
      try
      {
        if ( !(unsigned __int8)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::GrowBuffer(
                                 &v3[1].SpinCount,
                                 (char *)&DebugInfo->Type + 1) )
          ATL::AtlThrowImpl(-2147024882);
      }
      catch ( ATL::CAtlException *v17 )
      {
        v14 = v17;
        if ( *(_DWORD *)v17 == -1073741571 )
          _o__resetstkoflw();
        v4 = *(_DWORD *)v14;
        if ( *(int *)v14 < 0 )
          ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(v15, v21);
        v3 = a1;
        v2 = a2;
        goto LABEL_40;
      }
    }
    *(_DWORD *)(v3[1].SpinCount + 4LL * (_QWORD)DebugInfo) = 1;
    ++v3[2].DebugInfo;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v3 = a1;
    v2 = a2;
    v4 = *(_DWORD *)v18;
  }
LABEL_40:
  LeaveCriticalSection(v3);
  v10 = *(_QWORD *)(v2 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
  return v4;
}
