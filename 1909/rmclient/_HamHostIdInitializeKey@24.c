/*
 * XREFs of _HamHostIdInitializeKey@24 @ 0x10005930
 * Callers:
 *     <none>
 * Callees:
 *     StringLengthWorkerW @ 0x10005A70 (StringLengthWorkerW.c)
 *     StringCopyWorkerW @ 0x10005AC0 (StringCopyWorkerW.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __userpurge HamHostIdInitializeKey@<eax>(
        size_t a1@<edi>,
        int a2,
        PSID Sid,
        int a4,
        unsigned int a5,
        size_t cchDest,
        char *a7)
{
  _WORD *v7; // eax
  int v8; // edx
  __int16 v9; // cx
  char *v10; // ecx
  int v11; // edx
  int v12; // esi
  __int16 v13; // ax
  const wchar_t *v15; // [esp-4h] [ebp-10h]
  size_t *v16; // [esp+0h] [ebp-Ch]
  wchar_t psz; // [esp+8h] [ebp-4h] BYREF

  if ( !(unsigned __int8)PsmIsValidKey(a2) )
    return -1073741585;
  if ( !RtlValidSid(Sid) )
    return -1073741584;
  if ( a5 > 3 )
    return -1073741582;
  v15 = (const wchar_t *)a1;
  if ( cchDest && StringLengthWorkerW(&psz, a1, v16) < 0 )
    return -1073741581;
  memset(a7, 0, 0x418u);
  v7 = a7;
  v8 = 232;
  while ( v8 != -2147483414 )
  {
    v9 = *(_WORD *)((char *)v7 + a2 - (_DWORD)a7);
    if ( !v9 )
      break;
    *v7++ = v9;
    if ( !--v8 )
    {
      --v7;
      break;
    }
  }
  *v7 = 0;
  RtlCopySid(0x44u, a7 + 464, Sid);
  v10 = a7 + 536;
  v11 = 256;
  if ( cchDest )
  {
    StringCopyWorkerW((STRSAFE_LPWSTR)a7 + 268, cchDest, (size_t *)a7 + 134, v15, (size_t)v16);
    *((_DWORD *)a7 + 133) = a4;
    return 0;
  }
  else
  {
    v12 = (char *)off_10001A38[a5] - v10;
    while ( v11 != -2147483390 )
    {
      v13 = *(_WORD *)&v10[v12];
      if ( !v13 )
        break;
      *(_WORD *)v10 = v13;
      v10 += 2;
      if ( !--v11 )
      {
        v10 -= 2;
        break;
      }
    }
    *(_WORD *)v10 = 0;
    *((_DWORD *)a7 + 133) = a4;
    return 0;
  }
}
