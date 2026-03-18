/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C010A460
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x1C0035BD0 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0qqmx @ 0x1C010E6A8 (McTemplateK0qqmx.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(const struct tagPROCESS_UIFLAG_MAP *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  _DWORD *v6; // r8
  char *v7; // rdx
  __int128 v8; // xmm1
  int v9; // r8d
  int v10; // r9d

  GetDomainLockRef(21LL, a2, a3);
  v4 = 0;
  if ( !gfProcessWindowInfoInit )
  {
    gfProcessWindowInfoInit = 1;
    memset(&gaProcessUIFlagMap, 0, 0x280uLL);
  }
  v5 = (char *)&gaProcessUIFlagMap;
  v6 = &gaProcessUIFlagMap;
  while ( 1 )
  {
    if ( v6[6] < *((_DWORD *)v5 + 6) )
      v5 = (char *)&gaProcessUIFlagMap + 32 * v4;
    if ( *(_QWORD *)v6 == *(_QWORD *)a1 )
      break;
    ++v4;
    v6 += 8;
    if ( v4 >= 0x14 )
      goto LABEL_8;
  }
  v7 = (char *)&gaProcessUIFlagMap + 32 * v4;
  if ( !v7 )
  {
LABEL_8:
    v7 = v5;
    v8 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *((_OWORD *)v5 + 1) = v8;
    goto LABEL_9;
  }
  v9 = *((_DWORD *)a1 + 5);
  v10 = *((_DWORD *)v7 + 5);
  *((_DWORD *)v7 + 6) = *((_DWORD *)a1 + 6);
  if ( (v10 & v9) == v9 )
    return;
  LODWORD(v6) = v10 | v9;
  *((_DWORD *)v7 + 5) = (_DWORD)v6;
LABEL_9:
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    McTemplateK0qqmx(
      (_DWORD)v7 + 8,
      (_DWORD)v7,
      (_DWORD)v6,
      *((_DWORD *)v7 + 5),
      *((_DWORD *)v7 + 4),
      (__int64)(v7 + 8),
      *(_QWORD *)v7);
}
