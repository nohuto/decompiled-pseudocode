/*
 * XREFs of MiCaptureSectionCreateExtendedParameters @ 0x1405DF780
 * Callers:
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14061C34C (MmCreateSectionEx.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall MiCaptureSectionCreateExtendedParameters(_QWORD *Address, unsigned int a2, char a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r14
  SIZE_T v8; // rcx
  int v9; // edi
  _QWORD *v10; // r14
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // rax

  v5 = Address;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( !a2 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v7 = a2;
  v8 = 16LL * a2;
  if ( is_mul_ok(a2, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v8 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v9 = 0;
    if ( a3 )
      ProbeForWrite(v5, v8, 8u);
    v10 = &v5[2 * v7];
    while ( v5 < v10 )
    {
      v11 = (unsigned __int8)*(_DWORD *)v5;
      if ( (unsigned int)(v11 - 1) > 1 || *v5 >= 0x100uLL )
        return 3221225485LL;
      v12 = 1 << v11;
      if ( ((1 << v11) & 6) == 0 )
        return 3221225485LL;
      if ( (v12 & v9) != 0 )
        return 3221225485LL;
      v9 |= v12;
      v13 = v11 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          return 3221225485LL;
        v14 = v5[1];
        if ( v14 > 0xFFFFFFFF )
          return 3221225485LL;
        *(_DWORD *)(a4 + 8) = v14;
        if ( (_DWORD)v14 == -1 )
          return 3221225485LL;
        *(_DWORD *)(a4 + 8) = v14 + 1;
      }
      else
      {
        if ( (v5[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          return 3221225485LL;
        *(_BYTE *)a4 = 1;
        *(_DWORD *)(a4 + 4) = *((_DWORD *)v5 + 2);
      }
      v5 += 2;
    }
    *(_DWORD *)(a4 + 12) = v9;
    return 0LL;
  }
  return result;
}
