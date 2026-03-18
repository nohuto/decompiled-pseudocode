/*
 * XREFs of ?ProcessSetFlags@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS@@@Z @ 0x18020E338
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetFlags(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_SETFLAGS *a3)
{
  int v3; // r9d
  int v4; // eax
  __int64 v5; // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)this + 32) ^ v3;
  *((_DWORD *)this + 32) = v3;
  if ( (v4 & 1) != 0 && (v3 & 1) == 0 )
  {
    v5 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 132) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v5 + 536) + 104LL))(
      *(_QWORD *)(v5 + 536),
      0LL,
      0x8000LL);
  }
  return 0LL;
}
