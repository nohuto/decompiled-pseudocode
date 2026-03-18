/*
 * XREFs of UserAssociateHwnd @ 0x1C01EA01C
 * Callers:
 *     EngCreateWnd @ 0x1C0283A00 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C0283EE0 (EngDeleteWnd.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v6 = (unsigned __int16)atomWndObj;
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5u) )
      {
        ++gcountPWO;
        return 1;
      }
    }
    else
    {
      v7 = *(_QWORD *)(v4 + 144);
      if ( atomWndObj == word_1C032A65C )
        *(_QWORD *)(*(_QWORD *)(v4 + 40) + 312LL) = 0LL;
      if ( RealInternalRemoveProp(v7, v6, 1LL, v5) )
      {
        --gcountPWO;
        return 1;
      }
    }
  }
  return v3;
}
