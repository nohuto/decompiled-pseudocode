/*
 * XREFs of ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C0290A98
 * Callers:
 *     NtGdiSetLinkedUFIs @ 0x1C0260F80 (NtGdiSetLinkedUFIs.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v3 = a3;
  *(_DWORD *)(*(_QWORD *)this + 308LL) = a3 == 0;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(v6 + 296);
  if ( v7 )
  {
    if ( (unsigned int)v3 <= *(_DWORD *)(v6 + 304) )
    {
LABEL_7:
      memmove(*(void **)(v6 + 296), a2, 8 * v3);
      result = 1LL;
      *(_DWORD *)(*(_QWORD *)this + 304LL) = v3;
      return result;
    }
    if ( v7 != v6 + 264 )
    {
      Win32FreePool(*(_QWORD *)(v6 + 296));
      *(_QWORD *)(*(_QWORD *)this + 296LL) = 0LL;
    }
  }
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)(*(_QWORD *)this + 296LL) = *(_QWORD *)this + 264LL;
    v6 = *(_QWORD *)this;
    goto LABEL_7;
  }
  *(_QWORD *)(*(_QWORD *)this + 296LL) = PALLOCMEM2((unsigned int)(8 * v3), 1684300103LL, 1);
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 296LL) )
    goto LABEL_7;
  *(_DWORD *)(v6 + 304) = 0;
  return 0LL;
}
