/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BB00C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BA620 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801BC1E0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
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
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v21; // [rsp+90h] [rbp+18h] BYREF

  v5 = *a3;
  v20 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CGeometryGroup::UnRegisterNotifiers(this);
    v11 = CResource::UnmarshalResourceArray(
            &v20,
            (int *)&a5,
            v9,
            0x3Bu,
            v18,
            (unsigned int *)this + 40,
            (void **)&v21,
            (__int64)a2,
            0);
    v13 = v21;
    v14 = v11;
    *((_QWORD *)this + 21) = v21;
    if ( v11 < 0 )
    {
      v19 = 835;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v19);
      goto LABEL_11;
    }
    v15 = CResource::RegisterNNotifiersInternal(this, v13, *((_DWORD *)this + 40));
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3C4u);
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0x346u);
LABEL_11:
      CGeometryGroup::UnRegisterNotifiers(this);
      goto LABEL_12;
    }
  }
  v11 = CGeometryGroup::ProcessAppend((const void **)this, a2, a3, a4, a5);
  v14 = v11;
  if ( v11 < 0 )
  {
    v19 = 841;
    goto LABEL_10;
  }
LABEL_12:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v14;
}
