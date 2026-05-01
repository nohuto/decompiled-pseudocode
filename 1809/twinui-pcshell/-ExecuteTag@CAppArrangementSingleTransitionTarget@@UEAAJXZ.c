/*
 * XREFs of ?ExecuteTag@CAppArrangementSingleTransitionTarget@@UEAAJXZ @ 0x180328FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x180328EAC (-AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::ExecuteTag(CAppArrangementSingleTransitionTarget *this)
{
  int v2; // ecx
  const struct tagRECT *v3; // rdx
  int v4; // edi
  const struct tagRECT *v5; // rdx

  v2 = 0;
  v3 = (const struct tagRECT *)*((unsigned int *)this + 10);
  if ( (_DWORD)v3 == 4095 || *((_BYTE *)this + 153) && (unsigned int)((_DWORD)v3 - 45) > 1 )
    goto LABEL_15;
  v4 = *((_DWORD *)this + 11);
  AdjustSourceRectForNonClientArea(*((HWND *)this + 7), v3, (struct tagRECT *)((char *)this + 72));
  if ( (v4 & 0x800000) != 0 )
    AdjustSourceRectForNonClientArea(*((HWND *)this + 7), v5, (struct tagRECT *)((char *)this + 104));
  if ( *((_DWORD *)this + 18) || *((_DWORD *)this + 19) )
    *((_DWORD *)this + 11) &= ~0x200000u;
  v2 = DwmpTransitionWindowWithRects(
         *((_QWORD *)this + 7),
         *((_DWORD *)this + 11) ^ ((unsigned __int16)*((_DWORD *)this + 11) ^ (unsigned __int16)*((_DWORD *)this + 10)) & 0xFFFu,
         (char *)this + 72,
         (char *)this + 88);
  if ( v2 >= 0 )
  {
LABEL_15:
    if ( *((_QWORD *)this + 8) )
      return (unsigned int)DwmpTransitionWindow(*((_QWORD *)this + 8), *((_DWORD *)this + 12) & 0xFFFFF000 | 0x2B);
  }
  return (unsigned int)v2;
}
