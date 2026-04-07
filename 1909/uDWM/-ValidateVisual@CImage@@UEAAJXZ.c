/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800213A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800216A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180031774 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v2; // eax
  int updated; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    if ( updated < 0 )
    {
      v5 = 51LL;
      goto LABEL_13;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  v2 = CVisual::ValidateVisual(this);
  updated = v2;
  if ( v2 < 0 )
  {
    v6 = 145LL;
    goto LABEL_16;
  }
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(CImage *))(*(_QWORD *)this + 192LL))(this);
    updated = v2;
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 20) &= ~4u;
      goto LABEL_6;
    }
    v6 = 149LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v2,
      v7);
    goto LABEL_7;
  }
LABEL_6:
  updated = 0;
LABEL_7:
  if ( updated >= 0 )
    return 0LL;
  v5 = 55LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return (unsigned int)updated;
}
