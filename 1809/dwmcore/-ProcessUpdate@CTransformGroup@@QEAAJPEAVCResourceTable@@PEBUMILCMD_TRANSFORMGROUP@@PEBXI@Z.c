/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001CC68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x18001CD80 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18005B390 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CTransformGroup::ProcessUpdate(
        CTransformGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  CTransformGroup *v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  struct CResource **v12; // rdx
  int v13; // ebx
  int v14; // eax
  __m128i v15; // xmm0
  char *v16; // rsi
  char v17; // r13
  __m128i v18; // xmm0
  int v20; // eax
  struct CResource **v21; // r14
  __int64 v22; // r15
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // rax
  void *v26; // rcx
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-40h]
  unsigned int v29; // [rsp+20h] [rbp-40h]
  const void *v30; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h]
  const void *v32; // [rsp+B0h] [rbp+50h] BYREF
  struct CResource **v33; // [rsp+B8h] [rbp+58h] BYREF

  v5 = *a3;
  v32 = a4;
  v8 = this;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransformGroup::UnRegisterNotifiers(this);
    v10 = CResource::UnmarshalResourceArray(&v32, &a5, (unsigned int)v9, 148LL);
    v12 = v33;
    v13 = v10;
    *((_QWORD *)v8 + 23) = v33;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB0Du);
LABEL_44:
      CTransformGroup::UnRegisterNotifiers(v8);
      goto LABEL_8;
    }
    v14 = CResource::RegisterNNotifiersInternal(v8, v12, *((_DWORD *)v8 + 44));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v14, 0xB8Eu);
    if ( v13 < 0 )
    {
      v28 = 2832;
LABEL_43:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v13, v28);
      goto LABEL_44;
    }
  }
  v13 = 0;
  v15 = *a3;
  LODWORD(v32) = 0;
  v16 = 0LL;
  LODWORD(v33) = a5;
  v17 = 0;
  v18 = _mm_srli_si128(v15, 8);
  v30 = a4;
  if ( v18.m128i_i32[1] )
  {
    v20 = CResource::UnmarshalResourceArray(&v30, &v33, (unsigned int)_mm_cvtsi128_si32(v18), 148LL);
    v21 = (struct CResource **)Src;
    v13 = v20;
    v22 = (unsigned int)v32;
    if ( v20 < 0 )
    {
      v29 = 2881;
    }
    else
    {
      if ( !(_DWORD)v32 )
      {
LABEL_35:
        if ( v13 >= 0 )
          goto LABEL_8;
        if ( v17 )
          CResource::UnRegisterNNotifiersInternal(v8, v21, v22);
        if ( v21 )
          WPF::ProcessHeapImpl::Free(v21);
        if ( v16 )
          WPF::ProcessHeapImpl::Free(v16);
        goto LABEL_7;
      }
      LODWORD(this) = *((_DWORD *)v8 + 44);
      v23 = -1;
      v24 = (_DWORD)this + (_DWORD)v32;
      if ( (int)this + (int)v32 >= (unsigned int)this )
        v23 = (_DWORD)this + (_DWORD)v32;
      v13 = v24 < (unsigned int)this ? 0x80070216 : 0;
      if ( v24 < (unsigned int)this )
      {
        v29 = 2887;
LABEL_30:
        v27 = v13;
LABEL_34:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v27, v29);
        goto LABEL_35;
      }
      v20 = CResource::RegisterNNotifiersInternal(v8, (struct CResource **)Src, (unsigned int)v32);
      v13 = v20;
      if ( v20 >= 0 )
      {
        v17 = 1;
        v13 = 0;
        LODWORD(this) = v23;
        if ( v23 && 0xFFFFFFFFFFFFFFFFuLL / v23 > 8 )
        {
          v16 = (char *)WPF::ProcessHeapImpl::AllocClear(8LL * v23);
          if ( !v16 )
            v13 = -2147024882;
        }
        else
        {
          v13 = -2147024809;
        }
        if ( v13 >= 0 )
        {
          v25 = *((unsigned int *)v8 + 44);
          if ( (_DWORD)v25 )
          {
            memcpy_0(v16, *((const void **)v8 + 23), 8LL * (unsigned int)v25);
            v25 = *((unsigned int *)v8 + 44);
          }
          memcpy_0(&v16[8 * v25], v21, 8 * v22);
          v26 = (void *)*((_QWORD *)v8 + 23);
          if ( v26 )
            WPF::ProcessHeapImpl::Free(v26);
          *((_QWORD *)v8 + 23) = v16;
          v16 = 0LL;
          *((_DWORD *)v8 + 44) = v23;
          WPF::ProcessHeapImpl::Free(v21);
          v21 = 0LL;
          goto LABEL_35;
        }
        v29 = 2897;
        goto LABEL_30;
      }
      v29 = 2890;
    }
    v27 = v20;
    goto LABEL_34;
  }
LABEL_7:
  if ( v13 < 0 )
  {
    v28 = 2835;
    goto LABEL_43;
  }
LABEL_8:
  CResource::NotifyOnChanged(v8, 0LL, 0LL);
  return (unsigned int)v13;
}
