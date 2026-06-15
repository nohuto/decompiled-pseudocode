/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18001DBC4
 * Callers:
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180021FFC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180022350 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sd @ 0x18000D974 (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x180018364 (WPP_SF_Sg.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CApplicationManager *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(*(_QWORD *)g_VolumeProvider + 48LL))(
         g_VolumeProvider,
         a2,
         &v18);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 3134LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_19;
  }
  if ( a5 )
  {
    v14 = a6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v16 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, a2, v16);
    }
    v9 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v18 + 144LL))(
           v18,
           v14,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
           0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = 3141LL;
      goto LABEL_17;
    }
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, a2, a4);
    }
    v9 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *, _QWORD))(*(_QWORD *)v18 + 56LL))(
           v18,
           v10,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
           0LL);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = 3149LL;
      goto LABEL_17;
    }
  }
  v12 = 0;
LABEL_19:
  if ( v18 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v8 )
    LeaveCriticalSection(v8);
  return v12;
}
