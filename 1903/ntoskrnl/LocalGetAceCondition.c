/*
 * XREFs of LocalGetAceCondition @ 0x1405B3018
 * Callers:
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E7210 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
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
  ULONG v17; // edi
  int v18; // ebx
  ULONG v19; // ecx
  int v20; // r9d
  unsigned int StringForRelativeAttribute; // eax
  __int64 v22; // rax

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( v9 > 0x12u || (v15 = 271872, !_bittest(&v15, v9)) )
  {
    if ( v9 == 11 )
      goto LABEL_8;
    if ( v9 != 21 )
      return v14;
  }
  if ( v9 != 11 )
  {
    v17 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
    goto LABEL_9;
  }
LABEL_8:
  v18 = *((_DWORD *)a1 + 2);
  v17 = *((unsigned __int16 *)a1 + 1) - 16 * (v18 & 1) - 8 * (v18 & 2) - RtlLengthSid(a2) - 12;
LABEL_9:
  *a4 = v17;
  if ( v17 )
  {
    v19 = (_DWORD)a2 + RtlLengthSid(a2);
    if ( v9 == 18 )
      StringForRelativeAttribute = LocalGetStringForRelativeAttribute(v19, v17, a6, v20);
    else
      StringForRelativeAttribute = LocalpGetStringForCondition(v19, v17, (_DWORD)a3, v20, a6, a7, a8, a9);
    v14 = StringForRelativeAttribute;
    if ( !StringForRelativeAttribute )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)(*a3 + 2 * v22) );
      *a5 += 2 * v22 + 2;
    }
  }
  return v14;
}
