/*
 * XREFs of ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x18020C374
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x18020C338 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessCreate(
        CHolographicDisplay *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_CREATE *a3)
{
  __int64 v5; // rax

  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 6);
  v5 = *((_QWORD *)a3 + 1) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)a3 + 2) - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
    *(_OWORD *)((char *)this + 84) = *(_OWORD *)((char *)a3 + 8);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
  CHolographicDisplay::OnChanged(this);
  return 0LL;
}
