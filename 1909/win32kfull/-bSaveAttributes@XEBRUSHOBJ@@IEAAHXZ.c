/*
 * XREFs of ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00E3090
 * Callers:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E3048 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEBRUSHOBJ::bSaveAttributes(XEBRUSHOBJ *this)
{
  _QWORD *v1; // r9
  _QWORD *v3; // r8

  v1 = *(_QWORD **)(*(_QWORD *)this + 48LL);
  if ( v1 != (_QWORD *)(*(_QWORD *)this + 72LL) )
  {
    v3 = (_QWORD *)(*(_QWORD *)this + 64LL);
    if ( v1 != v3 )
    {
      *v3 = *v1;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)(*(_QWORD *)this + 48LL);
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)this + 64LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
