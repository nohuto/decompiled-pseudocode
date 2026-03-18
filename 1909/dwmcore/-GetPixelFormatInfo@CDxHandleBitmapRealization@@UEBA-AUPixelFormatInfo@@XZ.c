/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800BF9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 104) + 24LL))(v2 + 104);
  }
  else
  {
    *a2 = 0;
    v5 = 3;
    if ( *(_DWORD *)(a1 + 8) )
      v5 = *(_DWORD *)(a1 + 8);
    a2[1] = v5;
    a2[2] = *(_DWORD *)(a1 + 52);
  }
  return a2;
}
