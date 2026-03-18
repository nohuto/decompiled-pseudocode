/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x1C0153CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C0153DF8 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, char *Src, unsigned int a3)
{
  __int64 v3; // rdi
  _BYTE *v6; // rbx
  unsigned int v7; // r14d
  size_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h]
  int v12; // [rsp+3Ch] [rbp-5Ch]
  HDC v13; // [rsp+40h] [rbp-58h]
  _BYTE v14[32]; // [rsp+48h] [rbp-50h] BYREF

  v3 = a3;
  v13 = a1;
  v6 = 0LL;
  v7 = 1;
  if ( !Src && a3 )
    return 0LL;
  if ( a3 <= 4 )
  {
    v6 = v14;
  }
  else
  {
    if ( a3 <= 0x4E2000 )
      v6 = PALLOCMEM2(8 * a3, 1684629063LL, 0);
    if ( !v6 )
      return 0LL;
  }
  if ( Src )
  {
    v8 = 8 * v3;
    if ( 8 * v3 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v8] > MmUserProbeAddress || &Src[v8] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v6, Src, v8);
  }
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  if ( v10 )
  {
    v7 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)&v10, (struct _UNIVERSAL_FONT_ID *)v6, v3);
    XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
  }
  if ( v6 != v14 )
    Win32FreePool(v6);
  return v7;
}
