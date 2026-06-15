/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180014AE0
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800E34A0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800E2AB8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ValidateStreamForStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  const struct tWAVEFORMATEX *v10; // rbx
  const struct tWAVEFORMATEX *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SaDeviceParams *v16; // [rsp+38h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 224LL))(this) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = *((_QWORD *)this + 11);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 152LL))(v4) )
  {
LABEL_17:
    if ( this != (CBaseStreamGroupProxy *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    return 0LL;
  }
  v5 = *((_QWORD *)this + 11);
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v5 + 104LL))(v5, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = (const struct tWAVEFORMATEX *)*((_QWORD *)v16 + 3);
    v11 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 120LL))(this);
    if ( !(unsigned int)CompareWaveFormat(v10, v11) )
    {
      v7 = -2004287447;
      v9 = 300LL;
      v8 = 2290679849LL;
      goto LABEL_10;
    }
    if ( v16 )
      SaDeviceParams::`scalar deleting destructor'(v16, v12);
    goto LABEL_17;
  }
  v8 = (unsigned int)v6;
  v9 = 299LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v8,
    v14);
  if ( v16 )
    SaDeviceParams::`scalar deleting destructor'(v16, v13);
  v16 = 0LL;
  if ( this != (CBaseStreamGroupProxy *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return v7;
}
