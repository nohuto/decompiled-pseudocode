/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C011C848
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1C011C830 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1C011C944 (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C011C9D8 (-UMPDDrvDriverFn@@YAHPEAXPEAH@Z.c)
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C011CA90 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  void *v8; // rbx
  void *v10; // [rsp+20h] [rbp-1C8h] BYREF
  int v11[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v7 = UMPDDrvEnableDriver(a1, &v10);
    if ( !v7 )
      goto LABEL_6;
    v8 = v10;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[5] = v8;
    *((_DWORD *)v4 + 6) = a2;
    *((_DWORD *)v4 + 7) = 1;
    v4[6] = PsGetCurrentProcessWin32Process(v6, v5);
    if ( (UMPDDrvDriverFn(v8, v11) != 0 ? v7 : 0) == 0 || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v11) )
    {
LABEL_6:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
