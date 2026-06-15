/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400402B0
 * Callers:
 *     ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001DB70 (-CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x1400177D4 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140034BB0 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400350CC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct _RTL_CRITICAL_SECTION *a4)
{
  LPCRITICAL_SECTION v8; // r12
  struct _RTL_CRITICAL_SECTION *v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // rsi
  struct _RTL_CRITICAL_SECTION *v14; // r14
  __int64 v15; // r8
  CStreamInstance *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v17; // r13
  __int64 result; // rax
  int Stream; // eax
  ATL::CAtlException *v20; // rbx
  CStreamInstance *v21; // [rsp+30h] [rbp-C8h] BYREF
  char *v22; // [rsp+38h] [rbp-C0h] BYREF
  LPCRITICAL_SECTION v23; // [rsp+40h] [rbp-B8h]
  char *v24; // [rsp+48h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+58h] [rbp-A0h]
  char *v27; // [rsp+60h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+68h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+70h] [rbp-88h]
  __int64 v30; // [rsp+78h] [rbp-80h]
  char *v31; // [rsp+80h] [rbp-78h]
  char *v32; // [rsp+88h] [rbp-70h]
  ATL::CAtlException *v33; // [rsp+90h] [rbp-68h] BYREF
  __int128 v34; // [rsp+98h] [rbp-60h]
  __int128 v35; // [rsp+A8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v30 = -2LL;
  v26 = a4;
  v29 = a4;
  v34 = *((_OWORD *)a2 + 3);
  v35 = v34;
  EtwEventActivityIdControl(4LL, &v35);
  if ( !*((_BYTE *)this + 337) )
  {
    Stream = CSubmixImpl::CreateStream((CStreamGroup *)((char *)this + 24), a2, a3, a4);
    v11 = Stream;
    if ( Stream < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)Stream);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v8 = (LPCRITICAL_SECTION)((char *)this + 200);
  v24 = (char *)this + 200;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v23 = (LPCRITICAL_SECTION)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v31 = (char *)this + 200;
  v21 = 0LL;
  v10 = CStreamInstance::CreateStreamInstance(&v21, *((_DWORD *)a2 + 3), *(_DWORD *)a2, (__int64)this, 0LL, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v10);
    if ( v21 )
      CStreamInstance::`scalar deleting destructor'(v21);
    if ( this != (CStreamGroup *)-200LL )
    {
      v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
LABEL_15:
      LeaveCriticalSection(v12);
      goto LABEL_22;
    }
    goto LABEL_22;
  }
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v27 = (char *)this + 56;
  v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  try
  {
    v32 = (char *)this + 56;
    v16 = v21;
    v22 = (char *)v21;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
      (__int64 *)this + 12,
      (__int64)&v22,
      v15);
    v17 = v26;
  }
  catch ( ATL::CAtlException *v33 )
  {
    v20 = v33;
    if ( *(_DWORD *)v33 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v22) = *(_DWORD *)v20;
    v11 = (unsigned int)v22;
    if ( (int)v22 >= 0 )
    {
      v16 = v21;
      v9 = v23;
      v13 = v28;
      v8 = v23;
      v14 = v28;
      v17 = v29;
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v22);
    if ( v27 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v21 )
      CStreamInstance::`scalar deleting destructor'(v21);
    if ( v24 )
    {
      v12 = v23;
      goto LABEL_15;
    }
LABEL_22:
    EtwEventActivityIdControl(4LL, &v35);
    result = v11;
  }
LABEL_17:
  if ( v13 )
    LeaveCriticalSection(v14);
  *(_QWORD *)&v17[1].LockCount = *((_QWORD *)v16 + 1);
  if ( v8 )
    LeaveCriticalSection(v9);
LABEL_21:
  v11 = 0;
  goto LABEL_22;
}
