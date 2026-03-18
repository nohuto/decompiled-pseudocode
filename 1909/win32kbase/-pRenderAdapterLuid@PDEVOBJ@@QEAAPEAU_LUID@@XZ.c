/*
 * XREFs of ?pRenderAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0098F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pRenderAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  __int64 v5; // rdx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( v2 == -4 )
  {
    if ( (*(_DWORD *)(v1 + 40) & 0x20000) != 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1800) + 40LL) + 2576LL);
      if ( (*(_DWORD *)(v5 + 160) & 0x4800000) == 0x4000000 )
        return (struct _LUID *)(v5 + 296);
      else
        return (struct _LUID *)(v5 + 248);
    }
  }
  else if ( !v2 || (*(_DWORD *)(v1 + 40) & 0x20000) != 0 )
  {
    return 0LL;
  }
  v3 = *(_DWORD *)(v2 + 160);
  if ( (v3 & 0x4000000) == 0 || (v3 & 0x800000) != 0 )
    return (struct _LUID *)(v2 + 248);
  else
    return (struct _LUID *)(v2 + 296);
}
