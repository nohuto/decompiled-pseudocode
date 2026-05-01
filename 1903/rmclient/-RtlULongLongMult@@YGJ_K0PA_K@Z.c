/*
 * XREFs of ?RtlULongLongMult@@YGJ_K0PA_K@Z @ 0x10012171
 * Callers:
 *     _HamSetCommitProperties@20 @ 0x10012FE0 (_HamSetCommitProperties@20.c)
 * Callees:
 *     ?RtlULongLongAdd@@YGJ_K0PA_K@Z @ 0x10012137 (-RtlULongLongAdd@@YGJ_K0PA_K@Z.c)
 */

int __userpurge RtlULongLongMult@<eax>(int a1@<ecx>, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v5; // edi
  unsigned __int64 v7; // [esp-8h] [ebp-1Ch]
  unsigned __int64 *v8; // [esp+0h] [ebp-14h]
  unsigned __int64 *v9; // [esp+0h] [ebp-14h]
  unsigned __int64 v10; // [esp+Ch] [ebp-8h] BYREF

  v10 = 0LL;
  v5 = -1073741675;
  if ( HIDWORD(a2) )
  {
    if ( HIDWORD(a3) )
      goto LABEL_11;
    goto LABEL_5;
  }
  if ( HIDWORD(a3) )
  {
LABEL_5:
    if ( is_mul_ok(HIDWORD(a2), a3) && is_mul_ok(HIDWORD(a3), a2) )
    {
      HIDWORD(v7) = HIDWORD(a2) * a3;
      LODWORD(v7) = (HIDWORD(a3) * (unsigned __int64)(unsigned int)a2) >> 32;
      if ( RtlULongLongAdd((__int64 *)&v10, __PAIR64__(HIDWORD(a3) * (int)a2, v7), v7, v8) >= 0
        && RtlULongLongAdd((__int64 *)&v10, v10, (unsigned int)a2 * (unsigned __int64)(unsigned int)a3, v9) >= 0 )
      {
        *(_QWORD *)a1 = v10;
        return 0;
      }
    }
LABEL_11:
    *(_DWORD *)a1 = -1;
    *(_DWORD *)(a1 + 4) = -1;
    return v5;
  }
  *(_QWORD *)a1 = (unsigned int)a2 * (unsigned __int64)(unsigned int)a3;
  return 0;
}
