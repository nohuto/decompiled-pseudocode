/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800B5610
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180015728 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(CMeterSoftware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  float *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm6_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-1C8h] BYREF
  char v14; // [rsp+28h] [rbp-1C0h]
  _BYTE v15[384]; // [rsp+30h] [rbp-1B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)this + 4);
  if ( !v7 )
    goto LABEL_9;
  if ( *((_DWORD *)this + 6) <= 0x20u )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, v15);
    v2 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 || v8 == -2147023174 )
      {
        ATL::CComPtrBase<IAudioMeter>::Release((_QWORD *)this + 4);
        v2 = 0;
      }
    }
    else if ( *((_DWORD *)this + 6) )
    {
      v9 = *((unsigned int *)this + 6);
      v10 = (float *)v15;
      do
      {
        v11 = *v10;
        v10 += 3;
        v5 = fmaxf(v11, v5);
        --v9;
      }
      while ( v9 );
    }
LABEL_9:
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    v12 = fminf(v5, 1.0);
    if ( v12 <= 0.0 )
      v12 = 0.0;
    *a2 = v12;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 606, v2);
    return (unsigned int)v2;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return 2147942487LL;
}
