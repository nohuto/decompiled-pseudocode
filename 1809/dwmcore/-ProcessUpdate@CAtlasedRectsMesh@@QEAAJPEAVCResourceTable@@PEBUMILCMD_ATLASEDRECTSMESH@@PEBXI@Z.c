/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800A0A78
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800BCA80 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  SIZE_T v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edi
  void **v10; // r13
  int v11; // ebx
  LPVOID v12; // rax
  void **v13; // r13
  LPVOID v14; // rax
  void **v15; // rbp
  LPVOID v16; // rax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-68h]
  __m128i v20; // [rsp+30h] [rbp-58h]
  SIZE_T dwBytes; // [rsp+50h] [rbp-38h]

  v20 = *a3;
  v7 = a3[1].m128i_u32[2];
  dwBytes = a3[1].m128i_u64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v9 = a5;
  *((_DWORD *)this + 14) = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
  *((_DWORD *)this + 15) = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  if ( (_DWORD)dwBytes )
  {
    if ( (unsigned int)dwBytes > a5 || (dwBytes & 0xF) != 0 )
    {
      v19 = 214;
      goto LABEL_37;
    }
    v10 = (void **)((char *)this + 72);
    v11 = 0;
    if ( this == (CAtlasedRectsMesh *)-72LL )
    {
      v11 = -2147024809;
    }
    else
    {
      v12 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)dwBytes);
      *v10 = v12;
      if ( !v12 )
        v11 = -2147024882;
    }
    if ( v11 < 0 )
    {
      v19 = 220;
LABEL_31:
      v18 = v11;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v18, v19);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_26;
    }
    memcpy_0(*v10, a4, (unsigned int)dwBytes);
    v9 = a5 - dwBytes;
    *((_DWORD *)this + 16) = dwBytes;
    a4 += (unsigned int)dwBytes;
  }
  if ( !HIDWORD(dwBytes) )
    goto LABEL_17;
  if ( HIDWORD(dwBytes) > v9 || (dwBytes & 0xF00000000LL) != 0 )
  {
    v19 = 240;
    goto LABEL_37;
  }
  v13 = (void **)((char *)this + 88);
  v11 = 0;
  if ( this == (CAtlasedRectsMesh *)-88LL )
  {
    v11 = -2147024809;
  }
  else
  {
    v14 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes));
    *v13 = v14;
    if ( !v14 )
      v11 = -2147024882;
  }
  if ( v11 < 0 )
  {
    v19 = 246;
    goto LABEL_31;
  }
  memcpy_0(*v13, a4, HIDWORD(dwBytes));
  v9 -= HIDWORD(dwBytes);
  *((_DWORD *)this + 20) = HIDWORD(dwBytes);
  a4 += HIDWORD(dwBytes);
LABEL_17:
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)v7 <= v9 && (v7 & 3) == 0 )
    {
      v15 = (void **)((char *)this + 104);
      v11 = 0;
      if ( this == (CAtlasedRectsMesh *)-104LL )
      {
        v11 = -2147024809;
      }
      else
      {
        v16 = HeapAlloc(WPF::g_processHeap, 0, v7);
        *v15 = v16;
        if ( !v16 )
          v11 = -2147024882;
      }
      if ( v11 >= 0 )
      {
        memcpy_0(*v15, a4, v7);
        *((_DWORD *)this + 24) = v7;
        goto LABEL_25;
      }
      v19 = 272;
      goto LABEL_31;
    }
    v19 = 266;
LABEL_37:
    v18 = -2003303421;
    v11 = -2003303421;
    goto LABEL_38;
  }
LABEL_25:
  v11 = 0;
LABEL_26:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v11;
}
