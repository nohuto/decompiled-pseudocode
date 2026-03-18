/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800AE670
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007B54C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800AE730 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800AF0D4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CDcompRenderTargetGroup::ProcessUpdate(
        CDcompRenderTargetGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGETGROUP *a3,
        const void *a4,
        unsigned int a5)
{
  signed int v9; // eax
  __int64 v10; // rcx
  struct CResource **v11; // rdx
  signed int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+38h] [rbp-20h]
  struct CResource **v17; // [rsp+60h] [rbp+8h] BYREF

  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  v16 = 0;
  v9 = CResource::UnmarshalResourceArray(a4, a5, *((unsigned int *)a3 + 2), 46LL, (char *)this + 56, &v17, a2, v16);
  v11 = v17;
  v12 = v9;
  *((_QWORD *)this + 8) = v17;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19Bu, 0LL);
    goto LABEL_8;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((unsigned int *)this + 14));
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1B1u, 0LL);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x19Eu, 0LL);
LABEL_8:
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v12;
}
