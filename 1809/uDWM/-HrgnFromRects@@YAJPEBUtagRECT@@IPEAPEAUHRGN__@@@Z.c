/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x180035464
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180034E30 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004E28A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rdi
  DWORD v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  unsigned __int128 v10; // xmm0
  LONG v11; // eax
  LONG *p_right; // rcx
  LONG v13; // edx
  __int64 v14; // r10
  LONG v15; // r8d
  LONG v16; // r9d
  HRGN Region; // rax
  int v19; // r9d
  signed int LastError; // eax
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned __int128 v22; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    v21 = 197;
    goto LABEL_28;
  }
  v7 = v3 + 36;
  if ( (int)v3 + 36 < (unsigned int)v3 )
  {
    v21 = 198;
LABEL_28:
    v19 = -2147024362;
    goto LABEL_29;
  }
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  if ( !v9 )
  {
    v19 = -2147024882;
    v21 = 207;
LABEL_29:
    v8 = v19;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21);
    return v8;
  }
  v10 = (unsigned __int128)*Src;
  if ( a2 > 1 )
  {
    v11 = HIDWORD(*(unsigned __int128 *)Src);
    p_right = &Src[1].right;
    v13 = *(_QWORD *)&Src->right;
    v14 = a2 - 1;
    v15 = HIDWORD(*(_QWORD *)&Src->left);
    v16 = (LONG)*Src;
    do
    {
      if ( *(p_right - 2) < v16 )
        v16 = *(p_right - 2);
      if ( *(p_right - 1) < v15 )
        v15 = *(p_right - 1);
      if ( *p_right > v13 )
        v13 = *p_right;
      if ( p_right[1] > v11 )
        v11 = p_right[1];
      p_right += 4;
      --v14;
    }
    while ( v14 );
    *((_QWORD *)&v22 + 1) = __PAIR64__(v11, v13);
    *(_QWORD *)&v22 = __PAIR64__(v15, v16);
    v10 = v22;
  }
  *(_DWORD *)v9 = 32;
  *(_DWORD *)(v9 + 4) = 1;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 12) = v3;
  *(_OWORD *)(v9 + 16) = v10;
  memcpy_0((void *)(v9 + 32), Src, (unsigned int)v3);
  SetLastError(0);
  Region = ExtCreateRegion(0LL, v7, (const RGNDATA *)v9);
  if ( Region )
  {
    *a3 = Region;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v8 = LastError;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0xEAu);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
  return v8;
}
