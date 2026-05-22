/*
 * XREFs of ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800D6478
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4DB0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800D59E0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<AlpcPort::AlpcSectionListEntry>::PopFront(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  v1 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = *v1, *(_QWORD **)(*v1 + 8LL) != v1) )
    __fastfail(3u);
  *a1 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  if ( v1 == a1 )
    return 0LL;
  --a1[2];
  return v1 - 1;
}
