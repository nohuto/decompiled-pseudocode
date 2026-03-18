/*
 * XREFs of ?SetBufferProperty@CTextBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01B6160
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CTextBrushMarshaler::SetBufferProperty(
        DirectComposition::CTextBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        rsize_t DstSize,
        bool *a6)
{
  int v8; // r8d
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v16; // rcx

  if ( !a3 )
  {
    if ( *((_QWORD *)this + 8) >= DstSize )
      goto LABEL_20;
    v13 = *((_QWORD *)this + 7);
    if ( v13 )
      Win32FreePool(v13);
    v14 = Win32AllocPoolWithQuota(DstSize, 0x7A744344u);
    *((_QWORD *)this + 7) = v14;
    if ( v14 )
    {
LABEL_20:
      v16 = (void *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 8) = DstSize;
      if ( memcpy_s(v16, DstSize, a4, DstSize) )
      {
        Win32FreePool(*((_QWORD *)this + 7));
        *((_QWORD *)this + 7) = 0LL;
        *((_QWORD *)this + 8) = 0LL;
        return 3221225485LL;
      }
      *((_DWORD *)this + 4) |= 0x20u;
      goto LABEL_24;
    }
    return 3221225495LL;
  }
  v8 = a3 - 1;
  if ( v8 )
  {
    if ( v8 != 2 )
    {
      *a6 = 0;
      return 3221225485LL;
    }
    if ( !a4 || DstSize != 16 )
      return 3221225485LL;
    v9 = *a4;
    *((_DWORD *)this + 4) |= 0x100u;
    *(_OWORD *)((char *)this + 92) = v9;
    goto LABEL_24;
  }
  if ( *((_QWORD *)this + 10) < DstSize )
  {
    v10 = *((_QWORD *)this + 9);
    if ( v10 )
      Win32FreePool(v10);
    v11 = Win32AllocPoolWithQuota(DstSize, 0x79744344u);
    *((_QWORD *)this + 9) = v11;
    if ( !v11 )
      return 3221225495LL;
  }
  v12 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = DstSize;
  if ( memcpy_s(v12, DstSize, a4, DstSize) )
  {
    Win32FreePool(*((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    return 3221225485LL;
  }
  *((_DWORD *)this + 4) |= 0x40u;
LABEL_24:
  *a6 = 1;
  return 0LL;
}
