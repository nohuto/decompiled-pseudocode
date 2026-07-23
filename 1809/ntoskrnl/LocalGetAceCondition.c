/*
 * XREFs of LocalGetAceCondition @ 0x1408A7298
 * Callers:
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408AB234 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 */

__int64 __fastcall LocalGetAceCondition(
        unsigned __int8 *a1,
        void *a2,
        _QWORD *a3,
        ULONG *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int8 v9; // si
  unsigned int v14; // ebp
  int v15; // ecx
  ULONG v16; // edi
  int v17; // ebx
  ULONG v18; // ecx
  int v19; // r9d
  unsigned int StringForRelativeAttribute; // eax
  __int64 v21; // rax

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( v9 > 0x12u || (v15 = 271872, !_bittest(&v15, v9)) )
  {
    if ( v9 == 11 )
      goto LABEL_7;
    if ( v9 != 21 )
      return v14;
  }
  if ( v9 != 11 )
  {
    v16 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
    goto LABEL_8;
  }
LABEL_7:
  v17 = *((_DWORD *)a1 + 2);
  v16 = *((unsigned __int16 *)a1 + 1) - 16 * (v17 & 1) - 8 * (v17 & 2) - RtlLengthSid(a2) - 12;
LABEL_8:
  *a4 = v16;
  if ( v16 )
  {
    v18 = (_DWORD)a2 + RtlLengthSid(a2);
    if ( v9 == 18 )
      StringForRelativeAttribute = LocalGetStringForRelativeAttribute(v18, v16, a6, v19);
    else
      StringForRelativeAttribute = LocalpGetStringForCondition(v18, v16, (_DWORD)a3, v19, a6, a7, a8, a9);
    v14 = StringForRelativeAttribute;
    if ( !StringForRelativeAttribute )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(*a3 + 2 * v21) );
      *a5 += 2 * v21 + 2;
    }
  }
  return v14;
}
