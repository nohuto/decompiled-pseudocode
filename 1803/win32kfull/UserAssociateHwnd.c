/*
 * XREFs of UserAssociateHwnd @ 0x1C01B23B0
 * Callers:
 *     EngCreateWnd @ 0x1C0258210 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C0258690 (EngDeleteWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  _QWORD *v5; // rcx

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v5 = (_QWORD *)(v4 + 120);
    if ( a2 )
    {
      if ( (unsigned int)RealInternalSetProp(v5, (unsigned __int16)atomWndObj, a2, 5LL) )
      {
        ++gcountPWO;
        return 1;
      }
    }
    else if ( RealInternalRemoveProp(*v5, (unsigned __int16)atomWndObj, 1LL) )
    {
      --gcountPWO;
      return 1;
    }
  }
  return v3;
}
