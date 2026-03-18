/*
 * XREFs of ?MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1C029DB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulSurfaceComplete(struct DHPDEV__ *a1, void *a2)
{
  _QWORD *v2; // r8
  int v4; // r11d
  __int64 v5; // rbx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *(_QWORD **)a1;
  v4 = *((_DWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 4);
  v6 = 0;
  while ( 1 )
  {
    v7 = v2[6];
    if ( (*(_DWORD *)(v7 + 1824) & 0x8000000) == 0 )
    {
      if ( *(_QWORD *)(v7 + 3512) )
      {
        if ( (*(_DWORD *)(v5 + 40) & 0x4000000) == 0 )
          break;
        if ( !*v2 )
          break;
        v8 = *(_QWORD *)(v2[7] + 2576LL);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 248) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v8 + 252) == *((_DWORD *)a1 + 27) )
            break;
        }
      }
    }
    v2 = (_QWORD *)*v2;
    if ( !--v4 )
      goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD *, struct DHPDEV__ *))(v7 + 3512))(
         *(_QWORD *)(v7 + 1800),
         a2,
         v2,
         a1);
LABEL_12:
  if ( (*(_DWORD *)(v5 + 40) & 0x4000000) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 1800);
    if ( v9 )
      *(_QWORD *)(v9 + 104) = 0LL;
  }
  return v6;
}
