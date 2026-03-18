/*
 * XREFs of ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801BAF20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801BC1A0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::ProcessUpdate(
        CGeometry2DGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY2DGROUP *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CResource **v10; // rdx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v17; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v16 = a4;
  CGeometry2DGroup::UnRegisterNotifiers(this);
  v8 = CResource::UnmarshalResourceArray(
         &v16,
         (int *)&a5,
         v5,
         0x3Cu,
         v15,
         (unsigned int *)this + 24,
         (void **)&v17,
         (__int64)a2,
         1);
  v10 = v17;
  v11 = v8;
  *((_QWORD *)this + 13) = v17;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2F9u);
    goto LABEL_7;
  }
  v12 = CResource::RegisterNNotifiersInternal(this, v10, *((_DWORD *)this + 24));
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x30Fu);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x2FCu);
LABEL_7:
    CGeometry2DGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v11;
}
