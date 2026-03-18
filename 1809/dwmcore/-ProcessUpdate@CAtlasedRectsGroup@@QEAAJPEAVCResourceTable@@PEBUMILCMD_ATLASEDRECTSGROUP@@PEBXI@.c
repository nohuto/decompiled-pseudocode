/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800A0148
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800A00D0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  __int64 v8; // rdx
  __int64 Resource; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  void *v20; // [rsp+98h] [rbp+20h] BYREF

  v6 = *a3;
  v19 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v8 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( (_DWORD)v8 )
  {
    Resource = CResourceTable::GetResource(a2, v8, 78LL);
    if ( Resource )
      Resource -= 16LL;
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x77u);
LABEL_17:
      CAtlasedRectsGroup::UnRegisterNotifiers(this);
      goto LABEL_10;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v12 = CResource::UnmarshalResourceArray(
          &v19,
          (int *)&a5,
          v6.m128i_u32[3],
          7u,
          v18,
          (unsigned int *)this + 16,
          &v20,
          (__int64)a2,
          1);
  *((_QWORD *)this + 9) = v20;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x8Bu);
    goto LABEL_17;
  }
  v13 = CResource::RegisterNotifier(
          this,
          (struct CResource *)((*((_QWORD *)this + 7) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                               + 7) >> 64)));
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA1u);
  }
  else
  {
    v15 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 9), *((_DWORD *)this + 16));
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA2u);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x8Eu);
    goto LABEL_17;
  }
LABEL_10:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
