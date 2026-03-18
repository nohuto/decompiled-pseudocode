/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801B9010
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801B8D78 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B8E00 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  struct CVisual **v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-31h]
  __int64 v18; // [rsp+28h] [rbp-31h]
  struct CVisual **v19; // [rsp+58h] [rbp-1h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+7h] BYREF
  struct CVisual **v21; // [rsp+68h] [rbp+Fh] BYREF
  __m128i v22; // [rsp+70h] [rbp+17h]
  unsigned int v23; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+77h] BYREF

  v6 = *a3;
  v20 = a4;
  v8 = 0LL;
  v22 = v6;
  CVisualGroup::ClearVisualGroupData(this);
  v9 = CResource::UnmarshalResourceArray(
         &v20,
         (int *)&a5,
         _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
         0x9Du,
         v17,
         &v24,
         (void **)&v19,
         (__int64)a2,
         0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x69u);
  }
  else
  {
    v12 = CResource::UnmarshalResourceArray(
            &v20,
            (int *)&a5,
            v22.m128i_u32[3],
            0x9Du,
            v18,
            &v23,
            (void **)&v21,
            (__int64)a2,
            0);
    v8 = v21;
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x77u);
    }
    else
    {
      v14 = CVisualGroup::InitializeVisualGroupData(this, v19, v24, v21, v23);
      v11 = v14;
      if ( v14 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x7Au);
    }
  }
  CVisualGroup::ClearVisualGroupData(this);
LABEL_8:
  if ( v19 )
    WPF::ProcessHeapImpl::Free(v19);
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v11;
}
