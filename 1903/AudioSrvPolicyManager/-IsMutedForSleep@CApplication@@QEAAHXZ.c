/*
 * XREFs of ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x18000FAC0
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001C264 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_Sd @ 0x18000D974 (WPP_SF_Sd.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180013FF0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 */

__int64 __fastcall CApplication::IsMutedForSleep(CApplication *this)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  char v6[4]; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2];
      v2 = (_QWORD *)*v2;
      if ( !*(_DWORD *)(v4 + 448) && CProcess::GetSessionDisplayPolicyVolume((CProcess *)(v4 + 16)) < 0.000099999997 )
        break;
      if ( !v2 )
        goto LABEL_5;
    }
    v3 = 1;
  }
LABEL_5:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    *(_DWORD *)v6 = v3;
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      &WPP_c27ef931432c3833a68ea220b2e62ed9_Traceguids,
      *((const wchar_t **)this + 3),
      *(_DWORD *)v6);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
