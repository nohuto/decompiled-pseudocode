/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180072F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x180073658 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180073684 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x18009A7E0 (_snwprintf_s.c)
 *     EvaluateCurrentState @ 0x18009F194 (EvaluateCurrentState.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int16 *v18; // rax
  unsigned int v19; // eax
  wchar_t Buffer[16]; // [rsp+48h] [rbp-60h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v10 = *a6 & 0xFFFFFFFE;
  if ( a2 < 0xC000u )
  {
    if ( !a2 )
    {
      v11 = -1073741811;
LABEL_38:
      v15 = a1;
      goto LABEL_39;
    }
    v11 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_38;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", a2);
    if ( (unsigned int)EvaluateCurrentState(&g_Feature_1466904891_59803019_FeatureDescriptorDetails) )
    {
      if ( v12 < v10 )
      {
LABEL_19:
        if ( !v12 )
        {
          v11 = -1073741789;
          goto LABEL_38;
        }
        memmove(a5, Buffer, v12);
        v14 = (unsigned __int64)v12 >> 1;
        goto LABEL_21;
      }
      if ( v10 >= 2 )
      {
        v12 = v10 - 2;
        goto LABEL_19;
      }
    }
    else
    {
      v13 = *a6;
      if ( v12 < *a6 )
        goto LABEL_19;
      if ( v13 >= 2 )
      {
        v12 = v13 - 2;
        goto LABEL_19;
      }
    }
    v12 = 0;
    goto LABEL_19;
  }
  v11 = -1073741816;
  v15 = a1;
  v16 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
  v17 = v16;
  if ( !v16 )
    goto LABEL_39;
  if ( *(_WORD *)(v16 + 10) != a2 )
    goto LABEL_39;
  v18 = (unsigned __int16 *)(v16 + 12);
  if ( !v18 )
    goto LABEL_39;
  v11 = 0;
  if ( a3 )
    *a3 = *v18;
  if ( a4 )
    *a4 = *(unsigned __int16 *)(v17 + 14);
  if ( !a5 )
    goto LABEL_39;
  v12 = 2 * *(unsigned __int8 *)(v17 + 16);
  v19 = *a6;
  if ( v12 >= *a6 )
  {
    if ( v19 < 2 )
    {
      *a6 = v12;
      v12 = 0;
    }
    else
    {
      v12 = v19 - 2;
    }
  }
  if ( v12 )
  {
    memmove(a5, (const void *)(v17 + 18), v12);
    v14 = (unsigned __int64)v12 >> 1;
LABEL_21:
    *((_WORD *)a5 + v14) = 0;
    *a6 = v12;
    goto LABEL_38;
  }
  v11 = -1073741789;
LABEL_39:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v15 + 8));
  return v11;
}
