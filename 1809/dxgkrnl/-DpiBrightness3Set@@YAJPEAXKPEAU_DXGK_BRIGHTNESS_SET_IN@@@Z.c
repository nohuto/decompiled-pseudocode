/*
 * XREFs of ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C026AFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiBrightness3Set(_QWORD *a1, __int64 a2, struct _DXGK_BRIGHTNESS_SET_IN *a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int16 v5; // cx
  __int64 v6; // rax
  __int64 (__fastcall *v8)(_QWORD, __int64, struct _DXGK_BRIGHTNESS_SET_IN *); // rax

  v3 = a1[8];
  v4 = 0LL;
  v5 = *(_WORD *)(v3 + 4642);
  v6 = v3 + 4640;
  if ( v5 == 3 )
    v4 = v6;
  if ( !v4 )
    return 3221225659LL;
  v8 = *(__int64 (__fastcall **)(_QWORD, __int64, struct _DXGK_BRIGHTNESS_SET_IN *))(v4 + 32);
  if ( v8 )
    return v8(*(_QWORD *)(v4 + 8), a2, a3);
  else
    return 3221225635LL;
}
