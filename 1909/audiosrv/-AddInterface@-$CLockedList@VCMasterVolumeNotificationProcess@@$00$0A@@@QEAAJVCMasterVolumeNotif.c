/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18004EE6C
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18004EE20 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18004EF0C (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x18004EF58 (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18004F7A4 (-RemoveAt@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotific.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  LPCRITICAL_SECTION v3; // rdi
  unsigned int v4; // esi
  __int64 i; // rdx
  bool v6; // zf
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v11; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v12; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h]
  __int64 v16; // [rsp+88h] [rbp+20h]

  v14 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    if ( *((_DWORD *)&v3[1].DebugInfo->Type + i) == a2 )
    {
      v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
      break;
    }
  }
  if ( v6 )
  {
    try
    {
      v16 = 0LL;
      v10 = v3 + 1;
      v16 = ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
              &v3[1],
              &v14);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v8 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v15 = *(_DWORD *)v8;
      v4 = v15;
      if ( v15 < 0 )
      {
        v3 = lpCriticalSection;
        goto LABEL_5;
      }
      v3 = lpCriticalSection;
    }
    try
    {
      v4 = 0;
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v3[1].SpinCount);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v9 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v15 = *(_DWORD *)v9;
      v4 = v15;
      if ( v15 < 0 )
        ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
          v10,
          v16);
      v3 = lpCriticalSection;
    }
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(v3[1].SpinCount + 4 * i);
  }
LABEL_5:
  LeaveCriticalSection(v3);
  return v4;
}
