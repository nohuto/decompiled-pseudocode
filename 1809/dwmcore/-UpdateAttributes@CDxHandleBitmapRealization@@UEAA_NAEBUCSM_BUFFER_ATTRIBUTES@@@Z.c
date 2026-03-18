/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180065B8C (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18009B044 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // r8
  bool updated; // bl
  char v9; // al
  bool v10; // cl
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *))(*(_QWORD *)this + 48LL))(this, &v12);
  v5 = *((_DWORD *)this + 49);
  v6 = 3;
  if ( *((_DWORD *)this + 38) )
    v6 = *((_DWORD *)this + 38);
  v7 = *((_DWORD *)a2 + 29) & 1;
  if ( (_DWORD)v7 != (*((_DWORD *)this + 67) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 20) )
    *((_DWORD *)this + 106) = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(v4, &v13, v7, *((_QWORD *)a2 + 1));
  updated = CBitmapRealization::UpdateAttributes(this, a2);
  v9 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 96LL))(
         this,
         v12,
         v6,
         v5);
  v10 = updated;
  if ( v9 )
    return 1;
  return v10;
}
