/*
 * XREFs of ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BA620
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801BB00C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18005B390 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18006BC2C (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CGeometryGroup::ProcessAppend(
        const void **this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  signed int v6; // ebx
  char *v7; // rdi
  __m128i v8; // xmm0
  char v9; // r12
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // rbp
  __int64 v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rax
  void *v18; // rcx
  int v19; // r9d
  __int64 v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+20h] [rbp-68h]
  void *Src; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  v5 = *a3;
  v6 = 0;
  v25 = a4;
  v24 = 0;
  v7 = 0LL;
  v8 = _mm_srli_si128(v5, 8);
  v9 = 0;
  if ( !v8.m128i_i32[1] )
    return (unsigned int)v6;
  v11 = CResource::UnmarshalResourceArray(
          &v25,
          (int *)&a5,
          _mm_cvtsi128_si32(v8),
          0x3Bu,
          v21,
          &v24,
          &Src,
          (__int64)a2,
          0);
  v13 = Src;
  v6 = v11;
  v14 = v24;
  if ( v11 < 0 )
  {
    v22 = 887;
    goto LABEL_24;
  }
  if ( !v24 )
    goto LABEL_26;
  v12 = *((unsigned int *)this + 40);
  v15 = -1;
  v16 = v12 + v24;
  if ( (unsigned int)v12 + v24 >= (unsigned int)v12 )
    v15 = v12 + v24;
  v6 = v16 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( v16 >= (unsigned int)v12 )
  {
    v11 = CResource::RegisterNNotifiersInternal((CResource *)this, (struct CResource **)Src, v24);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v9 = 1;
      v6 = 0;
      v12 = v15;
      if ( v15 && 0xFFFFFFFFFFFFFFFFuLL / v15 > 8 )
      {
        v7 = (char *)WPF::ProcessHeapImpl::AllocClear(8LL * v15);
        if ( !v7 )
          v6 = -2147024882;
      }
      else
      {
        v6 = -2147024809;
      }
      if ( v6 >= 0 )
      {
        v17 = *((unsigned int *)this + 40);
        if ( (_DWORD)v17 )
        {
          memcpy_0(v7, this[21], 8LL * (unsigned int)v17);
          v17 = *((unsigned int *)this + 40);
        }
        memcpy_0(&v7[8 * v17], v13, 8 * v14);
        v18 = (void *)this[21];
        if ( v18 )
          WPF::ProcessHeapImpl::Free(v18);
        this[21] = v7;
        v7 = 0LL;
        *((_DWORD *)this + 40) = v15;
        WPF::ProcessHeapImpl::Free(v13);
        v13 = 0LL;
        goto LABEL_26;
      }
      v22 = 903;
      goto LABEL_20;
    }
    v22 = 896;
LABEL_24:
    v19 = v11;
    goto LABEL_25;
  }
  v22 = 893;
LABEL_20:
  v19 = v6;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v19, v22);
LABEL_26:
  if ( v6 < 0 )
  {
    if ( v9 )
      CResource::UnRegisterNNotifiersInternal((CResource *)this, (struct CResource **)v13, v14);
    if ( v13 )
      WPF::ProcessHeapImpl::Free(v13);
    if ( v7 )
      WPF::ProcessHeapImpl::Free(v7);
  }
  return (unsigned int)v6;
}
