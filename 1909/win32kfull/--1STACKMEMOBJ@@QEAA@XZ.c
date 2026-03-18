/*
 * XREFs of ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B13D4
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

void __fastcall STACKMEMOBJ::~STACKMEMOBJ(STACKMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    Win32FreePool(v4);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
