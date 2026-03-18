/*
 * XREFs of ExpConvertSignatureName @ 0x14090D5AC
 * Callers:
 *     ExpTranslateArcPath @ 0x14090FDE4 (ExpTranslateArcPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpCreateOutputARC @ 0x14090D7D4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x14090D8C8 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputNT @ 0x14090DAA4 (ExpCreateOutputNT.c)
 *     ExpFindDiskSignature @ 0x14090E024 (ExpFindDiskSignature.c)
 *     ExpParseSignatureName @ 0x14090EBF8 (ExpParseSignatureName.c)
 *     ExpTranslateSymbolicLink @ 0x140910A0C (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpConvertSignatureName(int a1, void *a2, __int64 a3, wchar_t *a4, void *Src)
{
  __int64 result; // rax
  char v9; // di
  int v10; // eax
  int v11; // r12d
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // rdi
  int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-69h]
  char v18[8]; // [rsp+40h] [rbp-49h] BYREF
  int v19; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h]
  __int64 v23; // [rsp+60h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h] BYREF
  __int64 v25; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v27[2]; // [rsp+80h] [rbp-9h] BYREF

  v27[0] = 0LL;
  v27[1] = 0LL;
  v21 = 0LL;
  P = 0LL;
  result = ExpParseSignatureName(a4, (__int64)&v23, (__int64)&v24, (__int64)v18, (__int64)&v18[1]);
  if ( (int)result >= 0 )
  {
    if ( v18[1] == 1 && a1 == 4 )
      return ExpCreateOutputEFI(a2, (__int64)&v23, (__int64)&v24, Src, v18[0]);
    v9 = v18[0];
    v10 = 0;
    if ( !v18[0] )
      v10 = *(_DWORD *)&v18[4];
    v19 = v10;
    result = ExpFindDiskSignature(
               (unsigned int)v27,
               (unsigned int)&v19,
               (unsigned int)&v20,
               (unsigned int)&v26,
               (__int64)&v25,
               v18[0]);
    if ( (int)result >= 0 )
    {
      v11 = v19;
      if ( v18[1] == 1 && (*(_DWORD *)&v18[4] != v19 || v23 != v26 || v24 != v25) )
        return 3221225485LL;
      if ( a1 == 4 )
        return ExpCreateOutputEFI(a2, (__int64)&v26, (__int64)&v25, Src, v9);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      LODWORD(v17) = v11;
      swprintf_s(PoolWithTag, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v20);
      v14 = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(v13, 0);
      if ( v14 < 0 )
        return (unsigned int)v14;
      if ( a1 == 3 )
      {
        v15 = ExpCreateOutputNT(a2, a3, &v21, Src, v17);
      }
      else
      {
        if ( a1 != 1 )
        {
          v16 = -1073741811;
          goto LABEL_26;
        }
        v15 = ExpCreateOutputARC(a2, a3, &v21, Src);
      }
      v16 = v15;
LABEL_26:
      ExFreePoolWithTag(P, 0);
      return v16;
    }
  }
  return result;
}
