/*
 * XREFs of ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801BBADC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801BA818 (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1801BC360 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessUpdate(
        CTransform3DGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  int v11; // eax
  __int64 v12; // rcx
  struct CResource **v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned int v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v21; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a3;
  v20 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v11 = CResource::UnmarshalResourceArray(
            &v20,
            (int *)&a5,
            v9,
            0x95u,
            v18,
            (unsigned int *)this + 44,
            (void **)&v21,
            (__int64)a2,
            0);
    v13 = v21;
    v14 = v11;
    *((_QWORD *)this + 23) = v21;
    if ( v11 < 0 )
    {
      v19 = 2648;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v19);
      goto LABEL_11;
    }
    v15 = CResource::RegisterNNotifiersInternal(this, v13, *((_DWORD *)this + 44));
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xAD9u);
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0xA5Bu);
LABEL_11:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_12;
    }
  }
  v11 = CTransform3DGroup::ProcessAppend((const void **)this, a2, a3, a4, a5);
  v14 = v11;
  if ( v11 < 0 )
  {
    v19 = 2654;
    goto LABEL_10;
  }
LABEL_12:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v14;
}
