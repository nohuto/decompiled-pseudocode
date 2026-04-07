/*
 * XREFs of ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x180090978
 * Callers:
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B518C (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180018E44 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct CTopLevelWindow *__fastcall CWindowList::GetLowestProjectedShadowCasterWindowForDesktop(
        CWindowList *this,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *Element; // rax
  _QWORD *v4; // rdx
  _QWORD *i; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  if ( Element )
  {
    v4 = Element + 10;
    for ( i = (_QWORD *)Element[10]; i != v4; i = (_QWORD *)*i )
    {
      v6 = i[50];
      if ( v6 && (*(_BYTE *)(v6 + 241) & 0x20) != 0 )
        return (struct CTopLevelWindow *)i[50];
    }
  }
  return (struct CTopLevelWindow *)v2;
}
