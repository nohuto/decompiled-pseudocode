/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800C7A44
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800C7968 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180217D08 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, char a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r15d
  void *v4; // r13
  char v5; // r12
  int v7; // ebx
  unsigned int i; // esi
  CD3DDeviceManager *v9; // rcx
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // rbp
  char v13; // dl
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  int v17; // esi
  unsigned int j; // r14d
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // r15d
  _QWORD *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // esi
  unsigned int k; // ebp
  unsigned int v32; // ecx
  unsigned int v34; // esi
  __int64 v35; // r12
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // esi
  CGdiSpriteBitmap *v39; // r15
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // r14d
  __int64 v43; // rax
  unsigned int v44; // ecx
  HANDLE hEvent; // [rsp+70h] [rbp+8h] BYREF
  char v46; // [rsp+78h] [rbp+10h]

  v46 = a2;
  v2 = *((_QWORD *)this + 9);
  v3 = 0;
  v4 = (void *)*((_QWORD *)this + 46);
  v5 = a2;
  v7 = 0;
  for ( i = 0; i < *(_DWORD *)(v2 + 296); ++i )
  {
    v43 = *(_QWORD *)(v2 + 272);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v43 + 8LL * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v2 + 296) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2 + 272, 8u);
  v10 = *((_QWORD *)this + 9);
  v11 = 0;
  if ( *(_DWORD *)(v10 + 264) )
  {
    do
    {
      v35 = *(_QWORD *)(*(_QWORD *)(v10 + 240) + 8LL * v3);
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35);
      v38 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x175u);
      if ( !v11 || v11 >= 0 && v38 < 0 )
        v11 = v38;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
      ++v3;
    }
    while ( v3 < *(_DWORD *)(v10 + 264) );
    v5 = v46;
  }
  *(_DWORD *)(v10 + 264) = 0;
  v12 = *((_QWORD *)this + 8);
  v13 = 0;
  if ( !*(_BYTE *)(v12 + 112) )
    v13 = v5 ^ 1;
  v14 = CD3DDeviceManager::HandleAdvanceFrame(v9, v13);
  v17 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0x1BFu);
  for ( j = 0; j < *(_DWORD *)(v12 + 48); ++j )
  {
    LOBYTE(v15) = v5;
    v19 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * j) + 64LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 72LL))(v19, v15);
    v22 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1C3u);
    if ( !v17 || v17 >= 0 && v22 < 0 )
      v17 = v22;
  }
  *(_BYTE *)(v12 + 112) = 0;
  if ( v4 )
  {
    v23 = (_QWORD *)*((_QWORD *)this + 66);
    hEvent = v4;
    v7 = 0;
    v24 = NtDCompositionConfirmFrame(*v23, &hEvent);
    if ( v24 < 0 )
    {
      v7 = v24 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24 | 0x10000000, 0x91u);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v7, 0x44Fu);
      goto LABEL_24;
    }
    v26 = *((_QWORD *)this + 45);
    if ( !v26 )
      goto LABEL_20;
    if ( v5 )
    {
      *(_QWORD *)(*(_QWORD *)v26 + 24LL) = 0LL;
LABEL_20:
      v27 = (_QWORD *)*((_QWORD *)this + 66);
      hEvent = v4;
      v7 = 0;
      v28 = NtDCompositionDiscardFrame(*v27, &hEvent);
      if ( v28 < 0 )
      {
        v7 = v28 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28 | 0x10000000, 0xA5u);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v7, 0x45Du);
        goto LABEL_24;
      }
    }
  }
  if ( *((_DWORD *)this + 190) )
  {
    v34 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 92) + 8LL * v34++));
    while ( v34 < *((_DWORD *)this + 190) );
    *((_DWORD *)this + 190) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 736, 8u);
  }
LABEL_24:
  v30 = 0;
  for ( k = 0; k < *((_DWORD *)this + 178); ++k )
  {
    v39 = *(CGdiSpriteBitmap **)(*((_QWORD *)this + 86) + 8LL * k);
    v40 = (*(__int64 (__fastcall **)(_QWORD *, CGdiSpriteBitmap *))(**((_QWORD **)v39 + 24) + 48LL))(
            *((_QWORD **)v39 + 24),
            v39);
    v42 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xDFu);
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v42, 0x332u);
    }
    if ( !v30 || v30 >= 0 && v42 < 0 )
      v30 = v42;
    CGdiSpriteBitmap::Release(v39);
  }
  *((_DWORD *)this + 178) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 688, 8u);
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v30, 0x466u);
  if ( !v7 || v7 >= 0 && v30 < 0 )
    return (unsigned int)v30;
  return (unsigned int)v7;
}
