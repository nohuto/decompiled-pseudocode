/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18000CE74
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000D040 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000D220 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x18000F548 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingNotification::Init(
        CDuckingNotification *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp+10h]

  v6 = 0;
  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    *(_QWORD *)v8 = &CDuckingNotification::CSharedNotificationData::`vftable';
    v8[4] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *((_QWORD *)this + 3) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
LABEL_11:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v6);
    }
    AudPolicyLogError("CDuckingNotification::Init", 493, v6);
    return v6;
  }
  if ( !a3 )
    return v6;
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
      (char *)this + 16,
      a3);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v14 = *(_DWORD *)v12;
    v6 = *(_DWORD *)v12;
    if ( v14 < 0 )
      goto LABEL_11;
  }
  return v6;
}
